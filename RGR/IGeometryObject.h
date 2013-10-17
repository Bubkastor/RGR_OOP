#ifndef IGEOMETRYOBJECT_H
#define IGEOMETRYOBJECT_H
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
#endif