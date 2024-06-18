#include <iostream>
#include <vector>

int printtingValue(int a)
{
    std::cout << "the value is : " << a << std::endl;
    return 0;
}
void forEach(const std::vector<int> val, void (*printing)(int))
{
    for (const int v : val)
        printing(v);
}
int main(int argc, char const *argv[])
{
    std::vector<int> values = {1, 2, 3, 4, 5};
    forEach(values, [](int c)
            { std::cout << c; });
    return 0;
}
