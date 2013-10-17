#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "IShape.h"
#include "Points.h"
class CRectangle :
	public IShape
{
public:

	CRectangle()
	{
	}

	virtual ~CRectangle()
	{
	}
	string GetName()
	{
		return "rectangle";
	}
	virtual double GetWidth()
	{
		return m_width;
	}

	double GetHeight()
	{
		return m_height;
	}

	CPoints GetCoordinats()
	{
		return m_pTopLeft;
	}

	double GetPerimetr()
	{
		return (m_height * 2) + (m_width * 2);
	}

	double GetArea()
	{
		return (m_height * m_width);
	}

	void Accept(IGeometryObjectVisitor &v);
private:
	double m_height;
	double m_width;
	CPoints m_pTopLeft;
};
#endif
