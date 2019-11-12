#include <iostream>
#include <string.h>

int main(int argc, char** argv) {

    std::cout << argc << std::endl;
    std::cout << *argv << std::endl;

    //strlen()returns size (number of elements) in char array
    unsigned long int CHAR_SIZE = strlen(*argv);

    //output return value of strlen
    std::cout << strlen(*argv) << std::endl;

    //while i is <= CHAR_SIZE (number of elements in char array), output *(*argv+ELEMENT)
    for(unsigned int i = 0; i <= CHAR_SIZE; i++) {
        std::cout << *(*argv+i);
    }

    //declare char array "name", size is 10 bytes (10 chars)
    //note that I'm purposely making the char array 5 bytes larger than required for demonstration purposes
    char name[10];

    //assign each element of the array a character by dereferencing name+ELEMENT
    //*(name+0) is the same as *name
    *(name+0) = 'C';
    *(name+1) = 'i';
    *(name+2) = 'a';
    *(name+3) = 'n';
    // null termination character (so compiler knows where string ends)
    *(name+4) = '\0';

    //output all elements of "name" array to the console
    std::cout << name << std::endl;

    //declare char array using subscript notation, size is 5 bytes (5 chars)
    char name2[5];

    //assign each element of the array a character using subscript notation
    name2[0] = 'C';
    name2[1] = 'i';
    name2[2] = 'a';
    name2[3] = 'n';
    name2[4] = '\0';

    //output the entire "name2" array
    std::cout << name2 << std::endl;

    //output the first element of the array using subscript notation
    std::cout << name2[0] << std::endl;

    //declare char pointer and assign "Cian" to it
    char* name3 = "Cian";

    //output all elements of the string
    std::cout << name3 << std::endl;
    //output the element after the first element of the string
    std::cout << name3[1] << std::endl;
    std::cout << *(name3+1) << std::endl;

    //declare char pointer "fakeArgv" and assign a 7 element string to it
    char* fakeArgv = "./main";
    //declare char double pointer "argvv" which points to the memory address of "fakeArgv"
    char** argvv = &fakeArgv;

    //output the memory address of "argvv"
    std::cout << argvv << std::endl;
    //output elements of fakeArgv individually by double dereferencing argvv
    std::cout << *(argvv) << std::endl;
    std::cout << *(*argvv+1) << std::endl;
    std::cout << *(*argvv+2) << std::endl;
    std::cout << *(*argvv+3) << std::endl;
    std::cout << *(*argvv+4) << std::endl;
    std::cout << *(*argvv+5) << std::endl;

    //output fakeArgv
    std::cout << fakeArgv << std::endl;

    int x = 10;
    int* xPointer = &x;
    int** xPointerPointer = &xPointer;

    std::cout << x << std::endl; //output 10
    std::cout << *xPointer << std::endl; //output 10
    std::cout << *(*xPointerPointer) << std::endl; //output 10

    std::cout << xPointer << std::endl;
    std::cout << *xPointerPointer << std::endl;
    std::cout << xPointerPointer << std::endl;

    return 0;
}
