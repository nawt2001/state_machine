//
// Created by twanw on 07/12/2022.
//

#ifndef STATE_MACHINE_PRINTLETTERQ_H
#define STATE_MACHINE_PRINTLETTERQ_H

#include "../../iAction.h"

namespace printLetterQ{
    class printLetterQ: public Actions::iAction{
    public:
        printLetterQ() = default;
        virtual void action() const override;
    };
}
#endif //STATE_MACHINE_PRINTLETTERQ_H
