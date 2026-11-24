#include <iostream>
#include <string>

// Practice 13 · Part 1 — Jaylen
// CIS 5 Week 13 · Word tools

std::string banner(const std::string& name) {
  // TODO: return "Hello, " + name + "!"
  return "Hello, " + name + "!";
}

std::string initials(const std::string& first, const std::string& last) {
  std::string out = "";
  // TODO: if first.size() > 0, add first[0] to out
  if (first.size() > 0){
    out += first[0]; 
  }
  // TODO: if last.size() > 0, add last[0] to out
  if (last.size() > 0){
    out += last[0]; 
  }
  return out; 
}

int main() {
  std::string first, last;
  std::cout << "First: ";
  std::cin >> first;
  std::cout << "Last: ";
  std::cin >> last;

  std::string full = first + " " + last;
  // TODO: print banner(full)
  std::cout << banner(full) << "\n";
  // TODO: print "Length: " and full.size()
  std::cout << "Length: " << full.size() << "\n";
  // TODO: print "Initials: " and initials(first, last)
  std::cout << "Initials: " << initials(first, last) << "\n";
  return 0;
}
