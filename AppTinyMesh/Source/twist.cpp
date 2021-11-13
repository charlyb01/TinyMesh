#include "twist.h"
#include "mat.h"


Vector Twist::warp(const Vector& p) const
{
	Vector newP = p - origin;
	double rotation = (Norm(newP) / period) * 2 * Math::PI;
	newP = Mat4::Rotation(direction, rotation)(newP);
	
	return newP + origin;
}

Mesh Twist::warpMesh(const Mesh& m) const
{
	unsigned i;
	Mesh mesh;
	QVector<Vector> vertices;
	vertices.reserve(m.Vertexes());

	for (i = 0; i < m.Vertexes(); i++)
		vertices.push_back(warp(m.Vertex(i)));

	mesh = Mesh(vertices, m.VertexIndexes());
	mesh.SmoothNormals();
	return mesh;
}
