#pragma once
#include "IBody.h"
#include "Points.h"
class CCylinder :
	public IBody
{
public:

	CCylinder()
	{
	}

	virtual ~CCylinder()
	{
	}
	string GetName()
	{
		return "cylinder";
	}
	CPoints GetCoordinatesCetner()
	{
		return m_pCentr;
	}

	double GetRadius()
	{
		return m_radius;
	}

	double GetHeight()
	{
		return m_height;
	}
	double GetVolume()
	{
		return PI * m_radius * m_radius * m_height;
	}
	void Accept(IGeometryObjectVisitor &visitor);
private:
	CPoints m_pCentr;
	double m_radius;
	double m_height;
};

