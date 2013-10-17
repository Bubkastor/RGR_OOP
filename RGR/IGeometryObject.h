#ifndef IGEOMETRYOBJECT_H
#define IGEOMETRYOBJECT_H
#define PI 3.141592
#include <string>
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
	virtual void Accept(class IGeometryObjectVisitor &v) = 0;

};
#endif