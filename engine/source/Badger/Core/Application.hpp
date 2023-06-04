#pragma once

#include "Badger/Base/Base.hpp"

#include <memory>

namespace Badger {
    class Application {
        public:
            Application();
            virtual ~Application();
            bool Run();
        private:
            bool _running;
            bool _suspended;
    };

    std::unique_ptr<Application> CreateApplication();
}