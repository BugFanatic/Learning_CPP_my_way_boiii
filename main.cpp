#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <random>

std::string text_generator()
{
    std::string text = "";

    // Randomly generating a number between 0 and 301 using the "<random>" library.
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(1,300);
    int text_size = dist(gen);

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