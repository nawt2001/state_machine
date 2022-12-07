//
// Created by twanw on 07/12/2022.
//

#ifndef STATE_MACHINE_PRINTLETTERL_H
#define STATE_MACHINE_PRINTLETTERL_H

#include "../../iAction.h"

namespace printLetter{
    class printLetterL: public Actions::iAction{
    public:
        printLetterL() = default;
        virtual void action() const override;
    };
}
#endif //STATE_MACHINE_PRINTLETTERL_H
