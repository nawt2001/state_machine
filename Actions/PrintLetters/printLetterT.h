//
// Created by twanw on 07/12/2022.
//

#ifndef STATE_MACHINE_PRINTLETTERA_H
#define STATE_MACHINE_PRINTLETTERA_H

#include "../../iAction.h"

namespace printLetter{
    class printLetterT: public Actions::iAction{
    public:
        printLetterT() = default;
        virtual void action() const override;
    };
}
#endif //STATE_MACHINE_PRINTLETTERA_H
