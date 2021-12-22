#include<stdio.h>
#include<unistd.h>

int main(int argc, char **argv) {
    int opt;

    while ( (opt = getopt(argc, argv, "a:p:")) != -1 ) {
        switch (opt) {
            case 'a':
                printf("option a: %s\n", optarg);
                break;
            case 'p':
                printf("option p: %s\n", optarg);
                break;
            default:
                printf("optopt +%c\n",optopt);
        }
    }

    return 0;
}