#include "include.h"

const char* glfwVer; 

typedef struct Window
{
	GLFWwindow* window;
} Window;

int main()
{
	Window MainWindow;

	if (!glfwInit())
	{
		printf("glfwInit error");
		return 0;
	}
	else
	{
		glfwInit();
	}	
	glfwVer = glfwGetVersionString();

	MainWindow.window = glfwCreateWindow(640, 480, "My Title", NULL, NULL);
	
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glClear(GL_COLOR_BUFFER_BIT);

	printf("Hello, World!\n");
	printf("%s\n", glfwVer);	
	
	sleep(1);

	glfwDestroyWindow(MainWindow.window);
	glfwTerminate();

	return 0;
}
