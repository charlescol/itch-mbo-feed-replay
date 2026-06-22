#pragma once

#include <databento/dbn_store.hpp>
#include <filesystem>
#include <functional>

class DirectoryFetcher {
public:
  explicit DirectoryFetcher(
      const std::filesystem::path &directoryPath,
      std::function<void(const std::filesystem::path &)> callback);
};