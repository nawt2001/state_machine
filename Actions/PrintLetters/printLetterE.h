//
// Created by twanw on 07/12/2022.
//

#ifndef STATE_MACHINE_PRINTLETTERE_H
#define STATE_MACHINE_PRINTLETTERE_H

#include "../../iAction.h"

namespace printLetterE{
    class printLetterE: public Actions::iAction{
    public:
        printLetterE() = default;
        virtual void action() const override;
    };
}
#endif //STATE_MACHINE_PRINTLETTERE_H
