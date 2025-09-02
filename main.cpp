#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

std::string text_generator()
{
    std::string text = "";
    int text_size = 300;

    for (int i = 0; i < text_size; i++)
    {
        char letter = 'A' + (rand() % 26) + (rand() % 2 * 32);
        text += letter;
    }
    return text;
}

void inject_text_to_file(){};

void text_file_compressor(){};

void text_file_encryptor(){};

int main()
{
    srand(time(0));
    std::cout << text_generator() << std::endl;
}