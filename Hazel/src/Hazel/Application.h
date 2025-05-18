#pragma once
#include "Core.h"

namespace Hazel {
	class HZ_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

	private:
	};

	Application* CreateApplication();

} // namespace Hazel