#include <iostream>
#include "state.h"
#include "iAction.h"
#include <stack>
#include "Actions/LedOn.h"
#include <memory>


int main() {
    std::stack<Actions::iAction*> stack;
    std::stack<Actions::iAction*> stack2;
    std::unique_ptr<LedOn::LedOn> led = std::make_unique<LedOn::LedOn>();
    auto led2 = new LedOn::LedOn();
    stack.push(led2);
    stack.push(led2);

    //program run start state
    std::unique_ptr<state::state> state4 = std::make_unique<state::state>(stack);
    std::unique_ptr<state::state> state3 = std::make_unique<state::state>(std::move(state4),stack);
    std::unique_ptr<state::state> state2 = std::make_unique<state::state>(std::move(state3),stack);
    std::unique_ptr<state::state> state1 = std::make_unique<state::state>(std::move(state2),stack);

    return 0;
}
