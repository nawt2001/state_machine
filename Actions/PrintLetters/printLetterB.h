//
// Created by twanw on 07/12/2022.
//

#ifndef STATE_MACHINE_PRINTLETTERB_H
#define STATE_MACHINE_PRINTLETTERB_H

#include "../../iAction.h"

namespace printLetter{
    class printLetterB: public Actions::iAction{
    public:
        printLetterB() = default;
        virtual void action() const override;
    };
}
#endif //STATE_MACHINE_PRINTLETTERB_H
