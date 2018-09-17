// writing on a text file
#include <iostream>
#include <fstream>

using namespace std;

int main (int argv, const char **argc) {
  ofstream myfile (argc[1]);
  if (myfile.is_open())
  {
    myfile << "#include <cmath>\n";
    myfile << "#include <cstdlib>\n";
    myfile << "#include <ctime>\n";
    myfile << "#include <iostream>\n\n";
    myfile << "using namespace std;\n\n";
    myfile << "int main(int argc, char* argv[]) {\n";
    myfile << "  cout << \"Hello! sqrt(time) = \" << sqrt(time(NULL)) << endl;\n";
    myfile << "  return EXIT_SUCCESS;\n";
    myfile << "}\n\n";
    
    myfile.close();
  }
  else { 
    cout << "Unable to open file";
    return -1;
  }

  return 0;
}