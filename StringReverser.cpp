//
// Created by shaiac on 13/01/2020.
//

#include "StringReverser.h"
/**
 * reversing a string.
 * @param problem a string.
 * @return reversed string.
 */
string StringReverser::solve(string problem) {
    string solution = "";
    int i;
    for (i = problem.length() - 1; i >= 0; i--) {
        if(problem[i] != '\r' && problem[i]!='\n')
        solution += problem[i];
    }
    return  solution;
}