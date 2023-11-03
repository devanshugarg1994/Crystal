#pragma once


#ifdef CY_PLATFORMS_WINDOW


extern Crystal::Application* Crystal::CreateApplication();


int main(int argc, char **argv) {

	printf("Hello worolf");
	auto app = Crystal::CreateApplication();
	app->Run();
	delete app;

}

#endif


