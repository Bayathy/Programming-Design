#include "TextureManager.h"

TextureManager::TextureManager()
{
}

TextureManager::~TextureManager()
{
}

TextureManager* TextureManager::getInstance()
{
  static TextureManager _instance;

  return &_instance;
}

sf::Texture* TextureManager::get(const std::string& filename)
{
  auto it = textures.find(filename);
  if (it == textures.end())
    textures[filename].loadFromFile(filename);

  return &textures[filename];
}
  











