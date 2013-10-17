#ifndef POINTS_H
#define POINTS_H
#include "IGeometryObject.h"
class CPoints :
	public IGeometryObject
{
public:
	CPoints()
	{
	}
	CPoints(double x, double y,	double z)
	{
		m_x = x;
		m_y = y;
		m_z = z;
	}

	virtual ~CPoints()
	{
	}
	string GetName()
	{
		return "point";
	}

	double GetCoordinatesX()
	{
		return m_x;
	}

	double GetCoordinatesY()
	{
		return m_y;
	}

	double GetCoordinatesZ()
	{
		return m_z;
	}
	double GetPerimetr()
	{
		return 0;
	}
	double GetArea()
	{
		return 0;
	}

	void Accept(IGeometryObjectVisitor &v);
private:
	double m_x;
	double m_y;
	double m_z;
};
#endif
