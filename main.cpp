#include <iostream>




bool checkSort(int arr[],int size){
    ///checks if the array is sorted
    for(int i = 0;i < size-1;){///loops through the array
        int j = i+1;///j is the value after i

        if(arr[j] < arr[i]){///if a pair is out of order
            return false;///returns false if the array is out of order
        }
        ++i;
    }
    return true;///returns true is the array is sorted




}


void sortArr(int arr[],int size){ ///sorts the array
    while(!checkSort(arr,size)){///continue sorting until the array is sorted
        for(int i = 0; i < size-1;) ///loops through the array
        {
            int j = i+1; ///gets the value after i
            if(arr[j] < arr[i]){ ///if the pair arent in order
                ///swaps values
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            i++;
        }///end of the loops
    }
   


    return;

}

int getSizeFromUser(){
    int size{};
    std::cout << "enter the size of the array: \n";
    std::cin >> size;


    return size;
}

void getArrFromUser(int arr[],int size){
    ///gets a 5 elemnt array from the user
    std::cout << "enter a " << size <<" elements array: \n";
    for(int i = 0; i < size;){
        std::cin >> arr[i];
        ++i;
    }



    return;
}

void printArr(int arr[],int size){

    for(int i = 0; i < size;){ 
        ///prints the array
        std::cout << arr[i] << ' ';
        ++i;
    }
    return;
}

int main(){
    int size=getSizeFromUser();
    int arr[size] = {};
    getArrFromUser(arr,size);
    sortArr(arr,size);///sorts the array
    printArr(arr,size);

    

    return 0;
}


