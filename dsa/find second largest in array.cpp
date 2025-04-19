//question: https://www.geeksforgeeks.org/problems/second-largest3735/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=second-largest

public:
int getSecondLargest(vector<int> &arr) {
    
    int largest = arr[0];
    int Slargest = -1;
    
    for(int i=0; i<arr.size(); i++) {
        if(arr[i] > largest) {
            Slargest = largest;
            largest = [i];
        }
        else if(arr[i] < largest && arr[i] > Slargest) {
            Slargest = arr[i];
        }
    }
    return Slargest;
}

