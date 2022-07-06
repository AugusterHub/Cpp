#pragma once
#include <array>
#include <exception>
#include "RangeException.h"

//  1. 创建Vec3D类，用 array 保存向量成员；
//  3. 实现Vec3D::operator[](const int index)
//     当index越界时，抛出VecException的对象

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