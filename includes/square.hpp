/* When a header file is included twice within a program, the compiler processes
  the contents of that header file twice. This leads to an error in the
  program. To eliminate this error, conditional preprocessor directives are
  used.

  SYNTAX:

  #ifndef HEADER_FILE_NAME
  #define HEADER_FILE_NAME

     the entire header file

  #endif
*/

#ifndef SQUARE_HPP
#define SQUARE_HPP

int square(int num) {
    int square = num * num;
    return square;
}

#endif