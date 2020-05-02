//
// Created by ORaNgCHiKeN on 4/29/2020.
//

#include "asteroids/Engine.h"

int kInitialStartingX = 400;
int kInitialStartingY = 400;

asteroids::Engine::Engine()
  : player_ship_(kInitialStartingY, kInitialStartingY) {

}

int asteroids::Engine::GetScore() {
  return 0;
}

asteroids::Ship asteroids::Engine::GetShip() {
  return player_ship_;
}

std::vector<asteroids::Asteroid> asteroids::Engine::GetAsteroids() {
  return std::vector<Asteroid>();
}

void asteroids::Engine::Step() {

}