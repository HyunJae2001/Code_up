//
//  1167.c
//  Code_Up
//
//  Created by HJ on 2020/08/18.
//  Copyright © 2020 K. All rights reserved.
//

#include <stdio.h>

void input(int A[], int start, int end) {
    for (int i = start; i <= end; i++) {
        scanf("%d", &A[i]);
    }
}

void swap(int *a, int *b) {
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

int qst(int A[], int start, int end) {
    int pivot, high, low;
    pivot = A[start];
    high = end + 1;
    low = start;
    
    while (1) {
        do {
            low++;
        } while (low < end && A[low] < pivot);
        do {
            high--;
        } while (high > start && A[high] > pivot);
        if (high > low) {
            swap(&A[high], &A[low]);
        }
        else{
            break;
        }
    }
    
    swap(&A[high], &A[start]);
    
    return high;
}

void engine(int A[], int start, int end) {
    if (start < end) {
        int std = qst(A, start, end);
        engine(A, std + 1, end);
        engine(A, start, std - 1);
    }
}

void display(int A[], int start, int end) {
    printf("%d", A[(start + end) / 2]);
}

int main() {
    int A[3];
    
    input(A, 0, 2);
    engine(A, 0, 2);
    display(A, 0, 2);
    
    return 0;
}
