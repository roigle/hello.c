#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Ask the user for their name
    string name = get_string("What's your name?\n");

    // Print the user's name
    printf("hello, %s\n", name);
}