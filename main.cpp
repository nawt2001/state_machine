#include <iostream>
#include "state.h"
#include "iAction.h"
#include <stack>
#include "Actions/LedOn.h"
#include "Actions/print1.h"
#include "Actions/print2.h"
#include "Actions/print3.h"
#include <memory>


int main() {
    std::stack<Actions::iAction*> actieLijst1;
    std::stack<Actions::iAction*> actieLijst2;
    std::stack<Actions::iAction*> actieLijst3;
    std::stack<Actions::iAction*> actieLijst4;
    auto print1 = new print1::print1();
    auto print2 = new print2::print2();
    auto print3 = new print3::print3();
    actieLijst1.push(print2);
    actieLijst2.push(print1);
    actieLijst3.push(print3);
    actieLijst4.push(print1);

    //program run start state
    std::unique_ptr<state::state> state4 = std::make_unique<state::state>(actieLijst1);
    std::unique_ptr<state::state> state3 = std::make_unique<state::state>(std::move(state4), actieLijst2);
    std::unique_ptr<state::state> state2 = std::make_unique<state::state>(std::move(state3), actieLijst3);
    std::unique_ptr<state::state> state1 = std::make_unique<state::state>(std::move(state2), actieLijst4);

    return 0;
}
