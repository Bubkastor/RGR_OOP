#ifndef ISHAPE_H
#define ISHAPE_H
#include "IGeometryObject.h"

class IShape :
	public IGeometryObject
{
public:

	IShape()
	{
	}

	virtual ~IShape()
	{
	}
	virtual double GetArea() = 0;
	virtual double GetPerimetr() = 0;
};
#endif

