//
// Created by twanw on 07/12/2022.
//

#ifndef STATE_MACHINE_PRINTLETTERP_H
#define STATE_MACHINE_PRINTLETTERP_H

#include "../../iAction.h"

namespace printLetterP{
    class printLetterP: public Actions::iAction{
    public:
        printLetterP() = default;
        virtual void action() const override;
    };
}
#endif //STATE_MACHINE_PRINTLETTERP_H
