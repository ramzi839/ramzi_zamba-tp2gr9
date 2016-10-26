// Generated by dia2code
#ifndef RENDER__LAYER__H
#define RENDER__LAYER__H

#include "SFML/Graphics.hpp"
#include <string>

namespace render {
  class Animation;
}

#include "Animation.h"

namespace render {

  /// class Layer - 
  class Layer {
    // Associations
    // Attributes
  public:
    sf::Texture myTexture;
    sf::Sprite mySprite;
    // Operations
  public:
    Layer ();
    Layer (std::string s);
    void setAnimation (Animation anim);
    void setSurface (std::string texture);
    void setPosition (float x, float y);
    sf::Vector2f getPosition ();
    sf::Sprite getSurface ();
  };

};

#endif
