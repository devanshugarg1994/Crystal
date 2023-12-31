#pragma once

#include "Core.h"

namespace Crystal {
	class CY_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in Client. 
	Application* CreateApplication();
}


