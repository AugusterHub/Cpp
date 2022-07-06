#pragma once
#include <array>
#include <exception>
#include "RangeException.h"

//  1. ����Vec3D�࣬�� array ����������Ա��
//  3. ʵ��Vec3D::operator[](const int index)
//     ��indexԽ��ʱ���׳�VecException�Ķ���

class Vec3D {
private:
	std::array<double, 3> v{1.0, 1.0, 1.0};

public:
	Vec3D() = default;
	Vec3D(double x_, double y_, double z_) {
		v[0] = x_;
		v[1] = y_;
		v[2] = z_;
	}

	double& operator [] (const int index) {
		if (index <= 3) {
			return v[index];
		}
		else {
			throw RangeException(3, index);
		}
	}
};