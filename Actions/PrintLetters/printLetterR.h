//
// Created by twanw on 07/12/2022.
//

#ifndef STATE_MACHINE_PRINTLETTERR_H
#define STATE_MACHINE_PRINTLETTERR_H

#include "../../iAction.h"

namespace printLetterR{
    class printLetterR: public Actions::iAction{
    public:
        printLetterR() = default;
        virtual void action() const override;
    };
}
#endif //STATE_MACHINE_PRINTLETTERR_H
