#include "FSM.h"

void handle_event(fsm_t *fsm, event_t event)
{
    // Confirm the event is valid for the given FSM
    if (event >= fsm->nevents)
        return;

    // Use the FSM's lookup tables; if next is -1,
    // the event is not defined for the current state
    action_t effect = NULL;
    state_t next = fsm->transition(fsm, event, &effect);
    if (next == -1)
        return;

    // Perform the effect (if defined) and change the state
    if (effect != NULL)
        effect(fsm);
    fsm->state = next;
}