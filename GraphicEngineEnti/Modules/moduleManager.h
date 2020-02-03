#pragma once
#include "Module.h"

class ModuleManager
{
public:
	void start();
	void stop();
	void update(float elapsed);
	void destroy(); 
	void render();
	void registerModule(Module * module);

	bool isActive(Module* module);
	ModuleManager() = default;

private:
	void startModule(Module * module);
	void stopModule(Module* modules);

	
	
	std::vector<Module*> activeModules;
	std::vector<Module*>  inactiveModules;
	std::map<std::string, Module*> _gamestates;

	std::string _startGamestate;
};



