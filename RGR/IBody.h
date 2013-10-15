#pragma once
#include "IGeometryObject.h"
class IBody :
	public IGeometryObject
{
public:

	IBody()
	{
	}

	virtual ~IBody()
	{
	}
	virtual double GetSurface() = 0;
	virtual double GetVolume() = 0;
};

