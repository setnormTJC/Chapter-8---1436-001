#include <iostream>
#include <vector>

using namespace std;

//int main() {
//    vector<int> vectorList;
//
//    //vector<> listName;
//
//    vectorList.push_back(10);
//    vectorList.push_back(20);
//    vectorList.push_back(30);
//
//    cout << "Elements in the vector: ";
//    for (int i = 0; i < vectorList.size(); ++i) {
//        std::cout << vectorList[i] << " ";
//    }
//    cout << std::endl;
//
//    const int numberOfElements = 3;
//    int arrayList[numberOfElements];
//
//    arrayList[0] = 40; //
//    arrayList[1] = 50;
//    arrayList[2] = 60;
//
//    arrayList[3] = 70;
//
//    cout << "Elements in the array: ";
//    for (int i = 0; i < 4; ++i) {
//        std::cout << arrayList[i] << " ";
//    }
//    cout << std::endl;
//
//    return 0;
//}


int main() {
	string airplanes[] =
	{
		"Cessna 172",
		"Mooney M20R",
		"Bonanza G36"
	};


	vector<string> notes{
		"A ",
		"A#",
		"B ",
		"C ",
		"C#",
		"D ",
		"D#",
		"E ",
		"F ",
		"F#",
		"G ",
		"G#"

	};

	for (int i = 0; i < notes.size(); i++) {
		cout << notes[i] << "\t" << notes[(i + 4) % 12] << "\t" << notes[(i + 7) % 12] << endl;
	}

	return 0;
}
