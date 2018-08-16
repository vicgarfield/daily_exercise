//
// Created on 8/16/18.
//
// LCS: Longest Common String.

#include <iostream>

//void LCS_length(const std::string& A, const std::string& B, std::vector<std::vector<int>>& C, std::vector<std::vector<int>>& D) {
void LCS_length(const std::string& A, const std::string& B, int C[][8], int D[][8]) {
    unsigned long len_A = A.length();
    unsigned long len_B = B.length();

    for (int i=0; i<=len_A; i++) {
        C[i][0] = 0;
        D[i][0] = 2;
    }
    for (int j=0; j<=len_B; j++) {
        C[0][j] = 0;
        D[0][j] = 2;
    }

    for (int i=1; i<=len_A; i++) {
        for (int j=1; j<=len_B; j++) {
            if (A[i-1] == B[j-1]) {
                C[i][j] = C[i-1][j-1] + 1;
                D[i][j] = 0;
            }
            else if (C[i-1][j] > C[i][j-1]) {
                C[i][j] = C[i-1][j];
                D[i][j] = -1;
            }
            else {
                C[i][j] = C[i][j-1];
                D[i][j] = 1;
            }
        }
    }
}

//void LCS_print(std::string& A, const std::string& B, std::vector<std::vector<int>> C, std::vector<std::vector<int>> D, std::string& S) {
void LCS_print(std::string& A, const std::string& B, int C[][8], int D[][8], std::string& S) {
    unsigned long len_A = A.length();
    unsigned long len_B = B.length();

    if (C[len_A][len_B] == 0)
        return;

    int i = len_A;
    int j = len_B;

    while (i >= 0 && j >= 0) {
        std::cout << "i:" << i << ", j:" << j << ", D:" << D[i][j] << std::endl;

        if (D[i][j] == 0) {
            S += A[i-1];
            std::cout << "s:" << S << std::endl;
            i--;
            j--;
        }
        else if (D[i][j] == 1) {
            --j;
        }
        else {
            --i;
        }
    }
}

std::string find_LCS(std::string& A, std::string& B) {

    // write a list
//    std::vector<std::vector<int>> C;
//    std::vector<std::vector<int>> D;

    int C[8][8];
    int D[8][8];

    LCS_length(A, B, C, D);

    std::string S;

    LCS_print(A, B, C, D, S);

    std::string reverse_S;

    for (int i=S.length()-1; i>=0; i--) {
        reverse_S += S[i];
    }

    std::cout << "S: " << S << std::endl;

    return reverse_S;
}

int main() {
    std::string A = "ABDASDS";
//    std::string B = "ABDASDS";
    std::string B = "DFSFBAF";
    std::string Out;

    Out = find_LCS(A, B);

    std::cout << "Out string: " << Out << std::endl;

}

