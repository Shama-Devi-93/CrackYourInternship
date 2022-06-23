bool findPair(int arr[], int size, int n){
    sort(arr,arr+size) ;
    for(int i=0 ; i<size ; i++)
    {
        int l=i+1, h=size-1 ;
        while(l<=h)
        {
            int mid=(l+h)/2 ;
            if(abs(arr[i]-arr[mid])==n) return true ;
            else if(arr[mid]-arr[i]>n) h=mid-1 ;
            else l=mid+1 ;
        }
    }

    return false ;
}
