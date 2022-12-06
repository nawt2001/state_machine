//
// Created by twanw on 01/12/2022.
//

#ifndef STATE_MACHINE_STATE_H
#define STATE_MACHINE_STATE_H

#include <string>
#include <memory>
#include "iTransitions.h"
#include "iAction.h"
#include <stack>

namespace state{
    class state{
    public:
        //normal state which has a next state
        state(std::unique_ptr<state> next_state,std::stack<Actions::iAction*> stack);
        //last state has no next_state
        state(std::stack<Actions::iAction*> stack);
        state() = default;
        void linking(std::unique_ptr<state> next_state);
        ~state() = default;
        void run();
    private:
        std::string _name;
        const char* name() {return _name.c_str();}
        std::unique_ptr<state> next_state_;
        std::stack<Actions::iAction*> stack_;
    };
}
#endif //STATE_MACHINE_STATE_H
