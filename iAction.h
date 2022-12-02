//
// Created by twanw on 01/12/2022.
//

#ifndef STATE_MACHINE_IACTION_H
#define STATE_MACHINE_IACTION_H
namespace Actions {
    class iAction {
    public:
        virtual ~iAction() = default;
        virtual void action() const = 0;
    };
}
#endif //STATE_MACHINE_IACTION_H
