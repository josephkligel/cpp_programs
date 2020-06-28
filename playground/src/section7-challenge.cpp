#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector <int> vector1;
	vector <int> vector2;

	vector1.push_back(10);
	vector1.push_back(20);
	cout << "vector1 has " << vector1.size() << " elements." << endl;
	for(int i{0}; i < vector1.size(); i++) cout << vector1[i] << endl;
	cout << endl;

	vector2.push_back(100);
	vector2.push_back(200);
	cout << "vector2 has " << vector2.size() << " elements." << endl;
	for(int i{0}; i < vector2.size(); i++) cout << vector2[i] << endl;
	cout << endl;

	vector <vector<int>> vector_2d {};
	vector_2d.push_back(vector1);
	vector_2d.push_back(vector2);
	cout << "=======vector_2d========" << endl;
	cout << vector_2d[0][0] << " " << vector_2d[0][1] << endl;
	cout << vector_2d[1][0] << " " << vector_2d[1][1] << endl;
	cout << endl;

	vector1[0] = 100;
	cout << "========vector_2d after new value assigned to vector1=======" << endl;
	cout << vector_2d[0][0] << " " << vector_2d[0][1] << endl;
	cout << vector_2d[1][0] << " " << vector_2d[1][1] << endl;
	cout << endl;

	cout << "vector1 with new value" << endl;
	for(int i{0}; i < vector1.size(); i++) cout << vector1[i] << " ";

	return 0;
}
