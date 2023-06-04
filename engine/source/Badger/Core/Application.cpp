#include "Badger/Core/Application.hpp"

#include "glad/glad.h"
#include <iostream>

namespace Badger {
    Application::Application() { CX_DEBUG("Hello from the Application!"); }
    Application::~Application() {}
    
    bool Application::Run() {
        return true;
    }
}