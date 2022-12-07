//
// Created by twanw on 07/12/2022.
//

#ifndef STATE_MACHINE_PRINTLETTERV_H
#define STATE_MACHINE_PRINTLETTERV_H

#include "../../iAction.h"

namespace printLetter{
    class printLetterV: public Actions::iAction{
    public:
        printLetterV() = default;
        virtual void action() const override;
    };
}
#endif //STATE_MACHINE_PRINTLETTERV_H
