#include "src/App.h"
#include "src/Service/DisplayService/ConsoleDisplayService.h"

int main() {
    return App::create(
            new Service::ConsoleDisplayService()
    )->start(); // DI Container
}