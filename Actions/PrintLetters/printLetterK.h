//
// Created by twanw on 07/12/2022.
//

#ifndef STATE_MACHINE_PRINTLETTERK_H
#define STATE_MACHINE_PRINTLETTERK_H

#include "../../iAction.h"

namespace printLetter{
    class printLetterK: public Actions::iAction{
    public:
        printLetterK() = default;
        virtual void action() const override;
    };
}
#endif //STATE_MACHINE_PRINTLETTERK_H
