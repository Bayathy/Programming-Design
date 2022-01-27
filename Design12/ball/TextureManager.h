#pragma once
#include <string>
#include <unordered_map>
#include <SFML/Graphics.hpp>

// TODO: complete TextureManager class as Singleton
class TextureManager {
  TextureManager();
  ~TextureManager();
  std::unordered_map<std::string, sf::Texture> textures;
public:
  TextureManager(const TextureManager&) = delete;
  TextureManager& operator=(const TextureManager&) = delete;
  TextureManager(const TextureManager&&) = delete;
  TextureManager& operator=(const TextureManager&&) = delete;
  sf::Texture* get(const std::string& filename);
  static TextureManager* getInstance();
};
