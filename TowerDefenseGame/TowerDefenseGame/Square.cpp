#include <SFML\Audio.hpp>
#include <SFML\Window.hpp>
#include <SFML\System.hpp>
#include <SFML\Graphics.hpp>
#include "Type.hpp"
#include "Square.hpp"

using namespace sf;

IntRect* Square::rect = NULL;

Square::Square() : RectangleShape() {}

void Square::loadIntRect(IntRect* rect) {
	this->rect = rect;
	reset();
}

void Square::setContent(Type::Content content) {
	this->content = content;
	setTextureRect(*(rect + content));
}

Type::Content Square::getContent() {
	return content;
}

void Square::reset() {
	setContent(Type::Content::Grass);
}