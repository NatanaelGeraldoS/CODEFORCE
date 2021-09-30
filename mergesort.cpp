void merge(int *a, int L, int R) {
    int M=(L+R)/2;
    int i=L, j=M+1, k=0;
    int temp[R-L+1];
    while(i<=M && j<=R){
        if(a[i]<=a[j]) {
            temp[k]=a[i];
            ++i;
        }
		else{
            temp[k]=a[j];
            ++j;
        }
        ++k;
    }
    while(i<=M){
        temp[k]=a[i];
        ++i;
        ++k;
    }
    while(j<=R){
        temp[k]=a[j];
        ++j;
        ++k;
    }
    for(int i=0; i<k; ++i){
        a[L+i]=temp[i];
    }
}

void mergeSort(int *a, int L, int R) {
    if(L==R){
        return;
    }
	else{
        int M=(L+R)/2;
        mergeSort(a, L, M);
        mergeSort(a, M+1, R);
        merge(a, L, R);
	}
}
