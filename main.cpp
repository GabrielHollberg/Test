#include "Class.h"

int main(int argc, char* argv[])
{

    Class object;

    object.SetName("Gabriel Thomas Hollberg");

    object.SetNumber(21);

    std::cout << object.sumAllN(object.GetNumber());

    return 0;

}