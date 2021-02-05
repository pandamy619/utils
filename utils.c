//
//  utils.c
//  abc
//
//  Created by vladislav.tagayev on 02.02.2021.
//
#include <stdio.h>
#include <string.h>
#include "utils.h"



double sum(double *array, int length) {
    double value = 0.0;
    for(int i = 0; i < length; i++){
        value += array[i];
    }
    return value;
}


int find_int(int *array, int length, int variable) {
    for (int i = 0; i < length; i++) {
        if (variable == array[i]) {
            return i;
        }
    }
    return -1;
}


int find_double(double *array, int length, int variable) {
    for (int i = 0; i < length; i++) {
        if (variable == array[i]) {
            return i;
        }
    }
    return -1;
}

int find_char(char **array, int length, char *variable) {
    int idx;
    for(int i=0; i<length; i++) {
        idx = strcmp(variable, array[i]);
        if (idx == 0) {
            return i;
        }
    }
    return 0;
}
