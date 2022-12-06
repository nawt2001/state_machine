//
// Created by twanw on 01/12/2022.
//

#include <iostream>
#include "state.h"

state::state::state(std::unique_ptr<state> next_state,
                    std::stack<Actions::iAction*> stack) {
    next_state_ = std::move(next_state);
    stack_ = stack;
    run();
}

void state::state::run()
{
    //go to next state
    while(!stack_.empty())
    {
        stack_.top()->action();
        stack_.pop();
    }
}

void state::state::linking(std::unique_ptr<state> next_state)
{
    next_state_ = std::move(next_state);
}

state::state::state(std::stack<Actions::iAction*> stack)
{
    stack_ = stack;
    run();
}

