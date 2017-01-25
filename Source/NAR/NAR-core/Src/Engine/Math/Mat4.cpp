#include "mat4.h"

#include <math.h>
#include "Quaternion.h"
#include <corecrt_memcpy_s.h>

namespace gengine {

	Matrix4f::Matrix4f() {
		for (int i = 0; i < 4 * 4; i++) {
			elements[i] = 0.0f;
		}
	}

	Matrix4f::Matrix4f(float diagonal) {

		for (int i = 0; i < 4 * 4; i++) {
			elements[i] = 0.0f;
		}

		elements[0 + 0 * 4] = diagonal;
		elements[1 + 1 * 4] = diagonal;
		elements[2 + 2 * 4] = diagonal;
		elements[3 + 3 * 4] = diagonal;

	}

	Matrix4f& Matrix4f::Multiply(const Matrix4f& m) {

		float data[4 * 4];

		for (int y = 0; y < 4; y++) {
			for (int x = 0; x < 4; x++) {

				float sum = 0.0f;

				for (int e = 0; e < 4; e++) {
					sum += elements[x + e * 4] * m.elements[e + y * 4];
				}

				data[x + y * 4] = sum;

			}
		}

		memcpy(elements, data, 4 * 4 * sizeof(float));

		return *this;
	}

	Matrix4f& Matrix4f::Invert() {
		float temp[16];

		temp[0] = elements[5] * elements[10] * elements[15] -
			elements[5] * elements[11] * elements[14] -
			elements[9] * elements[6] * elements[15] +
			elements[9] * elements[7] * elements[14] +
			elements[13] * elements[6] * elements[11] -
			elements[13] * elements[7] * elements[10];

		temp[4] = -elements[4] * elements[10] * elements[15] +
			elements[4] * elements[11] * elements[14] +
			elements[8] * elements[6] * elements[15] -
			elements[8] * elements[7] * elements[14] -
			elements[12] * elements[6] * elements[11] +
			elements[12] * elements[7] * elements[10];

		temp[8] = elements[4] * elements[9] * elements[15] -
			elements[4] * elements[11] * elements[13] -
			elements[8] * elements[5] * elements[15] +
			elements[8] * elements[7] * elements[13] +
			elements[12] * elements[5] * elements[11] -
			elements[12] * elements[7] * elements[9];

		temp[12] = -elements[4] * elements[9] * elements[14] +
			elements[4] * elements[10] * elements[13] +
			elements[8] * elements[5] * elements[14] -
			elements[8] * elements[6] * elements[13] -
			elements[12] * elements[5] * elements[10] +
			elements[12] * elements[6] * elements[9];

		temp[1] = -elements[1] * elements[10] * elements[15] +
			elements[1] * elements[11] * elements[14] +
			elements[9] * elements[2] * elements[15] -
			elements[9] * elements[3] * elements[14] -
			elements[13] * elements[2] * elements[11] +
			elements[13] * elements[3] * elements[10];

		temp[5] = elements[0] * elements[10] * elements[15] -
			elements[0] * elements[11] * elements[14] -
			elements[8] * elements[2] * elements[15] +
			elements[8] * elements[3] * elements[14] +
			elements[12] * elements[2] * elements[11] -
			elements[12] * elements[3] * elements[10];

		temp[9] = -elements[0] * elements[9] * elements[15] +
			elements[0] * elements[11] * elements[13] +
			elements[8] * elements[1] * elements[15] -
			elements[8] * elements[3] * elements[13] -
			elements[12] * elements[1] * elements[11] +
			elements[12] * elements[3] * elements[9];

		temp[13] = elements[0] * elements[9] * elements[14] -
			elements[0] * elements[10] * elements[13] -
			elements[8] * elements[1] * elements[14] +
			elements[8] * elements[2] * elements[13] +
			elements[12] * elements[1] * elements[10] -
			elements[12] * elements[2] * elements[9];

		temp[2] = elements[1] * elements[6] * elements[15] -
			elements[1] * elements[7] * elements[14] -
			elements[5] * elements[2] * elements[15] +
			elements[5] * elements[3] * elements[14] +
			elements[13] * elements[2] * elements[7] -
			elements[13] * elements[3] * elements[6];

		temp[6] = -elements[0] * elements[6] * elements[15] +
			elements[0] * elements[7] * elements[14] +
			elements[4] * elements[2] * elements[15] -
			elements[4] * elements[3] * elements[14] -
			elements[12] * elements[2] * elements[7] +
			elements[12] * elements[3] * elements[6];

		temp[10] = elements[0] * elements[5] * elements[15] -
			elements[0] * elements[7] * elements[13] -
			elements[4] * elements[1] * elements[15] +
			elements[4] * elements[3] * elements[13] +
			elements[12] * elements[1] * elements[7] -
			elements[12] * elements[3] * elements[5];

		temp[14] = -elements[0] * elements[5] * elements[14] +
			elements[0] * elements[6] * elements[13] +
			elements[4] * elements[1] * elements[14] -
			elements[4] * elements[2] * elements[13] -
			elements[12] * elements[1] * elements[6] +
			elements[12] * elements[2] * elements[5];

		temp[3] = -elements[1] * elements[6] * elements[11] +
			elements[1] * elements[7] * elements[10] +
			elements[5] * elements[2] * elements[11] -
			elements[5] * elements[3] * elements[10] -
			elements[9] * elements[2] * elements[7] +
			elements[9] * elements[3] * elements[6];

		temp[7] = elements[0] * elements[6] * elements[11] -
			elements[0] * elements[7] * elements[10] -
			elements[4] * elements[2] * elements[11] +
			elements[4] * elements[3] * elements[10] +
			elements[8] * elements[2] * elements[7] -
			elements[8] * elements[3] * elements[6];

		temp[11] = -elements[0] * elements[5] * elements[11] +
			elements[0] * elements[7] * elements[9] +
			elements[4] * elements[1] * elements[11] -
			elements[4] * elements[3] * elements[9] -
			elements[8] * elements[1] * elements[7] +
			elements[8] * elements[3] * elements[5];

		temp[15] = elements[0] * elements[5] * elements[10] -
			elements[0] * elements[6] * elements[9] -
			elements[4] * elements[1] * elements[10] +
			elements[4] * elements[2] * elements[9] +
			elements[8] * elements[1] * elements[6] -
			elements[8] * elements[2] * elements[5];

		float determinant = elements[0] * temp[0] + elements[1] * temp[4] + elements[2] * temp[8] + elements[3] * temp[12];
		determinant = 1.0f / determinant;

		for (int i = 0; i < 4 * 4; i++)
			elements[i] = temp[i] * determinant;

		return *this;
	}

