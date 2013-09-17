#ifndef COLLISIONTEST_H
#define COLLISIONTEST_H

#include <mutiny/mutiny.h>

using namespace mutiny::engine;

class CollisionTest : public Behaviour
{
public:
  virtual void onAwake();
  virtual void onUpdate();
  virtual void onGui();

private:
  GameObject* cameraGo;
  GameObject* camera2Go;
  GameObject* playerGo;
  GameObject* levelGo;
  GameObject* level2Go;
  RenderTexture* renderTexture;
  Texture* levelTexture;

};

#endif

