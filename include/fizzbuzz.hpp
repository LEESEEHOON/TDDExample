#pragma once

inline int fizzbuzz(int num) {
    if ((num % 3) == 0 && (num % 5) == 0) {
        return 300;
    } else if ((num % 3) == 0) {
        return 100;
    } else if ((num % 5) == 0) {
        return 200;
    } else {
        return num;
    }
}
