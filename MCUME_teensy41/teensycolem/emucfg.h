#ifndef EMUCFG_H
#define EMUCFG_H

#include "wrapemu.h"

// Title:     <                        >
#define TITLE "    Coleco Emulator"
#define ROMSDIR "coleco"

#define emu_Init(ROM) {coc_Init();coc_Start(ROM);}
#define emu_Step() {coc_Step();}
#define emu_Input(x) {coc_Input(x);}

#define MAX_FILENAME_PATH    64
#define NB_FILE_HANDLER      4

#define PALETTE_SIZE         16
#define VID_FRAME_SKIP       0x0
#define TFT_VBUFFER_YCROP    0
#define SINGLELINE_RENDERING 1
//#define CUSTOM_SND           1
//#define TIMER_REND           1
//#define EXTPAD               1
#define EXTRA_HEAP           0x10
#define FILEBROWSER          1


#ifdef KEYMAP_PRESENT

#define keylables_map0_0 (char *)"1234567890 "
#define keylables_map0_1 (char *)"           "
#define keylables_map0_2 (char *)"            "
#define keylables_map0_3 (char *)"    "
const unsigned short key_map0[] = {
  'q','w','e','r','t','y','u','i','o','p',0,
  0, 0,0,0,0,0,0,0,0,0,0,
  0, 0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,
  0,0,0,0
  };  

#define keylables_map1_0 (char *)"1234567890 "
#define keylables_map1_1 (char *)"           "
#define keylables_map1_2 (char *)"            "
#define keylables_map1_3 (char *)"    "
const unsigned short key_map1[] = {
  0,0,'#',0,0,0,0,'*',0,0,0, 
  0, 0,0,0,0,0,0,0,0,0,0,
  0, 0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,
  0,0,0,0
  };  

#define keylables_map2_0 (char *)"  #    *   "
#define keylables_map2_1 (char *)"           "
#define keylables_map2_2 (char *)"            "
#define keylables_map2_3 (char *)"    "
const unsigned short key_map2[] = {
  '1','2','3','4','5','6','7','8','9','0',0,
  0, 0,0,0,0,0,0,0,0,0,0,
  0, 0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,
  0,0,0,0
  };  

#define keylables_map3_0 (char *)"           "
#define keylables_map3_1 (char *)"           "
#define keylables_map3_2 (char *)"            "
#define keylables_map3_3 (char *)"    "

const unsigned short key_map3[] = {
  0,0,0,0,0,0,0,0,0,0,0,
  0, 0,0,0,0,0,0,0,0,0,0,
  0, 0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,
  0,0,0,0
  };

#define keylables_map4_0 (char *)"           "
#define keylables_map4_1 (char *)"           "
#define keylables_map4_2 (char *)"            "
#define keylables_map4_3 (char *)"    "

const unsigned short key_map4[] = {
  0,0,0,0,0,0,0,0,0,0,0,
  0, 0,0,0,0,0,0,0,0,0,0,
  0, 0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,
  0,0,' ',0
  };

#define keylables_map5_0 (char *)"           "
#define keylables_map5_1 (char *)"           "
#define keylables_map5_2 (char *)"            "
#define keylables_map5_3 (char *)"    "

const unsigned short key_map5[] = {
  0,0,0,0,0,0,0,0,0,0,0,
  0, 0,0,0,0,0,0,0,0,0,0,
  0, 0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,
  0,0,0,0
  };

const unsigned short matkeys[] = {
  0x004,0x008,0x108,0x104,0x208,0x204,0x308,0x304,0x408,0x404,0x410, // row 1
  0x502,0x002,0x020,0x102,0x120,0x202,0x220,0x302,0x320,0x402,0x420, // row 2
  0x508,0x001,0x040,0x101,0x140,0x201,0x240,0x210,0x340,0x301,0x401,0x440, // row 3
  0x504,0x520,0x540,0x501, // UP LEFT RIGHT DOWN
  0x510,0x010,0x110,0x310, // row 4
  };
  
#endif

#endif