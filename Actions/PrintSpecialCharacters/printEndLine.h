//
// Created by twanw on 07/12/2022.
//
#include "../../iAction.h"

#ifndef STATE_MACHINE_PRINTENDLINE_H
#define STATE_MACHINE_PRINTENDLINE_H
namespace printSpecialCharactersEndLine{
    class printEndLine: public Actions::iAction{
    public:
        printEndLine() = default;
        virtual void action() const override;
    };
}
#endif //STATE_MACHINE_PRINTENDLINE_H
