#pragma once

  struct LayoutDecl {
	std::string name;
	GLuint byteSize;
	GLenum type;
	GLboolean normalized;
	GLsizei stride;
	const GLvoid* pointer;

};

static const struct VtxPosColor
{
	float x, y;
	float r, g, b;
};



class VertexDeclarationBuffer
{
	GLuint vertexBuffer,posLocation,colLocation;
	GLuint indexBuffer;

	std::map<std::string, GLuint> layOutMap;

	std::vector<VtxPosColor> buffer;
	std::vector< unsigned int> idb;
	
	std::string name;
	uint32_t nelements = 0;
	uint32_t bytesPerVertex = 0;
public:
	VertexDeclarationBuffer();
	VertexDeclarationBuffer(const char* new_name,
		uint32_t new_bytes_per_vertex,
		std::vector< unsigned int>& new_elements,
		uint32_t new_nelements)
		: name(std::move(new_name))
		, bytesPerVertex(new_bytes_per_vertex)
		, idb(new_elements)
		, nelements(new_nelements)
	{

	}
	void setVertexAttribArray() const;

	std::vector<VtxPosColor>& getVertexBuffer();
	std::vector< unsigned int>& getIndexBuffer();

	

	~VertexDeclarationBuffer();
};

