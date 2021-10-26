#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include "function_main.h"
using std::cout;
using std::endl;
using std::vector;
using std::string;

// Function definition:

void print_vector(vector<string> vector_to_print){
	cout<<"{";
	for(uint i = 0; i < vector_to_print.size(); i++){
		cout<<" "<<vector_to_print[i];
	}
	cout<<" }"<<endl;
}

void print_vector(vector<int> vector_lenght){
	cout<<"{";
	for(uint i = 0; i < vector_lenght.size(); i++){
		cout<<" "<< vector_lenght[i];
	}
	cout<<" }"<<endl;	
}

vector<int> string_lengths(vector<string> length_argoument_vector){
	vector<int> lengh_argoument;
	for(uint i = 0; i < length_argoument_vector.size(); i++){
		lengh_argoument.push_back(length_argoument_vector[i].size());
	}
	return lengh_argoument;
}

string longest_string(vector<string> longest_string_vector){
	uint longest_string = longest_string_vector[0].size();
	uint pos_longest = 0;

	for(uint i = 0; i < longest_string_vector.size(); i++){
		if(longest_string < longest_string_vector[i].size()){
			pos_longest = i;
			longest_string = longest_string_vector[i].size();
		}
	}

	return longest_string_vector[pos_longest];
}

string shortest_string(vector<string> shortest_string_vector){
	uint shortest_string = shortest_string_vector[0].size();
	uint pos_shortest = 0;

	for(uint i = 0; i < shortest_string_vector.size(); i++){
		if(shortest_string > shortest_string_vector[i].size()){
			pos_shortest = i;
			shortest_string = shortest_string_vector[i].size();
		}
	}

	return shortest_string_vector[pos_shortest];
}

string alpha_first_string(vector<string> vector_string){
	
	sort(vector_string.begin(), vector_string.end());

	return vector_string.front();
}

string alpha_last_string(vector<string> vector_string){

	sort(vector_string.begin(), vector_string.end());

	return vector_string.back();
}