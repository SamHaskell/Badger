#pragma once

#include "Badger/Base/Base.hpp"
#include "Badger/Core/Application.hpp"

#include <memory>

extern std::unique_ptr<Badger::Application> Badger::CreateApplication();

int main(int argc, char **argv) {
    auto app = Badger::CreateApplication();
    if (!app->Run()) {
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}