#pragma once
#include <map>
#include <string>
#include <SDL2/SDL.h>

struct SDL_Window;
struct SDL_Renderer;

/*
Graphics class
Holds all information for graphics class in the game.
*/

class Graphics
{
public:
	Graphics();
	~Graphics();


	/* SDL_Surface* loadImage
	* Loads an image into the _spriteSheets map if it doesn't alread exist
	* Each image will only be loaded once
	* Always returns image from map.
	*/
	SDL_Surface* loadImage(const std::string &filePath);


	/* void blitSurface 
	*  Draws a texture to a certain part of the screen
	*/
	void blitSurface(SDL_Texture*, SDL_Rect* sourceRectangle, SDL_Rect* destinationRectangle);


	/* void flip
	*  renders everything to the screen
	*/
	void flip();

	/* void clear 
	*  Clears the screen
	*/
	void clear();
	
	/* SDL_Renderer* getRenderer()
	*  Returns the renderer.
	*/
	SDL_Renderer* getRenderer() const;

private:
	SDL_Window* _window;
	SDL_Renderer* _renderer;

	std::map<std::string, SDL_Surface*> _spriteSheets;
};

