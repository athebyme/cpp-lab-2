#include <fstream>
#include "FileWriter.h"
#include <exception>
namespace Service {
    void FileService::write(const std::string& text) {
        if (!file) throw std::exception();
        file->write(text.c_str(), text.size());
    }

    void FileService::open(const std::string& filename) {
        file = std::make_unique<std::fstream>(filename);
        if (!(*file)) {
            throw std::exception();
        }
    }
}

