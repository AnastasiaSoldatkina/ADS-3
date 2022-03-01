// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int y = 0;
    for (int i = 0; size > i; i++) {
        if (arr[i] == value) {
            y++;
        }
    }
    return y;
}
