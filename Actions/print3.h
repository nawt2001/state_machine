//
// Created by twanw on 06/12/2022.
//
#include "../iAction.h"

#ifndef STATE_MACHINE_PRINT3_H
#define STATE_MACHINE_PRINT3_H
namespace print3{
    class print3: public Actions::iAction{
    public:
        print3() = default;
        virtual void action() const override;
    };
}
#endif //STATE_MACHINE_PRINT3_H
