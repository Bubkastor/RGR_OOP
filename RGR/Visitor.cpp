
#include "Circle.h"
#include "Cylinder.h"
#include "Points.h"
#include "Rectangle.h"
#include "Sphere.h"
#include "Triangle.h"
#include "IGeometryObjectVisitor.h"

void CPoints::Accept(IGeometryObjectVisitor &v)
{
	v.Visit(this);
}
void CCircle::Accept(IGeometryObjectVisitor &v)
{
	v.Visit(this);
}
void CCylinder::Accept(IGeometryObjectVisitor &v)
{
	v.Visit(this);
}
void CRectangle::Accept(IGeometryObjectVisitor &v)
{
	v.Visit(this);
}
void CSphere::Accept(IGeometryObjectVisitor &v)
{
	v.Visit(this);
}
void CTriangle::Accept(IGeometryObjectVisitor &v)
{
	v.Visit(this);
}
