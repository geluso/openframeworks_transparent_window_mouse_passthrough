#include "ofMain.h"
#include "ofApp.h"

//========================================================================
int main( ){
    //Use ofGLFWWindowSettings for more options like multi-monitor fullscreen
    ofGLFWWindowSettings settings;
    settings.setSize(1024, 768);
    settings.windowMode = OF_WINDOW; //can also be OF_FULLSCREEN
    settings.glVersionMajor = 3.0;
    settings.glVersionMinor = 3.0;
    settings.transparent = true;
    settings.windowMode =
    
    glfwWindowHint(GLFW_MOUSE_PASSTHRU, GLFW_TRUE);
    
    auto window = ofCreateWindow(settings);
    
    

    ofRunApp(window, make_shared<ofApp>());
    ofRunMainLoop();
}
