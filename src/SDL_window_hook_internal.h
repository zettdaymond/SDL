#ifndef SDL_window_hook_internal_h_
#define SDL_window_hook_internal_h_

/* Set up for C function definitions, even when using C++ */
#ifdef __cplusplus
extern "C" {
#endif

typedef void (*AfterWindowCreationHook)(SDL_Window* window);
typedef void (*BeforeWindowDestroyHook)(SDL_Window* window);

AfterWindowCreationHook SDL_GetAfterWindowCreationHook();

BeforeWindowDestroyHook SDL_GetBeforeWindowDestroyHook();


#ifdef __cplusplus
}
#endif

#endif