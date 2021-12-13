#include <iostream>
using namespace std;

#include<string>

const int MaxSize = 10;           //ͼ����ඥ�����
int visited[MaxSize]={0};

struct element
{
	int lowcost, adjvex;
};

template <class DataType>
class MGraph
{
public:
	MGraph(DataType a[ ], int n, int e);    //���캯������������n������e���ߵ�ͼ
	~MGraph( ) { }                     //��������Ϊ��
	void DFSTraverse(int v);              //������ȱ���ͼ
	void BFSTraverse(int v);               //������ȱ���ͼ
private:
    DataType vertex[MaxSize];          //���ͼ�ж��������
    int arc[MaxSize][MaxSize];          //���ͼ�бߵ�����
    int vertexNum, arcNum;             //ͼ�Ķ������ͱ���
};

template <class DataType>
MGraph<DataType>::MGraph(DataType a[ ], int n, int e)
{
	int i, j, w=0;
	vertexNum=n; arcNum=e;
	for (i=0; i<vertexNum; i++)
		vertex[i]=a[i];
	for (i=0; i<vertexNum; i++)
        for (j=0; j<vertexNum; j++)
			arc[i][j]=255; // ���輫��ֵΪ255����ʾ�������㲻�ڽ�
		for (int k=0; k<arcNum; k++)
		{
			cout<<"������ߵ������������ţ�";
			cin>>i;
			cin>>j;
//			arc[i][j]=1; arc[j][i]=1;	
			cout<<"������ߵ�Ȩֵ��";
			cin>>w;
			arc[i][j]=w; 
			arc[j][i]=w;	
		}
}

template <class DataType>
void MGraph<DataType>::DFSTraverse(int v)
{
	cout << vertex[v]; visited[v] = 1;
	for (int j = 0; j < vertexNum; j++)
		if (arc[v][j] > 0 && visited[j]==0) 
			DFSTraverse(j);
}

template <class DataType>
void MGraph<DataType>::BFSTraverse(int v)
{
	int Q[MaxSize];
	int front = -1, rear = -1;   //��ʼ������,������в���˳��洢�Ҳ��ᷢ�����
	cout << vertex[v]; visited[v] = 1;  Q[++rear] = v;   //�����ʶ������
	while (front != rear)                   //�����зǿ�ʱ
	{
		v = Q[++front];                   //����ͷԪ�س��Ӳ��͵�v��
		for (int j = 0; j < vertexNum; j++)
			if (arc[v][j] > 0 && visited[j] == 0 ) {
				cout << vertex[j]; 
				visited[j] = 1; 
				Q[++rear] = j;
			}
	}
}

void main( )
{
	char ch[]={'A','B','C','D','E'};
	MGraph<char> MG(ch, 5, 7);
	for (int i=0; i<MaxSize; i++)
		visited[i]=0;
	cout<<"������ȱ��������ǣ�";
	MG.DFSTraverse(0);
	cout<<endl;
	for (i=0; i<MaxSize; i++)
		visited[i]=0;
    cout<<"������ȱ��������ǣ�";
	MG.BFSTraverse(0);
	cout<<endl;
    //cout<<"�Ӷ���"<<ch[0]<<"�����յ�����·���ֱ��ǣ�"<<endl;
    //Dijkstra(MG,0);
	//cout<<endl;
    system("pause");
}
