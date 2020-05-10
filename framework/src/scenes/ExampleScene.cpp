#include <memory>

#include "vel/App.h"

#include "scenes/ExampleScene.h"
#include "controllers/TerminateController.h"


void ExampleScene::load()
{
	auto& mainStage = this->addStage();

	mainStage.addPerspectiveCamera(false, 0.1f, 250.0f, 45.0f);
	mainStage.getCamera()->setPosition(0.0f, 1.8f, 6.0f);
	mainStage.getCamera()->setLookAt(0.0f, 1.8f, -1.0f);

	mainStage.loadActors("data/models/004/004.fbx");

	mainStage.addController(new TerminateController());
}