	Matrix4f Matrix4f::operator*(const Matrix4f& right) {
		Matrix4f newMatrix = *this;
		return newMatrix.Multiply(right);
	}

	void Matrix4f::operator*=(const Matrix4f& m) {
		Multiply(m);
	}

	Vector3f Matrix4f::Multiply(const Vector3f& other) const {
		return Vector3f(
			columns[0].x * other.x + columns[1].x * other.y + columns[2].x * other.z + columns[3].x,
			columns[0].y * other.x + columns[1].y * other.y + columns[2].y * other.z + columns[3].y,
			columns[0].z * other.x + columns[1].z * other.y + columns[2].z * other.z + columns[3].z
			);
	}

	Vector3f Matrix4f::operator*(const Vector3f& right) {
		return Multiply(right);
	}

	Vector4f Matrix4f::Multiply(const Vector4f& other) const {
		return Vector4f(
			columns[0].x * other.x + columns[1].x * other.y + columns[2].x * other.z + columns[3].x * other.w,
			columns[0].y * other.x + columns[1].y * other.y + columns[2].y * other.z + columns[3].y * other.w,
			columns[0].z * other.x + columns[1].z * other.y + columns[2].z * other.z + columns[3].z * other.w,
			columns[0].w * other.x + columns[1].w * other.y + columns[2].w * other.z + columns[3].w * other.w
			);
	}

	Vector4f Matrix4f::operator*(const Vector4f& right) {
		return Multiply(right);
	}

	Matrix4f Matrix4f::Identity() {
		return Matrix4f(1.0f);
	}

	Matrix4f Matrix4f::Orthographic(const float& left, const float& right, const float& bottom, const float& top, const float& near, const float& far) {
		Matrix4f result;

		result.elements[0 + 0 * 4] = 2.0f / (right - left);
		result.elements[1 + 1 * 4] = 2.0f / (top - bottom);
		result.elements[2 + 2 * 4] = 2.0f / (near - far);
		result.elements[3 + 3 * 4] = 1.0f;

		result.elements[0 + 3 * 4] = (left + right) / (left - right);
		result.elements[1 + 3 * 4] = (bottom + top) / (bottom - top);
		result.elements[2 + 3 * 4] = (far + near) / (far - near);

		return result;
	}

