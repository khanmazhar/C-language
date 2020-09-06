#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    enum gender {male, female};
    enum gender myGender;
    myGender = male;

    enum gender anotherGender = female;

    enum gender anotherGender2 = male;

    bool result = myGender == anotherGender || myGender == anotherGender2;

    printf( result ? "true" : "false");
    return 0;
}
