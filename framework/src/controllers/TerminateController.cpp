


#include "vel/App.h"
#include "controllers/TerminateController.h"


void TerminateController::logic()
{
	if (this->input.keyEsc)
	{
		vel::App::get().close();
	}

}