    for (int i = 1; i < n; i++) { 
        for (int k = i; k >= 1; k--) {
            if (arr[k] < arr[k - 1]) {
                swap(arr[k], arr[k - 1]);
            } 
            else break; 
        }
    }