#include <stdio.h>
#include "string.h"

int main(void)
{
    string_t s;
    string_t t;

    puts("Ex 0 : Except --> Hello World");
    string_init(&s, "Hello  World");
    puts(s.str);
    puts("");

    puts("Ex 1 : Except assign_c and assign_s");
    string_init(&t, "assign_s");
    s.assign_c(&s, "assign_c");
    puts(s.str);
    s.assign_s(&s, &t);
    puts(s.str);
    puts("");

    puts("Ex 2 : Except Hello_append_c and Hello_append_s");
    s.assign_c(&s, "Hello_");
    s.append_c(&s, "append_c");
    puts(s.str);
    s.assign_c(&s, "Hello_");
    t.assign_c(&t, "append_s");
    s.append_s(&s, &t);
    puts(s.str);
    puts("");

    puts("Ex 3 : Except i");
    s.assign_c(&s, "aaaa_i_aaaa");
    printf("%c\n", (s.at(&s, 5)));
    puts("");

    puts("Ex 4 : Except nothing");
    s.clear(&s);
    puts(s.str);
    puts("");

    puts("Ex 5 : Except 10");
    s.assign_c(&s, "HelloWorld");
    printf("%d\n", s.size(&s));
    puts("");

    puts("Ex 6 : Too Easy and la flemme");
    puts("");

    char str[20];

    puts("Ex 7 : Except 9 and My String");
    s.assign_c(&s, "My string");
    printf("%ld\n", s.copy(&s, str, 9, 0));
    puts(str);
    puts("");

    puts("Ex 8 : Except c_str");
    s.assign_c(&s, "c_str");
    printf("%s\n", s.c_str(&s));
    puts("");

    puts("Ex 9 : Except 0 and 1");
    s.assign_c(&s, "empty");
    printf("%d\n", s.empty(&s));
    s.assign_c(&s, "");
    printf("%d\n", s.empty(&s));
    puts("");

    string_destroy(&s);
    string_destroy(&t);
    return (0);
}