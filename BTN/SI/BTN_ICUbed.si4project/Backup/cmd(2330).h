
#ifndef __CMD_H
#define	__CMD_H

#define	BOARD_LR	1

#if	BOARD_LR //left board
/* inside */

const static  char INBACK_UP_ON[]    = {0xaa,0x03,0x01,0x0F};
const static  char INBACK_UP_OFF[]   = {0xaa,0x03,0x01,0x00};

const static  char INBACK_DOWN_ON[]  = {0xaa,0x03,0x01,0x10};
const static  char INBACK_DOWN_OFF[] = {0xaa,0x03,0x01,0x00};

const static  char INLEG_UP_ON[]     = {0xaa,0x03,0x01,0x11};
const static  char INLEG_UP_OFF[]    = {0xaa,0x03,0x01,0x00};

const static  char INLEG_DOWN_ON[]   = {0xaa,0x03,0x01,0x12};
const static  char INLEG_DOWN_OFF[]  = {0xaa,0x03,0x01,0x00};

const static  char IN_CALL_ON[]      = {0xaa,0x03,0x01,0x13};
const static  char IN_CALL_OFF[]     = {0xaa,0x03,0x01,0x00};


/* outside */

const static  char OUTBED_UP_ON[]        = {0xaa,0x03,0x01,0x01};
const static  char OUTBED_UP_OFF[]       = {0xaa,0x03,0x01,0x00};

const static  char OUTBED_DOWN_ON[]      = {0xaa,0x03,0x01,0x02};
const static  char OUTBED_DOWN_OFF[]     = {0xaa,0x03,0x01,0x00};

const static  char OUTBACK_UP_ON[]       = {0xaa,0x03,0x01,0x03};
const static  char OUTBACK_UP_OFF[]      = {0xaa,0x03,0x01,0x00};

const static  char OUTBACK_DOWN_ON[]     = {0xaa,0x03,0x01,0x04};
const static  char OUTBACK_DOWN_OFF[]    = {0xaa,0x03,0x01,0x00};

const static  char OUTLEG_UP_ON[]        = {0xaa,0x03,0x01,0x05};
const static  char OUTLEG_UP_OFF[]       = {0xaa,0x03,0x01,0x05};

const static  char OUTLEG_DOWN_ON[]      = {0xaa,0x03,0x01,0x06};
const static  char OUTLEG_DOWN_OFF[]     = {0xaa,0x03,0x01,0x00};

const static  char OUTPITCH_FRONT_ON[]   = {0xaa,0x03,0x01,0x07};
const static  char OUTPITCH_FRONT_OFF[]  = {0xaa,0x03,0x01,0x00};

const static  char OUTPITCH_AFTER_ON[]   = {0xaa,0x03,0x01,0x08};
const static  char OUTPITCH_AFTER_OFF[]  = {0xaa,0x03,0x01,0x00};

const static  char OUTROLL_LEFT_ON[]     = {0xaa,0x03,0x01,0x09};
const static  char OUTROLL_LEFT_OFF[]    = {0xaa,0x03,0x01,0x00};

const static  char OUTROLL_RIGHT_ON[]    = {0xaa,0x03,0x01,0x0a};
const static  char OUTROLL_RIGHT_OFF[]   = {0xaa,0x03,0x01,0x00};

const static  char OUT_CALL_ON[]         = {0xaa,0x03,0x01,0x0b};
const static  char OUT_CALL_OFF[]        = {0xaa,0x03,0x01,0x00};

const static  char OUT_FLOWER_ON[]       = {0xaa,0x03,0x01,0x0c};
const static  char OUT_FLOWER_OFF[]      = {0xaa,0x03,0x01,0x00};

const static  char OUT_CCP_ON[]          = {0xaa,0x03,0x01,0x0d};
const static  char OUT_CCP_OFF[]         = {0xaa,0x03,0x01,0x00};

const static  char OUT_CPR_ON[]          = {0xaa,0x03,0x01,0x0e};
const static  char OUT_CPR_OFF[]         = {0xaa,0x03,0x01,0x00};


