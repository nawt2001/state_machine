//
// Created by twanw on 01/12/2022.
//

#include <iostream>
#include "state.h"

state::state::state(std::unique_ptr<state> next_state, std::vector<Actions::iAction*> queue)
{
    next_state_ = std::move(next_state);
    queue_ = queue;
//    run();
}

void state::state::run()
{
    //go to next state

    for (int i = 0; i < queue_.size(); ++i) {
        queue_[i]->action();
    }

//    while(!queue_.empty())
//    {
//        queue_.front()->action();
//        queue_.pop();
//    }
    if(next_state_)
    {
        next_state_->run();
    }
}

state::state::state(std::vector<Actions::iAction*> queue)
{
    queue_ = queue;
}

state::state * state::state::link(std::unique_ptr<state> next_state) {
    next_state_ = std::move(next_state);
    return this;
}



