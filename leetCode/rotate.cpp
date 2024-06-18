for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                std::swap(matrix[i][j], matrix[j][i]);
            }
        }
        
        // Step 2: Reverse each row
        for (int i = 0; i < n; ++i) {
            std::reverse(matrix[i].begin(), matrix[i].end());
        }