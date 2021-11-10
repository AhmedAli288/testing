//Robert Mcdonald

#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>

using namespace std;

int RandomAssign()
{
return ((rand() % 100) + 1);
}


void RandomAssignments(int data[],int n){
	for(int i=0; i<n; i++){
		data[i] = RandomAssign();
	}
	
}

int main(){
	
	srand(time(NULL));
	
	int value1, value2;
	int Arr1[5], Arr2[5];
	int *ptr1, *ptr2, *ptr3, *ptr4;

	cout << "Address of variable1: "<< &value1 << "\n";
	cout << "Address of variable2: "<< &value2 << "\n";
	
	cout << "Address of Array1: "<< &Arr1 << "\n";
	cout << "Address of Array2: "<< &Arr2 << "\n";
	
	cout << "Address of Pointer1: "<< &ptr1 << "\n";
	cout << "Address of Pointer2: "<< &ptr2 << "\n";
	cout << "Address of Pointer3: "<< &ptr3 << "\n";
	cout << "Address of Pointer4: "<< &ptr4 << "\n";
	
	
	int size;
	cout<<"Enter Size: ";
	cin>>size;
	
	RandomAssignments(Arr1, size);
	RandomAssignments(Arr2, size);
	
	value1 = RandomAssign();
	value2 = RandomAssign();
	
	ptr1 = &value1;
	ptr2 = &value2;
	ptr3 = &Arr1[0];
	ptr4 = &Arr2[0];
	
	
	cout <<"pointer "<< ptr1 << " : " << *ptr1 << "\n";
	cout <<"pointer "<< ptr2 << " : " << *ptr2 << "\n";
	cout <<"pointer "<< ptr3 << " : " << *ptr3 << "\n";
	cout <<"pointer "<< ptr4 << " : " << *ptr4 << "\n";
	
	cout <<"variable "<< &value1 << " : " << value1 << "\n";
	cout <<"variable "<< &value2 << " : " << value2 << "\n";
	
	return 0;
}

//Output
//
//Address of variable1: 0x6ffe0c
//Address of variable2: 0x6ffe08
//Address of Array1: 0x6ffdf0
//Address of Array2: 0x6ffdd0
//Address of Pointer1: 0x6ffdc8
//Address of Pointer2: 0x6ffdc0
//Address of Pointer3: 0x6ffdb8
//Address of Pointer4: 0x6ffdb0
//Enter Size: 4
//pointer 0x6ffe0c : 57
//pointer 0x6ffe08 : 78
//pointer 0x6ffdf0 : 54
//pointer 0x6ffdd0 : 61
//variable 0x6ffe0c : 57
//variable 0x6ffe08 : 78
