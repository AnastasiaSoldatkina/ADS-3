// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
int i = 0;
    int j = size - 1;
    int d = 0;
    int Z = 0;
    while (i < j) {
        int x = i + (j - i) / 2;
        if (i == j - 1) {
            return 0;
            break;
        }
        d = x;
        if (arr[x] == value) {
            while (arr[x] == value) {
                x++;
            }
            j = x;
            x = d;
            while (arr[x] == value) {
                x--;
            }
            i = x;
            return j - i - 1;
            break;
        }
        if (arr[x] < value) {
            i = x;
            x++;
        } else {
            j = x - 1;
            x--;
        }
        if (Z > size) {
            return 0;
            break;
        }
        Z++;
    }
}
