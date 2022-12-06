//
// Created by twanw on 02/12/2022.
//

#include "../iAction.h"


#ifndef STATE_MACHINE_LEDON_H
#define STATE_MACHINE_LEDON_H
namespace LedOn{
    class LedOn: public Actions::iAction{
    public:
        LedOn() = default;
        virtual void action() const override;
    };
}
#endif //STATE_MACHINE_LEDON_H
