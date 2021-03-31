#include <iostream>

using namespace std;

int main()
{
    std::string entrada;

    std::cout << "Enter with a string" << std::endl;
    std::getline (std::cin,entrada);

    int cont = 0;
    for (char ch : entrada)
    {
        cont++;
    }

    std::cout << "The length of the string is: " << cont << std::endl;
    system("PAUSE");
    return 0;
}