#else //right board
/* inside */

const static  char INBACK_UP_ON[]    = {0xaa,0x03,0x01,0x0F};
const static  char INBACK_UP_OFF[]   = {0xaa,0x03,0x01,0x00};

const static  char INBACK_DOWN_ON[]  = {0xaa,0x03,0x01,0x10};
const static  char INBACK_DOWN_OFF[] = {0xaa,0x03,0x01,0x00};

const static  char INLEG_UP_ON[]     = {0xaa,0x03,0x01,0x11};
const static  char INLEG_UP_OFF[]    = {0xaa,0x03,0x01,0x00};

const static  char INLEG_DOWN_ON[]   = {0xaa,0x03,0x01,0x12};
const static  char INLEG_DOWN_OFF[]  = {0xaa,0x03,0x01,0x00};

const static  char IN_CALL_ON[]      = {0xaa,0x03,0x01,0x13};
const static  char IN_CALL_OFF[]     = {0xaa,0x03,0x01,0x00};


/* outside */

const static  char OUTBED_UP_ON[]        = {0xaa,0x03,0x01,0x01};
const static  char OUTBED_UP_OFF[]       = {0xaa,0x03,0x01,0x00};

const static  char OUTBED_DOWN_ON[]      = {0xaa,0x03,0x01,0x02};
const static  char OUTBED_DOWN_OFF[]     = {0xaa,0x03,0x01,0x00};

const static  char OUTBACK_UP_ON[]       = {0xaa,0x03,0x01,0x03};
const static  char OUTBACK_UP_OFF[]      = {0xaa,0x03,0x01,0x00};

const static  char OUTBACK_DOWN_ON[]     = {0xaa,0x03,0x01,0x04};
const static  char OUTBACK_DOWN_OFF[]    = {0xaa,0x03,0x01,0x00};

const static  char OUTLEG_UP_ON[]        = {0xaa,0x03,0x01,0x05};
const static  char OUTLEG_UP_OFF[]       = {0xaa,0x03,0x01,0x05};

const static  char OUTLEG_DOWN_ON[]      = {0xaa,0x03,0x01,0x06};
const static  char OUTLEG_DOWN_OFF[]     = {0xaa,0x03,0x01,0x00};

const static  char OUTPITCH_FRONT_ON[]   = {0xaa,0x03,0x01,0x07};
const static  char OUTPITCH_FRONT_OFF[]  = {0xaa,0x03,0x01,0x00};

const static  char OUTPITCH_AFTER_ON[]   = {0xaa,0x03,0x01,0x08};
const static  char OUTPITCH_AFTER_OFF[]  = {0xaa,0x03,0x01,0x00};

const static  char OUTROLL_LEFT_ON[]     = {0xaa,0x03,0x01,0x09};
const static  char OUTROLL_LEFT_OFF[]    = {0xaa,0x03,0x01,0x00};

const static  char OUTROLL_RIGHT_ON[]    = {0xaa,0x03,0x01,0x0a};
const static  char OUTROLL_RIGHT_OFF[]   = {0xaa,0x03,0x01,0x00};

const static  char OUT_CALL_ON[]         = {0xaa,0x03,0x01,0x0b};
const static  char OUT_CALL_OFF[]        = {0xaa,0x03,0x01,0x00};

const static  char OUT_FLOWER_ON[]       = {0xaa,0x03,0x01,0x0c};
const static  char OUT_FLOWER_OFF[]      = {0xaa,0x03,0x01,0x00};

const static  char OUT_CCP_ON[]          = {0xaa,0x03,0x01,0x0d};
const static  char OUT_CCP_OFF[]         = {0xaa,0x03,0x01,0x00};

const static  char OUT_CPR_ON[]          = {0xaa,0x03,0x01,0x0e};
const static  char OUT_CPR_OFF[]         = {0xaa,0x03,0x01,0x00};






#endif



#endif




