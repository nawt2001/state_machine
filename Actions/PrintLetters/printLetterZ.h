//
// Created by twanw on 07/12/2022.
//

#ifndef STATE_MACHINE_PRINTLETTERZ_H
#define STATE_MACHINE_PRINTLETTERZ_H

#include "../../iAction.h"

namespace printLetterZ{
    class printLetterZ: public Actions::iAction{
    public:
        printLetterZ() = default;
        virtual void action() const override;
    };
}
#endif //STATE_MACHINE_PRINTLETTERZ_H
