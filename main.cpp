#include <iostream>




bool checkSort(int arr[5]){
    ///checks if the array is sorted
    for(int i = 0;i < 4;){///loops through the array
        int j = i+1;///j is the value after i

        if(arr[j] < arr[i]){///if a pair is out of order
            return false;///returns false if the array is out of order
        }
        ++i;
    }
    return true;///returns true is the array is sorted




}


void sortArr(int arr[5]){ ///sorts the array
    while(!checkSort(arr)){///continue sorting until the array is sorted
        for(int i = 0; i < 4;) ///loops through the array
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

void getArrFromUser(int arr[5]){
    ///gets a 5 elemnt array from the user
    std::cout << "enter a 5 element array: \n";
    for(int i = 0; i < 5;){
        std::cin >> arr[i];
        ++i;
    }



    return;
}

int main(){
    int arr[5] = {};
    getArrFromUser(arr);
    sortArr(arr);///sorts the array
    for(int i = 0; i < 5;){ 
        ///prints the array
        std::cout << arr[i] << ' ';
        ++i;
    }

    

    return 0;
}


