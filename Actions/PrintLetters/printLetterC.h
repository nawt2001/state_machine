//
// Created by twanw on 07/12/2022.
//

#ifndef STATE_MACHINE_PRINTLETTERC_H
#define STATE_MACHINE_PRINTLETTERC_H

#include "../../iAction.h"

namespace printLetter{
    class printLetterC: public Actions::iAction{
    public:
        printLetterC() = default;
        virtual void action() const override;
    };
}
#endif //STATE_MACHINE_PRINTLETTERC_H
