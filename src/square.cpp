/* Oops I included the same header file twice,
 * Yeah yeah I can simply remove one of the header files.
 * But is it feasible to do so in large projects? Absolutely not!
 * So how to manage? Go and checkout the square.hpp header file for answer.
 */

#include "../includes/square.hpp"
#include <iostream>

int main() {
    int num = 12;
    std::cout << square(num) << std::endl;
    return 0;
}