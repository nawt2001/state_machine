//
// Created by twanw on 07/12/2022.
//

#ifndef STATE_MACHINE_PRINTLETTERD_H
#define STATE_MACHINE_PRINTLETTERD_H

#include "../../iAction.h"

namespace printLetterD{
    class printLetterD: public Actions::iAction{
    public:
        printLetterD() = default;
        virtual void action() const override;
    };
}
#endif //STATE_MACHINE_PRINTLETTERD_H
