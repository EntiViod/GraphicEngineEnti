#version 330
uniform mat4 MVP;
uniform vec4 uColor;
in vec4 vCol;
in vec3 vPos;

out vec4 color;

void main()
{
	
    gl_Position = MVP * vec4(vPos, 1.0);
	color =  (vCol + uColor)/2.;
	/*if(uColor == vec4(0.0, 0.0, 0.0, 0.0))
    color = uColor + vCol;
	else
	color = uColor  ;*/
}