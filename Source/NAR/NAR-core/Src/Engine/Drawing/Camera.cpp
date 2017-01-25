#include "Camera.h"

Camera::Camera(const Vector2i& size, const Vector2f& position)
	: m_position(position), m_size(size) {
	
}

void Camera::move(const Vector2f& direction) {
	m_position += direction;
}