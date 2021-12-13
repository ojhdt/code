#include <iostream>
using namespace std;

const int MaxSize = 10; //ͼ����ඥ�����
int visited[MaxSize] = {0};

template <class DataType>
class MGraph
{
public:
	MGraph(DataType a[], int n, int e); //���캯������������n������e���ߵ�ͼ
	~MGraph() {}						//��������Ϊ��
	void DFSTraverse(int v);			//������ȱ���ͼ
	void BFSTraverse(int v);			//������ȱ���ͼ
private:
	DataType vertex[MaxSize];  //���ͼ�ж��������
	int arc[MaxSize][MaxSize]; //���ͼ�бߵ�����
	int vertexNum, arcNum;	   //ͼ�Ķ������ͱ���
};

////////////����1//////////
template <class DataType>
MGraph<DataType>::MGraph(DataType a[], int n, int e){
	int i,j,k;
	vertexNum = n;
	arcNum = e;
	for(i = 0; i < vertexNum; i++){
		vertex[i] = a[i];
	}
	for(i = 0 ; i < vertexNum; i++){
		for ( j = 0; j < vertexNum; j++)
		{
			arc[i][j] = 0;
		}
	}
	for ( k = 0; k < arcNum; k++)
	{
		cin >> i >> j;
		arc[i][j] = 1;
		arc[j][i] = 1;
	}
	
}

template <class DataType>
void MGraph<DataType>::DFSTraverse(int v){
	cout << vertex[v];
	visited[v] = 1;
	for(int j = 0; j < vertexNum; j++){
		if(arc[v][j] == 1 && visited[j] == 0) DFSTraverse(j);
	}
}

template<class DataType>
void MGraph<DataType>::BFSTraverse(int v){
	int w, j, Q[MaxSize];
	int front = -1, rear = -1;
	cout << vertex[v];visited[v] = 1;
	Q[++rear] = v;
	while (front != rear)	
	{
		w = Q[++front];
		for(j = 0; j < vertexNum; j++){
			if(arc[w][j] == 1 && visited[j] == 0){
				cout << vertex[j];
				visited[j] = 1;
				Q[++rear] = j;
			}
		}
	}
	
}
//////////////////////////

int main()
{
	char ch[] = {'A', 'B', 'C', 'D', 'E', 'F'};
	MGraph<char> MG(ch, 6, 6);
	////////////����2//////////
	for(int i = 0; i < MaxSize; i++){
		visited[i] = 0;
	}
	cout << "DFT:";
	MG.DFSTraverse(0);
	cout << "BFT:";
	MG.BFSTraverse(0);
	return 0;
	//////////////////////////
}