//
// Created by twanw on 07/12/2022.
//

#ifndef STATE_MACHINE_PRINTEXCLAMATIONMARK_H
#define STATE_MACHINE_PRINTEXCLAMATIONMARK_H

#include "../../iAction.h"

namespace printSpecialCharactersExclamationMark{
    class printExclamationMark: public Actions::iAction{
    public:
        printExclamationMark() = default;
        virtual void action() const override;
    };
}
#endif //STATE_MACHINE_PRINTEXCLAMATIONMARK_H
