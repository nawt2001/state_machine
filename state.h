//
// Created by twanw on 01/12/2022.
//

#ifndef STATE_MACHINE_STATE_H
#define STATE_MACHINE_STATE_H

#include <string>
#include <memory>
#include "iTransitions.h"
#include "iAction.h"
#include <queue>

namespace state{
    class state{
    public:
        //normal state which has a next state
        state(std::unique_ptr<state> next_state,std::vector<Actions::iAction*> queue);
        //last state has no next_state
        state(std::vector<Actions::iAction*> queue);
        state() = default;
        ~state() = default;
        void run();
        state * link(std::unique_ptr<state> next_state);
    private:
        std::unique_ptr<state> next_state_;
        std::vector<Actions::iAction*> queue_;

    };
}
#endif //STATE_MACHINE_STATE_H
