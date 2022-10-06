#include <string>
#include <sstream>
#include <iostream>

class Class
{
public:

    Class();
    ~Class();

    std::string toString() const;

    void SetName(std::string name);
    void SetNumber(int number);

    std::string GetName();
    int GetNumber();

    int sumAllN(int n);

private:

    int number;
    std::string name;
};