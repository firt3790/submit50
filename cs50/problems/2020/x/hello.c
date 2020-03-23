#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Name variable
    string name = get_string("State your name: ");
    printf("hello, %s!!! Nice to meet you!\n", name);
}
