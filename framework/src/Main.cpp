#include <memory>

#include "vel/App.h"

#include "scenes/ExampleScene.h"


int main()
{
	// Bootstrap an App
	vel::App::init();

	// Load the initial Scene
	vel::App::get().setScene(new ExampleScene());

	// Execute the program, passing control to the App execute loop
	vel::App::get().execute();

	return 0;
}