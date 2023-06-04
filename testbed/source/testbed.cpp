#include <Badger.hpp>

#include <iostream>

class Testbed : public Badger::Application {
    public:
        Testbed() { CX_DEBUG("Hello from the Testbed!"); }
        ~Testbed() {}
    private:
};

std::unique_ptr<Badger::Application> Badger::CreateApplication() {
    return std::make_unique<Testbed>();
}