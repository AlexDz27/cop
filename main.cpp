#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {
  cout << argc << endl;
  cout << argv << endl;

  cout << *argv << endl;

  cout << *argv[0] << endl;
  cout << *argv[1] << endl;  // TODO: here's the problem - i lack understanding
}