#ifndef GEOMETRYOBJECTTOJSONSERIALIZER_H
#define GEOMETRYOBJECTTOJSONSERIALIZER_H
#include <string>
#include <fstream>
#include "IGeometryObjectVisitor.h"
class CGeometryObjectToJSONSerializer :
	public IGeometryObjectVisitor
{
public:
	CGeometryObjectToJSONSerializer(std::ofstream &outputStream) :
		m_outputStream(outputStream){}
	void Visit(CPoints * e)
	{
		m_outputStream << e->GetName() << " P=" << e->GetPerimetr() << " A=" << e->GetArea() << "\n";
	}
	void Visit(CCircle  * e)
	{
		m_outputStream << e->GetName() << " P=" << e->GetPerimetr() << " A=" << e->GetArea() << "\n";
	}
	void Visit(CRectangle * e)
	{
		m_outputStream << e->GetName() << " P=" << e->GetPerimetr() << " A=" << e->GetArea() << "\n";
	}
	void Visit(CTriangle * e)
	{
		m_outputStream << e->GetName() << " P=" << e->GetPerimetr() << " A=" << e->GetArea() << "\n";
	}
	void Visit(CSphere * e)
	{
		m_outputStream << e->GetName() << " P=" << e->GetSurface() << " A=" << e->GetVolume() << "\n";
	}
	void Visit(CCylinder * e)
	{
		m_outputStream << e->GetName() << " P=" << e->GetSurface() << " A=" << e->GetVolume()  << "\n";
	}
private:
	std::ofstream &m_outputStream;
};
#endif
