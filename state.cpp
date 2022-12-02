//
// Created by twanw on 01/12/2022.
//

#include <iostream>
#include "state.h"

state::state::state(std::unique_ptr<state> next_state,
                    std::stack<Actions::iAction> stack) {
    next_state_ = std::move(next_state);
    stack_ = stack;
}

void state::state::run()
{
    std::cout << "test" << std::endl;
    //go to next state

}

void state::state::linking(std::unique_ptr<state> next_state)
{
    next_state_ = std::move(next_state);
}

state::state::state(std::stack<Actions::iAction> stack)
{
    stack_ = stack;
}

