void QKSort(RecordType r[],int low, int high )
/*�Լ�¼����r[low..high]�ÿ��������㷨��������*/
{
	int pos;
	if(low<high)
	{
		pos=QKPass(r, low, high);  /*����һ�˿������򣬽�����Ԫ��Ϊ�绮�������ӱ�*/
		QKSort(r, low, pos-1);     /*�����ӱ���������*/
		QKSort(r, pos+1, high); /*���Ҳ��ӱ���������*/
		
	}
}