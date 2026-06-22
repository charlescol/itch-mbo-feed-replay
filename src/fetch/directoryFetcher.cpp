#include "directoryFetcher.hpp"
#include <databento/dbn_store.hpp>
#include <filesystem>

DirectoryFetcher::DirectoryFetcher(
    const std::filesystem::path &directoryPath,
    std::function<void(const std::filesystem::path &)> callback) {
  for (const auto &entry : std::filesystem::directory_iterator(directoryPath)) {
    if (entry.is_regular_file()) {
      // TODO: spawn a task to process the file in parallel
    }
  }
}