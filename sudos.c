#include <stdio.h>
#include "sudoku.h"

int main(int argc, char *argv[])
{
    sudoku su;

    if (argc < 2) {
        printf("Usage: sudos <sudoku-file>\n");
        return 1;
    }

    load_sudoku(argv[1], &su);
    print_sudoku(&su);

    solve_sudoku(&su, 1);

    return 0;
}

/*
int validate(sudoku *su) {

    int a, b, x, y, i, blocks = 3;
    int block[SUDOKU_SIZE] = {0};

 */
    /* zkontroluj bloky */
    /*
    for (a = 0; a < blocks; ++a) {
        for (b = 0; b < blocks; ++b) {
            /* projdi blok */
    /*
            i = 0;
            for (x = a * blocks; x < (a * blocks) + blocks; ++x) {
                for (y = b * blocks; y < (b * blocks) + blocks; ++y) {
                    block[i] = su->playfield[x][y] - '0';
                    i++;
                }
            }
        }
    }
}
     */


/*
int main(int argc, char *argv[]) {
    sudoku su;

    if (argc < 2) {
        printf("Usage: sudos <sudoku-file>\n");
        return 1;
    }

    load_sudoku(argv[1], &su);
    print_sudoku(&su);

    validate(&su);
}
 */

