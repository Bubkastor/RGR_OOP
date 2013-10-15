#include <iostream>
#include "GeometryObjectToJSONSerializer.h"
#include "Circle.h"
#include "Points.h"
using namespace std;

void main()
{
	CPoints a(10, 10, 10);
	CCircle circ(10, a);
	ofstream outputStream("output.txt", std::ios::app);
	CGeometryObjectToJSONSerializer getResult(outputStream);
	circ.Accept(getResult);
}