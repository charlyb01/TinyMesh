#include "localtranslation.h"


Vector LocalTranslation::warp(const Vector& p) const
{
	Vector newP = p + translation;
	double k = LocalWarping::smoothStep(r1, r2, Norm(p - center));

	return k * p + (1.0 - k) * newP;
}

Mesh LocalTranslation::warpMesh(const Mesh& m) const
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
