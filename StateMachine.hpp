#pragma once

#include <memory>
#include <stack>
#include "State.hpp"

namespace Mda
{
    typedef  std::unique_ptr<State> StateRef;
    
    class StateMachine
    {
        public:
            StateMachine( ) { }
            ~StateMachine( ) { }
            /*this add a state on to the stack and that will be the latest state that is running everything eles will
            will be pause */
            void AddState( StateRef newState, bool isReplacing = true );
            void RemoveState( );
            void ProcessStateChanges( );
            StateRef &GetActiveState( );
        
        private:
            std::stack<StateRef> _states;
            StateRef _newState;
            bool _isRemoving;
            bool _isAdding;
            bool _isReplacing;
    };
}
