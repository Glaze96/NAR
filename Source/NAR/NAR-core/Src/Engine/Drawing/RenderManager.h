#pragma once
/* Author: Rasmus R.
* Last modified: Rasmus R.
*
* TODO:
* Add clipping bounds to camera
*
* Usage:
* Printing strings with variables: http://www.cplusplus.com/reference/cstdio/printf/
*
*
*
*/

#include <string>
#include <Engine/Math/Math.h>
#include "Camera.h"

class RenderManager {
private:
	RenderManager() { }

public:
	static void Init();

	static void Println(const Vector2i& screenPosition, std::string str, ...);
	static void Println(const Camera& camera, const Vector2i& worldPosition, std::string str, ...);

	static void PrintChar(const Vector2i& screenPosition, char c);
	static void PrintChar(const Camera& camera, const Vector2i& worldPosition, char c);

private:
	static bool OutOfBounds(int x, int y);

private:
	static int m_screenWidth;
	static int m_screenHeight;
};