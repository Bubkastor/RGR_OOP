#pragma once
#include "Points.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Sphere.h"
#include "Cylinder.h"
class IGeometryObjectVisitor
{
public:
	virtual void Visit(CPoints *e) = 0;
	virtual void Visit(CCircle *e) = 0;
	virtual void Visit(CRectangle *e) = 0;
	virtual void Visit(CTriangle *e) = 0;
	virtual void Visit(CSphere *e) = 0;
	virtual void Visit(CCylinder *e) = 0;
};

