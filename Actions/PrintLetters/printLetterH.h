//
// Created by twanw on 07/12/2022.
//

#ifndef STATE_MACHINE_PRINTLETTERH_H
#define STATE_MACHINE_PRINTLETTERH_H

#include "../../iAction.h"

namespace printLetter{
    class printLetterH: public Actions::iAction{
    public:
        printLetterH() = default;
        virtual void action() const override;
    };
}
#endif //STATE_MACHINE_PRINTLETTERH_H
