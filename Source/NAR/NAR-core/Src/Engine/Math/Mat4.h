#pragma once

#include "Math.h"
#include "Quaternion.h"

namespace gengine {

	struct Matrix4f {

		union {
			float elements[4 * 4];
			Vector4f columns[4];
		};

		Matrix4f();
		Matrix4f(float diagonal);

		Matrix4f& Multiply(const Matrix4f& m);
		Matrix4f& Invert();
		Matrix4f operator*(const Matrix4f& right);
		void operator*=(const Matrix4f& m);

		Vector3f Multiply(const Vector3f& m) const;
		Vector3f operator*(const Vector3f& right);

		Vector4f Multiply(const Vector4f& m) const;
		Vector4f operator*(const Vector4f& right);


		static Matrix4f Identity();

		static Matrix4f Orthographic(const float& left, const float& right, const float& bottom, const float& top, const float& near, const float& far);
		static Matrix4f Perspective(const float& fov, const float& aspectRatio, const float& near, const float& far);

		static Matrix4f Translation(const Vector3f& translation);
		static Matrix4f Scale(const Vector3f& scale);
		static Matrix4f Rotation(const float& angle, const Vector3f& axis);

		static Vector3f RotationMatrixToEuler(const Matrix4f& matrix);
		static Matrix4f QuaternionToMatrix(const Quaternion& quaternion);
	};

}