	Matrix4f Matrix4f::Perspective(const float& fov, const float& aspectRatio, const float& near, const float& far) {
		Matrix4f result;

		float q = 1.0f / tan(fov * 0.5f * TO_RADIANS);
		float a = q / aspectRatio;

		float b = (near + far) / (near - far);
		float c = (2.0f * near * far) / (near - far);

		result.elements[0 + 0 * 4] = a;
		result.elements[1 + 1 * 4] = q;
		result.elements[2 + 2 * 4] = b;

		result.elements[3 + 2 * 4] = -1.0f;

		result.elements[2 + 3 * 4] = c;


		return result;

	}

	Matrix4f Matrix4f::Translation(const Vector3f& translation) {
		Matrix4f result(1.0f);

		result.elements[0 + 3 * 4] = translation.x;
		result.elements[1 + 3 * 4] = translation.y;
		result.elements[2 + 3 * 4] = translation.z;

		return result;
	}

	Matrix4f Matrix4f::Scale(const Vector3f& scale) {
		Matrix4f result;

		result.elements[0 + 0 * 4] = scale.x;
		result.elements[1 + 1 * 4] = scale.y;
		result.elements[2 + 2 * 4] = scale.z;
		result.elements[3 + 3 * 4] = 1.0f;

		return result;

	}

	Matrix4f Matrix4f::Rotation(const float& angle, const Vector3f& axis) {
		Matrix4f result(1.0f);

		float radians = angle * TO_RADIANS;
		float c = cos(radians);
		float s = sin(radians);
		float omc = 1.0f - cos(radians);

		float x = axis.x;
		float y = axis.y;
		float z = axis.z;

		result.elements[0 + 0 * 4] = x * omc + c;
		result.elements[1 + 0 * 4] = y * x * omc + z * s;
		result.elements[2 + 0 * 4] = x * z * omc - y * s;

		result.elements[0 + 1 * 4] = x * y * omc - z * s;
		result.elements[1 + 1 * 4] = y * omc + c;
		result.elements[2 + 1 * 4] = y * z * omc + x * s;

		result.elements[0 + 2 * 4] = x * z * omc + y * s;
		result.elements[1 + 2 * 4] = y * z * omc - x * s;
		result.elements[2 + 2 * 4] = z * omc + c;

		return result;

	}

	Vector3f Matrix4f::RotationMatrixToEuler(const Matrix4f& matrix) {
		
		Vector3f result;

		float r11 = matrix.columns[0].x;
		float r21 = matrix.columns[0].y;

		float r31 = matrix.columns[0].z;
		float r32 = matrix.columns[1].z;
		float r33 = matrix.columns[2].z;

		result.x = atan2(r32, r33);
		result.y = atan2(-r31, sqrt(r32 * r32 + r33 * r33));
		result.z = atan2(r21, r11);

		return result;
	}

	Matrix4f Matrix4f::QuaternionToMatrix(const Quaternion& quaternion) {
		float sqw = quaternion.w * quaternion.w;
		float sqx = quaternion.x * quaternion.x;
		float sqy = quaternion.y * quaternion.y;
		float sqz = quaternion.z * quaternion.z;
		
		Matrix4f mat = Matrix4f::Identity();

		// invs (inverse square length) is only required if quaternion is not already normalised
		float invs = 1 / (sqx + sqy + sqz + sqw);

		mat.columns[0].x = ( sqx - sqy - sqz + sqw) * invs; // since sqw + sqx + sqy + sqz =1/invs*invs
		mat.columns[1].y = (-sqx + sqy - sqz + sqw) * invs;
		mat.columns[2].z = (-sqx - sqy + sqz + sqw) * invs;

		float tmp1 = quaternion.x*quaternion.y;
		float tmp2 = quaternion.z*quaternion.w;
		mat.columns[0].y = 2.0f * (tmp1 + tmp2)*invs;
		mat.columns[1].x = 2.0f * (tmp1 - tmp2)*invs;

		tmp1 = quaternion.x*quaternion.z;
		tmp2 = quaternion.y*quaternion.w;
		mat.columns[0].z = 2.0f * (tmp1 - tmp2)*invs;
		mat.columns[2].x = 2.0f * (tmp1 + tmp2)*invs;
		
		tmp1 = quaternion.y*quaternion.z;
		tmp2 = quaternion.x*quaternion.w;
		mat.columns[1].z = 2.0f * (tmp1 + tmp2)*invs;
		mat.columns[2].y = 2.0f * (tmp1 - tmp2)*invs;

		return mat;
	}
}
