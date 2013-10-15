#pragma once
#define PI 3.141592
#include <string>
#include "IGeometryObjectVisitor.h"
using namespace std;
class IGeometryObject
{
public:

	IGeometryObject()
	{
	}

	virtual ~IGeometryObject()
	{
	}
	virtual void Accept(IGeometryObjectVisitor &visitor) = 0;

};

