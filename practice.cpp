#include <iostream>
using namespace std;
int main (int argc, char* argv[]) {
    // the command-line parameters are stored as C-style 
    // strings in the argv[] array. argc contains 1 more 
    // than the number of command line parms specified.
    // The 0th command line parameter is the program 
    // name. We can print a C-style string via cout:
    cout << "This program is called '" << argv[0] 
         << "'" << endl;
    cout << "The following are the command " 
         << "line parameters you specified: " << endl;
    // this for loop starts at 1 to avoid printing the 
    // name of the program
    for ( int i = 1; i < argc; i++ ) {
        // we can convert the C-style strings into 
        // C++-style strings, and then print them:
        string s(argv[i]);
        cout << "\t" << s << endl;
    }
    return 0;
}
