#pragma once

#include "../common.h"

#include "../components/Transform.h"
#include "../graphics/Model.h"

class GameObject
{
public:
	GameObject();
	~GameObject();

	Transform m_Transform;

	Model* m_Model = nullptr;

	bool isLight = false;

private:

};