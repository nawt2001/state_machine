//
// Created by twanw on 07/12/2022.
//

#ifndef STATE_MACHINE_PRINTLETTERT_H
#define STATE_MACHINE_PRINTLETTERT_H

#include "../../iAction.h"

namespace printLetterT{
    class printLetterT: public Actions::iAction{
    public:
        printLetterT() = default;
        virtual void action() const override;
    };
}
#endif //STATE_MACHINE_PRINTLETTERT_H
