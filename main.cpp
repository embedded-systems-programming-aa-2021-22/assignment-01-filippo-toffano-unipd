// Stroustrup, Programming -- Principles and Practice Using C++ (Second Edition)
// Chapter 8, Exercise 13

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using std::cout;
using std::endl;
using std::vector;
using std::string;

// Function Declaration:

void print_vector(vector<string> vector_to_print);
void print_vector(vector<int> vector_lenght);
vector<int> string_lengths(vector<string> length_argoument_vector);
string longest_string(vector<string> longest_string_vector);
string shortest_string(vector<string> shortest_string_vector);
string alpha_first_string(vector<string> vector_string);
string alpha_last_string(vector<string> vector_string); 

int main()
{
	vector<string> string_v;
	string_v.push_back("first");
	string_v.push_back("second");
	string_v.push_back("third");
	string_v.push_back("fourth");
	string_v.push_back("fifth");
	string_v.push_back("sixth");
	string_v.push_back("seventh");

	cout << "Vector of strings: \n";
	// 1. write a function "print" that prints the vector of strings
	print_vector(string_v);

	// 2. write a function string_lengths returns a vector
	//    with length of each string in argument
	vector<int> lengths = string_lengths(string_v);

	cout << "Vector of lengths:\n";
	print_vector(lengths);

	// 3. write a function "longest_string" that
	//    returns longest string in a vector of strings
	cout << "Longest string: " << longest_string(string_v) << endl;

	// 4. write a function "shortest_string" that
	// returns the shortest string in a vector of strings
	cout << "Shortest string: " << shortest_string(string_v) << endl;

	// 5. write a function "alpha_first_string" that
	// returns lexicographically first string in a vector of strings
	cout << "Lexicographically first string: " << alpha_first_string(string_v) << endl;

	// 6. write a function "alpha_last_string" that
	// returns lexicographically last string in a vector of strings
	cout << "Lexicographically last string: " << alpha_last_string(string_v) << endl;

	return 0;
}

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




