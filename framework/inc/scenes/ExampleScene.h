#pragma once

#include "vel/scene/Scene.h"


class ExampleScene : public vel::scene::Scene
{

public:
	ExampleScene() : vel::scene::Scene() {};

	void    load();
	void    loop();

};