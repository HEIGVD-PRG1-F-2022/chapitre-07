#include <chrono>
#include <iostream>
#include <random>
#include <vector>

using namespace std;

int main() {
  // Faites un refactoring des boucles suivantes pour utiliser les
  // "best practices" vu dans le cours:
  vector<int> a(10), b;
  iota(a.begin(), a.end(), 0);
  for (auto el: a) {
    b.push_back(el * 2);
  }

//  int i = 0;
//  generate(b.begin(),b.end(),[&i] { return i++*2;});
  for (int i = 0; auto &el: b) {
    el = int(2 * i++);
  }

  copy(b.begin(), b.end(), a.begin());
  a.assign(b.begin(), b.end());

  for (size_t i = 0; i < 10; i++) {
    a.at(i) = b.at(i);
  }

  // Utilisez les méthodes de "algorithm" et "numeric" pour reécrire ces
  // boucles.
  for (size_t i = 0; i < 10; i++) {
    a.at(i) = int(i);
  }

  b.clear();
  for (size_t i = 0; i < 10; i++) {
    if (abs(3 - a.at(i)) < 2) {
      b.push_back(a.at(i));
    }
  }

  auto rnd = std::default_random_engine(
      unsigned(std::chrono::system_clock::now().time_since_epoch().count()));
  for (size_t i = 9; i > 0; --i) {
    std::uniform_int_distribution<decltype(i)> d(0, i);
    swap(a.at(i), a.at(d(rnd)));
  }

  for (size_t i = 0; i < a.size(); i++) {
    if (a.at(i) % 3 == 1) {
      a.erase(a.begin() + static_cast<long>(i));
      i--;
    }
  }

  return 0;
}