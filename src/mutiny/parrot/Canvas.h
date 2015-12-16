#ifndef MUTINY_ENGINE_CANVAS_H
#define MUTINY_ENGINE_CANVAS_H

#include "../Behaviour.h"
#include "../Vector2.h"
#include "../Color.h"
#include "../Rect.h"
#include "../arc.h"

namespace mutiny
{

namespace engine
{

class Texture2d;
class Mesh;
class Material;

class Canvas : public Behaviour
{
public:
  void setSize(int width, int height);
  void setPosition(int x, int y);
  void fillRectangle(Rect rect, Color color);

private:
  arc<Texture2d> texture;
  arc<Mesh> mesh;
  arc<Material> material;

  virtual void awake();
  virtual void gui();

};

}

}

#endif