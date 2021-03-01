#include <iostream>
#include <fstream>

int main(int argc, char* argv[])
{
    if (argv[1])
    {
        std::string line;
        std::ifstream file(argv[1]);
        while(getline(file, line)) {
            std::cout << line << std::endl;
        }

    } else {
        std::cout << "File not found" << std::endl;
        return -1;
    }

    return 0;
}
