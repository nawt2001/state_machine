#include <iostream>
#include "state.h"
#include "iAction.h"
#include <stack>
#include "Actions/LedOn.h"


int main() {
    std::stack<Actions::iAction> stack;
    stack.push(LedOn)

    //Vector aan maken met alle acties (classes)
    //Vector met transitions aanmaken (classes)
    //State aanmaken

    ///Linking part
    //State1.link(State2)

    ///State dat wil starten
    //StateX.start()

    //program run start state



    state st1 = state(nest_state,transition,stack(fifo)_actions)
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
