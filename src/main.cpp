#include <databento/dbn_store.hpp>
#include <filesystem>

databento::KeepGoing process(const databento::Record &r);

int main(int, char **) {
  databento::DbnStore store("resources/xnas-itch-20260518.mbo.dbn");
  store.Replay(process);
  return 0;
}

databento::KeepGoing process(const databento::Record &r) {
  std::cout << r << std::endl;
  return databento::Continue;
}