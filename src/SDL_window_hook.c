#include "SDL_window_hook.h"

#include "SDL_window_hook_internal.h"

static AfterWindowCreationHook after_window_creation_hook = NULL;
static AfterWindowCreationHook before_window_destroy_hook = NULL;

void SDL_SetupAfterWindowCreationHook(AfterWindowCreationHook hook)
{
	after_window_creation_hook = hook;
}

void SDL_SetupBeforeWindowDestroyHook(BeforeWindowDestroyHook hook)
{
	before_window_destroy_hook = hook;
}

void SDL_CleanAfterWindowCreationHook()
{
	after_window_creation_hook = NULL;
}

void SDL_CleanBeforeWindowDestroyHook()
{
	before_window_destroy_hook = NULL;
}

AfterWindowCreationHook SDL_GetAfterWindowCreationHook()
{
	return after_window_creation_hook;
}

BeforeWindowDestroyHook SDL_GetBeforeWindowDestroyHook()
{
	return before_window_destroy_hook;
}