#pragma once
#include <map>
#include <SDL2/SDL.h>

/*
Monitors keyboard for input
*/

class Input
{
public:
	Input();
	~Input();

	/*
	This function is called at the beginning of each frame to reset
	keys that are no longer relevant.
	*/
	void beginNewFrame();


	/*
	Called when a key is pressed.
	*/
	void keyUpEvent(const SDL_Event& event);
	
	/*
	Called when a key is released
	*/
	void keyDownEvent(const SDL_Event& event);

	/*
	Check if a certain key was pressed during the current frame
	*/
	bool wasKeyPressed(SDL_Scancode key);
	
	/*
	Check if a certain key was released in the current frame
	*/
	bool wasKeyReleased(SDL_Scancode key);
	
	/*
	Check if a key is currently being held.
	*/
	bool isKeyHeld(SDL_Scancode key);
private:
	std::map<SDL_Scancode, bool> _heldKeys;
	std::map<SDL_Scancode, bool> _pressedKeys;
	std::map<SDL_Scancode, bool> _releasedKeys;
};

