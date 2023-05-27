#ifndef CPP_LAB_2_FILEWRITER_H
#define CPP_LAB_2_FILEWRITER_H

#include <string>
#include <fstream>
#include <memory>
#include "exception"

namespace Service {
    class FileService {
    private:
        std::unique_ptr<std::fstream> file;
    public:
        void open(const std::string& filename);
        void write(const std::string& text);
        explicit FileService() : file(nullptr) {
        }
    };
}

#endif
