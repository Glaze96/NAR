#pragma once
/* Author: Rasmus R.
* Last modified: Rasmus R.
*
* Usage:
*
*
*/
#include <Engine/Rendering/Camera.h>

class Window {
protected:
	Window(const Camera& camera);
	
public:
	virtual ~Window();

public:
	virtual void draw() { }

protected:
	Camera m_camera;

};