#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <random>
#include <filesystem>

std::string random_text_generator(int text_size)
{
    std::string text;
    for (int i = 0; i < text_size; i++)
    {
        char letter = 'A' + (rand() % 26) + (rand() % 2 * 32);
        text += letter;
    }
    return text;
}

void create_folder(const std::string &my_folder)
{
    try
    {
        if (!std::filesystem::exists(my_folder))
        {
            std::filesystem::create_directory(my_folder);
            std::cout << "Created folder\n";
        }
        else
        {
            std::cout << "Folder Already Exists\n";
        }
    }
    catch (const std::filesystem::filesystem_error &e)
    {
        std::cerr << "Filesystem error: " << e.what() << std::endl;
    }
}

int main()
{
    // Randomly generating a number between 0 and 301 using the "<random>" library.
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(1, 300);
    int text_size = dist(gen);

    std::cout << random_text_generator(text_size) << std::endl;
    try
    {
        std::cout << "Current path: " << std::filesystem::current_path() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Error getting current path: " << e.what() << std::endl;
    }
    create_folder("Test_Folder");
}