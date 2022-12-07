//
// Created by twanw on 07/12/2022.
//

#ifndef STATE_MACHINE_PRINTLETTERW_H
#define STATE_MACHINE_PRINTLETTERW_H

#include "../../iAction.h"

namespace printLetterW{
    class printLetterW: public Actions::iAction{
    public:
        printLetterW() = default;
        virtual void action() const override;
    };
}
#endif //STATE_MACHINE_PRINTLETTERW_H
