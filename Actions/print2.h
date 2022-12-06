//
// Created by twanw on 06/12/2022.
//
#include "../iAction.h"

#ifndef STATE_MACHINE_PRINT2_H
#define STATE_MACHINE_PRINT2_H
namespace print2{
    class print2: public Actions::iAction{
    public:
        print2() = default;
        virtual void action() const override;
    };
}
#endif //STATE_MACHINE_PRINT2_H
