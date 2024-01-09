#include "Ground.h"

void Ground::Initialize(Model*model,Vector3 translation, Vector3 Scale) {
	textureManager_ = TextureManager::GetInstance();
	worldTtansform_.Initialize();
	worldTtansform_.translation_ = translation;
	worldTtansform_.scale_ = { 1000.0f,1.0f,1000.0f };
	worldTtansform_.rotation_ = { 0.0f,10.0f,0.0f };
	texHandle_ = textureManager_->Load("Resource/wi.png");
	groundModel_ = model;
	groundModel_->SetColor({ 0.0f,1.0f,1.0f,1.0f });
}

void Ground::Update() {
	worldTtansform_.UpdateMatrix();
}

void Ground::Draw(const ViewProjection& view) {
	groundModel_->Draw(worldTtansform_, view);
}