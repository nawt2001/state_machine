//
// Created by twanw on 01/12/2022.
//

#ifndef STATE_MACHINE_IACTION_H
#define STATE_MACHINE_IACTION_H
namespace Actions {
    // iAction is an abstract base class that defines a common interface for different types of actions
    class iAction {
    public:
        // virtual destructor is marked as default, which means it does nothing and simply calls the base class destructor
        virtual ~iAction() = default;
        // pure virtual function that must be implemented by any class that derives from iAction
        // the purpose of this function is to perform some action, but the specific action performed is dependent on the derived class
        virtual void action() const = 0;
    };
}
#endif //STATE_MACHINE_IACTION_H
