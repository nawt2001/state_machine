//
// Created by twanw on 07/12/2022.
//

#ifndef STATE_MACHINE_PRINTLETTERS_H
#define STATE_MACHINE_PRINTLETTERS_H

#include "../../iAction.h"

namespace printLetter{
    class printLetterS: public Actions::iAction{
    public:
        printLetterS() = default;
        virtual void action() const override;
    };
}
#endif //STATE_MACHINE_PRINTLETTERS_H
