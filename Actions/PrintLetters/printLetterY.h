//
// Created by twanw on 07/12/2022.
//

#ifndef STATE_MACHINE_PRINTLETTERY_H
#define STATE_MACHINE_PRINTLETTERY_H

#include "../../iAction.h"

namespace printLetter{
    class printLetterY: public Actions::iAction{
    public:
        printLetterY() = default;
        virtual void action() const override;
    };
}
#endif //STATE_MACHINE_PRINTLETTERY_H
