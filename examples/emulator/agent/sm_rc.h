#ifndef SM_RAN_CTRL_READ_WRITE_AGENT_H
#define SM_RAN_CTRL_READ_WRITE_AGENT_H

#include "../../../src/agent/e2_agent_api.h"
#include "../../../src/sm/rc_sm/rc_sm_id.h"

void init_rc_sm(void);

void free_rc_sm(void);

bool read_rc_sm(void *);

void read_rc_setup_sm(void* data);

sm_ag_if_ans_t write_ctrl_rc_sm(void const* data);

sm_ag_if_ans_t write_subs_rc_sm(void const* src);

#endif

