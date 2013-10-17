//#ifndef SPHERE_H
//#define SPHERE_H
//#include "IBody.h"
//#include "Points.h"
//class CSphere :
//	public IBody
//{
//public:
//
//	CSphere()
//	{
//	}
//
//	virtual ~CSphere()
//	{
//	}
//	string GetName()
//	{
//		return "sphere";
//	}
//
//	double GetRadius()
//	{
//		return m_radius;
//	}
//
//	CPoints GetCoordinatesCenter()
//	{
//		return m_pCentr;
//	}
//	
//	double GetVolume()
//	{
//		return 4 / 3 * PI * m_radius *m_radius *m_radius;
//	}
//	double GetSurface()
//	{
//		return 4 * PI * m_radius * m_radius;
//	}//	void Accept(IGeometryObjectVisitor &visitor)
//	{
//		visitor.Visit(this);
//	}
//private:
//	double m_radius;
//	CPoints m_pCentr;
//};
//
//#endif