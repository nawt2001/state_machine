//
// Created by twanw on 07/12/2022.
//

#ifndef STATE_MACHINE_PRINTLETTERU_H
#define STATE_MACHINE_PRINTLETTERU_H

#include "../../iAction.h"

namespace printLetterU{
    class printLetterU: public Actions::iAction{
    public:
        printLetterU() = default;
        virtual void action() const override;
    };
}
#endif //STATE_MACHINE_PRINTLETTERU_H
