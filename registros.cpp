#include "registros.h"
using namespace GUI;
using namespace Controller;

int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	registros form;
	Application::Run(%form);
	return 0;
}