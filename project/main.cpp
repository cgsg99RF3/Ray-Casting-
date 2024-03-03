#include "Map.h"

class Map {
 private:
  std::vector<std::vector<int>> grid;
  float cellSz;

 public:
  void draw(sf::RenderTarget &window) {}
};

int main() {
  sf::RenderWindow window(sf::VideoMode(800, 450), "game");

  while (window.isOpen()) {
    sf::Event event;
    while (window.pollEvent(event)) {
      if (event.type == sf::Event::Closed) {
        window.close();
      }
    }
  }

  Map map;
  window.clear();
  map.draw(window);
  window.display();
}