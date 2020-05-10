#pragma once

#include "vel/scene/stage/Controller.h"


class TerminateController : public vel::scene::stage::Controller
{

public:
	TerminateController() : vel::scene::stage::Controller() {};
	void    logic();
};