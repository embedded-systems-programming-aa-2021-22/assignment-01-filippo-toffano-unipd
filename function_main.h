#ifndef function_main_h
#define function_main_h

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using std::cout;
using std::endl;
using std::vector;
using std::string;

// Function Declaration:

void print_vector(vector<string> &vector_to_print);

void print_vector(vector<int> &vector_lenght);

vector<int> string_lengths(vector<string> &length_argoument_vector);

string longest_string(vector<string> &longest_string_vector);

string shortest_string(vector<string> &shortest_string_vector);

string alpha_first_string(vector<string> &vector_string);

string alpha_last_string(vector<string> &vector_string); 

#endif 