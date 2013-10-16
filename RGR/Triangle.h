#pragma once
#include "IShape.h"
#include "Points.h"
#include <math.h>
class CTriangle :
	public IShape
{
public:

	CTriangle()
	{
	}

	virtual ~CTriangle()
	{
	}
	string GetName()
	{
		return "triangle";
	}

	CPoints GetCoordinatesVertex1()
	{
		return m_point1;
	}

	CPoints GetCoordinatesVertex2()
	{
		return m_point2;
	}

	CPoints GetCoordinatesVertex3()
	{
		return m_point3;
	}
	double GetPerimetr()
	{
		return GetLenght(m_point1, m_point2) + GetLenght(m_point2, m_point3) + GetLenght(m_point3, m_point1);
	}
	double GetArea()
	{
		double p = GetPerimetr() * 0.5;
		return sqrt(p * (p - GetLenght(m_point1, m_point2)) * (p - GetLenght(m_point2, m_point3)) * (p - GetLenght(m_point3, m_point1)));
	}
	void Accept(IGeometryObjectVisitor &visitor)
	{
		visitor.Visit(this);
	}
private:
	CPoints m_point1;
	CPoints m_point2;
	CPoints m_point3;
	double GetLenght(CPoints begin, CPoints end)
	{
		return sqrt((end.GetCoordinatesX() - begin.GetCoordinatesX()) * (end.GetCoordinatesX() - begin.GetCoordinatesX()) +
			(end.GetCoordinatesY() - begin.GetCoordinatesY()) * (end.GetCoordinatesY() - begin.GetCoordinatesY()) +
			(end.GetCoordinatesZ() - begin.GetCoordinatesZ()) * (end.GetCoordinatesZ() - begin.GetCoordinatesZ()));
	}
};

