#include <iostream>
#include "tokenizer.h"

int main()
{
    char* data = "class MyClassName;".c_str();
    Tokenizer tokenizer();
    tokenizer().tokenize(data);

    return 0;
}
