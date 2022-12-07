//
// Created by twanw on 01/12/2022.
//

#include <iostream>
#include "state.h"

state::state::state(std::unique_ptr<state> next_state,
                    std::queue<Actions::iAction*> queue) {
    next_state_ = std::move(next_state);
    queue_ = queue;
    run();
}

void state::state::run()
{
    //go to next state
    while(!queue_.empty())
    {
        queue_.front()->action();
        queue_.pop();
    }
    std::cout << "einde van de state" <<  std::endl;
}



state::state::state(std::queue<Actions::iAction*> queue)
{
    queue_ = queue;
    run();
}

