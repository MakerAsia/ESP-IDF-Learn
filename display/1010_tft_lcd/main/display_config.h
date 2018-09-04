
#ifndef _DISPLAY_CONFIG_H_
#define _DISPLAY_CONFIG_H_

const static int window_width = 320;
const static int window_height = 240;

//#define ENDIAN_LITTLE
#ifdef ESP32
  #define OMIT_ZBUFFER_CONFLICT
//comment out if U use M5Stack.
  #define ILI9341
  #define PROCESSNUM 2
  #define DRAW_NLINES (20)
  #define MAXPROC_POLYNUM (1000)
  #define BACK_BUFFER 2
#else
//  #define OUTPUTTERMINAL
  //#define USE_SDL
  //#define PROCESSNUM 1
  //#define DRAW_NLINES (window_height)
  //#define MAXPROC_POLYNUM (2000)
#endif

// DO NOT CHANGE HERE
#ifdef OUTPUTTERMINAL
#undef ENDIAN_LITTLE
#endif

#endif //_DISPLAY_CONFIG_H_