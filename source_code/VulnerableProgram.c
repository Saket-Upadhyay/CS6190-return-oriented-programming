#include <stdio.h>
#include <unistd.h>

__attribute__((constructor))
void setup() {
    setvbuf(stdout, 0, 2, 0);
    setvbuf(stdin, 0, 2, 0);
}

void vuln() {
    char name[40];

    printf("How should we call you?\n");
    gets(name);

}

int main(void) {
    printf("Welcome to Teapotle!\n");
    vuln();
}
