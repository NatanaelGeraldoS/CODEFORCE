void merge(data *manusia, int L, int R) {
    int M=(L+R)/2;
    int i=L, j=M+1, k=0;
    data temp[R-L+1];
    while(i<=M && j<=R){
        if(manusia[i].umur>manusia[j].umur) {
            temp[k]=manusia[i];
            ++i;
        }
        else if(manusia[i].umur<manusia[j].umur){
        	temp[k]=manusia[j];
            ++j;
		}
		else{
            if(strcmp(manusia[i].nama, manusia[j].nama)<0){
            	temp[k]=manusia[i];
           		++i;
			}
			else{
				temp[k]=manusia[j];
           		++j;
			}
        }
        ++k;
    }
    while(i<=M){
        temp[k]=manusia[i];
        ++i;
        ++k;
    }
    while(j<=R){
        temp[k]=manusia[j];
        ++j;
        ++k;
    }
    for(int i=0; i<k; ++i){
        manusia[L+i]=temp[i];
    }
}

void mergeSort(data *manusia, int L, int R) {
    if(L==R){
        return;
    }
	else{
        int M=(L+R)/2;
        mergeSort(manusia, L, M);
        mergeSort(manusia, M+1, R);
        merge(manusia, L, R);
	}
}
