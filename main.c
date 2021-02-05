//
//  main.c
//  abc
//
//  Created by vladislav.tagayev on 03.02.2021.
//


#include <stdio.h>
#include "main.h"
#include "utils.h"


int main() {
    int array_int[4] = {1, 2, 3, 4};
    int idx_int = find_int(array_int, 4, 4);
    printf("index:%d\n", idx_int);
    
    double array_double[4] = {1, 2, 3, 4};
    int idx = find_double(array_double, 4, 3);
    printf("index:%d\n", idx);
    
    char *array_char[4] = {"test_1", "test_2", "test_3", "test_4"};
    int idx_char = find_char(array_char, 4, "test_2");
    printf("index:%d\n", idx_char);
    
    return 0;
}
