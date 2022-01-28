for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
        int min=i;
        for(int j=i+1; j<sizeof(arr)/sizeof(arr[0]); j++){
            if(arr[j]<arr[min]){
                min = j;
            }
            swap(arr[i], arr[min]); 
        }
    }