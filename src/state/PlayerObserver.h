// Generated by dia2code
#ifndef STATE__PLAYEROBSERVER__H
#define STATE__PLAYEROBSERVER__H


#include "PlayerEvent.h"

namespace state {

  /// class PlayerObserver - 
  class PlayerObserver {
    // Associations
    // Operations
  public:
    virtual void update (state::PlayerEvent ) = 0;
  };

};

#endif