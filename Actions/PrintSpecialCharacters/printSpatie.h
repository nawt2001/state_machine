//
// Created by twanw on 07/12/2022.
//

#ifndef STATE_MACHINE_PRINTSPATIE_H
#define STATE_MACHINE_PRINTSPATIE_H

#include "../../iAction.h"

namespace printSpecialCharactersSpatie{
    class printSpatie: public Actions::iAction{
    public:
        printSpatie() = default;
        virtual void action() const override;
    };
}
#endif //STATE_MACHINE_PRINTLETTERA_H
