#include <iostream>
#include <string_view>

int getName()
{
    while (true)
    {
        std::cout << "choose an animal 1=cat, 2=dog, 3=chicken ";
        int animalNumber{};
        std::cin >> animalNumber;

        switch (animalNumber)
        {
        case 1: return 0; break;
        case 2: return 1; break;
        case 3: return 2; break;
        default:
            std::cout << "invalid\n";
            break;
        }
    }
}
enum class Animals
{
    cat,
    dog,
    chicken,
};
void printNumberOfLegs(int x)
{
    switch (x)
    {
    case 0: std::cout << "A cat has 4 legs\n"; break;
    case 1: std::cout << "A dog has 4 legs\n"; break;
    case 2: std::cout << "A chicken has 2 legs\n"; break;
    default:
        std::cout << "something went wrong\n";
        break;
    }
}
int main()
{
    int name{ getName() };
    printNumberOfLegs(name);

    return 0;
}


