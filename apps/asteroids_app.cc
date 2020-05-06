// Copyright (c) 2020 [Your Name]. All rights reserved.

#include "asteroids_app.h"

#include <cinder/app/App.h>


namespace asteroidsapp {

using cinder::app::KeyEvent;

const int kGameRunning = 1;
const int kGameOver = 2;

int game_state;
int score;

AsteroidsApp::AsteroidsApp() { }

void AsteroidsApp::setup() {
  game_state = kGameRunning;

  main_view_controller_	= asteroids::MainViewController::create();

  main_scene_ = po::scene::Scene::create(main_view_controller_ );
}

void AsteroidsApp::update() {
  main_scene_->update();
}

void AsteroidsApp::draw() {
  // clear out the window with black
  gl::clear( Color( 0.0, 0.0f, 0.0 ) );
  main_scene_->draw();
}

}  // namespace asteroidsapp
