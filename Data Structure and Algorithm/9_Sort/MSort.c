void   MSort(RecordType  r1[],  int  low,  int  high,  RecordType  r3[])
/* r1[low..high]������������r3[low..high]�У�r2[low..high]Ϊ�����ռ� */ 
{
	int mid;
	RecordType  r2[20];
	if ( low==high ) 
		r3[low]=r1[low];
	else
	{
		mid=(low+high)/2;
        MSort(r1,low, mid, r2);
        MSort(r1,mid+1,high, r2);
        Merge (r2,low,mid,high, r3);
}
} /*   MSort  */ 