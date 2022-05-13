#include <iostream>
#include <map>

struct StandardList {

public:
    std::map<int, std::string> CHAR_LIST = {
        {0, "a"}, {1, "A"}, {2, "b"}, {3, "B"}, {4, "c"}, {5, "C"}, {6, "d"}, {7, "D"}, {8, "e"}, {9, "E"}, {10, "f"},
        {11, "F"}, {12, "g"}, {13, "G"}, {14, "h"}, {15, "H"}, {16, "i"}, {17, "I"}, {18, "j"}, {19, "J"}, {20, "k"},
        {21, "K"}, {22, "l"}, {23, "L"}, {24, "m"}, {25, "M"}, {26, "n"}, {27, "N"}, {28, "o"}, {29, "O"}, {30, "p"},
        {31, "P"}, {32, "q"}, {33, "Q"}, {34, "r"}, {35, "R"}, {36, "s"}, {37, "S"}, {38, "t"}, {39, "T"}, {40, "u"},
        {41, "U"}, {42, "v"}, {43, "V"}, {44, "w"}, {45, "W"}, {46, "x"}, {47, "X"}, {48, "y"}, {49, "Y"}, {50, "z"},
        {51, "Z"}, {52, "1"}, {53, "2"}, {54, "3"}, {55, "4"}, {56, "5"}, {57, "6"}, {58, "7"}, {59, "8"}, {60, "9"},
        {61, "0"}, {62, "."}
    };

    int get_size(){
        return CHAR_LIST.size();
    }
};
