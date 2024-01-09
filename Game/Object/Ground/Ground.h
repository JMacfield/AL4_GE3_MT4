#pragma once

#include "3D/Model.h"
#include "3D/WorldTransform.h"
#include "EngineBase/ImGuiManager.h"
#include "MyMath/MyMath.h"
#include "3D/ViewProjection.h"
#include "EngineManager/Texture/TextureManager.h"

#include <memory>

class Ground {
public:
	void Initialize(Model*model,Vector3 translation,Vector3 Scale);
	void Update();
	void Draw(const ViewProjection&view);

	WorldTransform& GetWorldTransform() { return worldTtansform_; }

private:
	TextureManager* textureManager_;
	WorldTransform worldTtansform_;
	Model* groundModel_;
	uint32_t texHandle_;
};