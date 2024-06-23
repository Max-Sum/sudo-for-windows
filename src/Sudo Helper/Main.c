// Copyright (c) 2022 Liu Baihao. All rights reserved.
// This software is licensed under MIT License.

#include "SudoFramework.h"
#include "SudoConfiguration.h"
#include "Password.h"

int _tmain(int argc, LPTSTR *argv) {
    if (argc != 3) {
        return -1;
    }

    LPTSTR username = argv[1];
    LPTSTR launcher = argv[2];

    SetLastError(ERROR_SUCCESS);

    return GetLastError();
}
