#pragma once
#include <string>
#include <fstream>
#include "IGeometryObjectVisitor.h"
class CGeometryObjectToXMLSerializer :
	public IGeometryObjectVisitor
{
public:
	CGeometryObjectToXMLSerializer(std::ofstream &outputStream) : m_outputStream(outputStream){}
private:
	std::ofstream &m_outputStream;
};

