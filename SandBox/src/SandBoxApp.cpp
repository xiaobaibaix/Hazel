#include <Hazel.h>

class SandBoxApp : public Hazel::Application
{
public:
	SandBoxApp()
	{

	}

	~SandBoxApp()
	{

	}
};
Hazel::Application* Hazel::CreateApplication()
{
	return new SandBoxApp();
}