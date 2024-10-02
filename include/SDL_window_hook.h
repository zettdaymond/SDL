#ifndef SDL_window_hook_h_
#define SDL_window_hook_h_

#include "begin_code.h"
/* Set up for C function definitions, even when using C++ */
#ifdef __cplusplus
extern "C" {
#endif

typedef struct SDL_Window SDL_Window;

typedef void (*AfterWindowCreationHook)(SDL_Window* window);
typedef void (*BeforeWindowDestroyHook)(SDL_Window* window);

extern DECLSPEC void SDLCALL SDL_SetupAfterWindowCreationHook(AfterWindowCreationHook hook);

extern DECLSPEC void SDLCALL SDL_SetupBeforeWindowDestroyHook(BeforeWindowDestroyHook hook);

extern DECLSPEC void SDLCALL SDL_CleanAfterWindowCreationHook();

extern DECLSPEC void SDLCALL SDL_CleanBeforeWindowDestroyHook();



#ifdef __cplusplus
}
#endif

#endif