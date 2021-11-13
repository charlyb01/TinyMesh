#include "localtwist.h"
#include "mat.h"


Vector LocalTwist::warp(const Vector& p) const
{
	Vector newP = p - center;
	double distance = Norm(newP);
	double rotation = (distance / period) * 2 * Math::PI;
	double k = LocalWarping::smoothStep(r1, r2, distance);
	newP = Mat4::Rotation(direction, rotation)(newP) + center;

	return k * p + (1.0 - k) * newP;
}

Mesh LocalTwist::warpMesh(const Mesh& m) const
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
