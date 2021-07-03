#include <iostream>
using namespace std;

int main() {

#ifdef __linux__
    cout << "This is linux" << endl;
#elseif Macintosh
    cout << "This is mac" << endl;
#else
    cout << "This is not mac or linux" << endl;
#endif
    return 0;
}