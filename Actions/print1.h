//
// Created by twanw on 06/12/2022.
//
#include "../iAction.h"

#ifndef STATE_MACHINE_PRINT1_H
#define STATE_MACHINE_PRINT1_H
namespace print1{
    class print1: public Actions::iAction{
    public:
        print1() = default;
        virtual void action() const override;
    };
}
#endif //STATE_MACHINE_PRINT1_H
