//
// Created by soste on 17/01/2025.
//

#include <stdio.h>

void fortune_cookie(char msg[])
{
    printf("Message reads: %s\n", msg);
    printf("msg occupies %i bytes\n", sizeof(msg));
}

void pass_string_to_function_sample() {
    char quote[] = "Cookies make you fat";
    fortune_cookie(quote);
}