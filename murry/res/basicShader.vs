#version 120

attribute vec3 position;
attribute vec2 textCoord;

varying vec2 textCoord0;

void main() {
	gl_Position.xyz = position;
	gl_Position.w=1;
	textCoord0 = textCoord;
}