// Generated by dia2code
#ifndef RENDER__SCENE__H
#define RENDER__SCENE__H


namespace engine {
  class Engine;
};
namespace state {
  class StateObserver;
};
namespace render {
  class Layer;
}

#include "engine/Engine.h"
#include "state/StateEvent.h"
#include "state/StateObserver.h"
#include "Layer.h"

namespace render {

  /// class Scene - 
  class Scene : public state::StateObserver {
    // Associations
    // Attributes
  public:
    engine::Engine myEngine;
    // Operations
  public:
    Scene ();
    void run ();
    void stateChanged (state::StateEvent e);
  };

};

#endif
