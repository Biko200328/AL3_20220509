#include "Matrix4.h"

Matrix4 Matrix4::IdentityMatrix4()
{
	Matrix4 identity;
	identity.m[0][0] = 1.0f;
	identity.m[1][1] = 1.0f;
	identity.m[2][2] = 1.0f;
	identity.m[3][3] = 1.0f;

	return identity;
};