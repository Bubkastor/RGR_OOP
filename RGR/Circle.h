#ifndef CIRCLE_H
#define CIRCLE_H
#include "IShape.h"
#include "Points.h"
class CCircle :
	public IShape
{
public:

	CCircle()
	{
	}
	CCircle(double radius, CPoints pCentr)
	{
		m_radius = radius;
		m_pCentr = pCentr;
	}

	virtual ~CCircle()
	{
	}
	string GetName()
	{
		return "circle";
	}
	virtual double GetRadius()
	{
		return m_radius;
	}

	CPoints GetCenterCircle()
	{
		return m_pCentr;
	}
	double GetPerimetr()
	{
		return 2 * PI *m_radius;
	}
	double GetArea()
	{
		return PI * m_radius * m_radius;
	}

	void Accept(IGeometryObjectVisitor &v);
private:
	double m_radius;
	CPoints m_pCentr;
};
#endif
