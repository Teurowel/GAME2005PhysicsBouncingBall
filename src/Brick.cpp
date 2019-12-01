#include "Brick.h"
#include "Game.h"
#include "Util.h"
#include "GLM/gtx/rotate_vector.hpp"
#include "PlayScene.h"
#include "GLM/gtx/string_cast.hpp"
#include <algorithm>

Brick::Brick()
{
	TheTextureManager::Instance()->load("../Assets/textures/Brick.png", "Brick", TheGame::Instance()->getRenderer());

	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("Brick");
	setWidth(size.x);
	setHeight(size.y);

	setPosition(glm::vec2(0.0f, 0.0f));
	//setInitialPosition(getPosition());

	setVelocity(glm::vec2(0.0f, 0.0f));
	//setInitialVelocity(getVelocity());
	setAcceleration(glm::vec2(0.0f, 0.0f));

	setIsColliding(false);
	//setType(GameObjectType::BALL);
	setState(State::IDLE);
}


Brick::~Brick()
{
}

void Brick::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;
	int Width = getWidth();
	int Height = getHeight();

	TheTextureManager::Instance()->draw("Brick", xComponent - (Width * 0.5f), yComponent - (Height * 0.5f),
		TheGame::Instance()->getRenderer(), 0.f, 255);
}

void Brick::update()
{
	//move();
	//getParent()->
}

void Brick::clean()
{

}

//void Ball::move()
//{
//	if (Util::distance(getPosition(), m_target) > 1.0f) {
//		glm::vec2 desired = Util::normalize(m_target - getPosition()) * m_maxSpeed;
//		setVelocity(desired);
//
//
//		glm::vec2 newPosition = getPosition() + getVelocity();
//		setPosition(newPosition);
//	}
//
//
//}

//void Ship::m_checkBounds()
//{
//
//	if (getPosition().x > Config::SCREEN_WIDTH)
//	{
//		setPosition(glm::vec2(0.0f, getPosition().y));
//	}
//
//	if (getPosition().x < 0)
//	{
//		setPosition(glm::vec2(800.0f, getPosition().y));
//	}
//
//	if (getPosition().y > Config::SCREEN_HEIGHT)
//	{
//		setPosition(glm::vec2(getPosition().x, 0.0f));
//	}
//
//	if (getPosition().y < 0)
//	{
//		setPosition(glm::vec2(getPosition().x, 600.0f));
//	}
//}