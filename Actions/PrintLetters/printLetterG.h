//
// Created by twanw on 07/12/2022.
//

#ifndef STATE_MACHINE_PRINTLETTERG_H
#define STATE_MACHINE_PRINTLETTERG_H

#include "../../iAction.h"

namespace printLetter{
    class printLetterG: public Actions::iAction{
    public:
        printLetterG() = default;
        virtual void action() const override;
    };
}
#endif //STATE_MACHINE_PRINTLETTERG_H
