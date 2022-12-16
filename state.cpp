//
// Created by twanw on 01/12/2022.
//

#include <iostream>
#include "state.h"

state::state::state(std::unique_ptr<state> next_state, std::vector<Actions::iAction*> queue)
{
    // Initialize next_state_ with the value of next_state, transferring ownership of the pointed-to object
    next_state_ = std::move(next_state);
    // Initialize queue_ with the value of queue
    queue_ = queue;
}

void state::state::run()
{
    // Iterate through all the actions in the queue_ vector
    for (int i = 0; i < queue_.size(); ++i) {
        // Call the action() function on each action in the queue
        queue_[i]->action();
    }
    // If the next_state_ unique_ptr is not null (i.e. it points to a valid state object)
    if(next_state_)
    {
        // Recursively call the run() function on the next state
        next_state_->run();
    }
}

state::state::state(std::vector<Actions::iAction*> queue)
{
    // Initialize queue_ with the value of queue
    queue_ = queue;
}

state::state * state::state::link(std::unique_ptr<state> next_state) {
    // Initialize next_state_ with the value of next_state, transferring ownership of the pointed-to object
    next_state_ = std::move(next_state);
    // Return a pointer to the current state object
    return this;
}



