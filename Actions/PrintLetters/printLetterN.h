//
// Created by twanw on 07/12/2022.
//

#ifndef STATE_MACHINE_PRINTLETTERN_H
#define STATE_MACHINE_PRINTLETTERN_H

#include "../../iAction.h"

namespace printLetterN{
    class printLetterN: public Actions::iAction{
    public:
        printLetterN() = default;
        virtual void action() const override;
    };
}
#endif //STATE_MACHINE_PRINTLETTERN_H
