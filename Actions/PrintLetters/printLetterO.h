//
// Created by twanw on 07/12/2022.
//

#ifndef STATE_MACHINE_PRINTLETTERO_H
#define STATE_MACHINE_PRINTLETTERO_H

#include "../../iAction.h"

namespace printLetterO{
    class printLetterO: public Actions::iAction{
    public:
        printLetterO() = default;
        virtual void action() const override;
    };
}
#endif //STATE_MACHINE_PRINTLETTERO_H
