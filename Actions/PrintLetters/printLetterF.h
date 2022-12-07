//
// Created by twanw on 07/12/2022.
//

#ifndef STATE_MACHINE_PRINTLETTERF_H
#define STATE_MACHINE_PRINTLETTERF_H

#include "../../iAction.h"

namespace printLetterF{
    class printLetterF: public Actions::iAction{
    public:
        printLetterF() = default;
        virtual void action() const override;
    };
}
#endif //STATE_MACHINE_PRINTLETTERF_H
