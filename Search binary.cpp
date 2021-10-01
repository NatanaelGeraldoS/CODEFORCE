int search(int arr[], int l, int r, int x) 
{ 
    if (r >= l) { 
        int tengah = l + (r - l) / 2; 
        if (arr[tengah] == x) {
        	return tengah;
		}
  		if (arr[tengah] > x){
  			return search(arr, l, tengah - 1, x); 
		}
        return search(arr, tengah + 1, r, x); 
    } 
    return -1; 
} 
