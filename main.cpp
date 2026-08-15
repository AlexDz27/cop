#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
  if (argc != 2) {
    cerr << "USAGE: cop <string>" << endl;
    return 1;
  }
  
  cout << argv[1] << endl;
}