#ifndef __UNIFIEDRENDERER__
#define __UNIFIEDRENDERER__
#include <GL/glew.h>
#include <GL/freeglut.h>
#include <iostream>
#include "SDFRenderer.h"
#include "AGDRenderer.h"
#include "Off_Writer.h"

class UnifiedRenderer {
private:
	static SDFRenderer mSDFRenderer;
	static AGDRenderer mAGDRenderer;
	static AGDRenderer mCurRenderer;
	static AGDRenderer mResultRenderer;
	static int mRendererType;

protected:
	void initRenderer(int argc, char** argv, int sizeX, int sizeY, const char* title, bool standAlone);
	static void setupGlutCallBacks();

public:
	UnifiedRenderer(int argc, char** argv, int sizeX, int sizeY, const char* title, bool standAlone = true) {
		initRenderer(argc, argv, sizeX, sizeY, title, standAlone);
	}
	static int windowX, windowY;
	static void render();
	static void renderScene();
	static void keyboardCallback(unsigned char nChar, int x, int y);
	void setupRendererParameters();
};

#endif
