#include "App.h"
#include "Service/DisplayService/DisplayServiceInterface.h"
#include "Service/FileService/FileWriter.h"

using namespace std;
int App::start() {
    Service::FileService fileService;
    try {
        fileService.open("C:\\Users\\Anton\\Documents\\GitHub\\cpp-lab-2\\file.txt");
        fileService.write("Все работает !\n");
    } catch (const std::exception& e) {
        this->displayService->displayError(e);
        return -1;
    }
    return 0;
}

App::App(
        Service::DisplayServiceInterface* displayService
) {
    this->displayService = displayService;
}

App *App::create(Service::DisplayServiceInterface* displayService) {
    return new App(displayService);
}