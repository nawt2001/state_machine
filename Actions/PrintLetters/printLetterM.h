//
// Created by twanw on 07/12/2022.
//

#ifndef STATE_MACHINE_PRINTLETTERM_H
#define STATE_MACHINE_PRINTLETTERM_H

#include "../../iAction.h"

namespace printLetter{
    class printLetterM: public Actions::iAction{
    public:
        printLetterM() = default;
        virtual void action() const override;
    };
}
#endif //STATE_MACHINE_PRINTLETTERM_H
