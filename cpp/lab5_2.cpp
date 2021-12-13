#include <iostream>
using namespace std;

const int MaxSize = 10; //ͼ����ඥ�����
int visited[MaxSize] = {0};

struct element
{
	int lowcost, adjvex;
};

template <class DataType>
class MGraph
{
public:
	MGraph(DataType a[], int n, int e); //���캯������������n������e���ߵ�ͼ
	~MGraph() {}						//��������Ϊ��
	void DFSTraverse(int v);			//������ȱ���ͼ
	void BFSTraverse(int v);			//������ȱ���ͼ
	void Prim(int v);

private:
	DataType vertex[MaxSize];  //���ͼ�ж��������
	int arc[MaxSize][MaxSize]; //���ͼ�бߵ�����
	int vertexNum, arcNum;	   //ͼ�Ķ������ͱ���
};

template <class DataType>
MGraph<DataType>::MGraph(DataType a[], int n, int e)
{
	int i, j, w = 0;
	vertexNum = n;
	arcNum = e;
	for (i = 0; i < vertexNum; i++)
		vertex[i] = a[i];
	for (i = 0; i < vertexNum; i++)
		for (j = 0; j < vertexNum; j++)
			arc[i][j] = 0;
	for (int k = 0; k < arcNum; k++)
	{
		cout << "������ߵ������������ţ�";
		cin >> i;
		cin >> j;
		// arc[i][j]=1; arc[j][i]=1;
		cout << "������ߵ�Ȩֵ��";
		cin >> w;
		arc[i][j] = w;
		arc[j][i] = w;
	}
}

template <class DataType>
void MGraph<DataType>::DFSTraverse(int v)
{
	cout << vertex[v];
	visited[v] = 1;
	for (int j = 0; j < vertexNum; j++)
		if (arc[v][j] == 1 && visited[j] == 0)
			DFSTraverse(j);
}

template <class DataType>
void MGraph<DataType>::BFSTraverse(int v)
{
	int Q[MaxSize];
	int front = -1, rear = -1; //��ʼ������,������в���˳��洢�Ҳ��ᷢ�����
	cout << vertex[v];
	visited[v] = 1;
	Q[++rear] = v;		  //�����ʶ������
	while (front != rear) //�����зǿ�ʱ
	{
		v = Q[++front]; //����ͷԪ�س��Ӳ��͵�v��
		for (int j = 0; j < vertexNum; j++)
			if (arc[v][j] == 1 && visited[j] == 0)
			{
				cout << vertex[j];
				visited[j] = 1;
				Q[++rear] = j;
			}
	}
}

int MinEdge(int lowcost[], int vertexNum)
{
	int min = 0;
	for (int i = 0; i < vertexNum; i++)
	{
		if (lowcost[i] != 0 && lowcost[i] < lowcost[min])
			min = i;
	}
	return min;
}

template <class DataType>
void MGraph<DataType>::Prim(int v)
{
	int i, j, k;
	int adjvex[MaxSize], lowcost[MaxSize];
	for (i = 0; i < vertexNum; i++)
	{
		lowcost[i] = arc[v][i];
		adjvex[i] = v;
	}
	lowcost[v] = 0;
	for (k = 0; k < vertexNum; k++)
	{
		j = MinEdge(lowcost, vertexNum);
		cout << j << adjvex[j] << lowcost[j] << endl;
		lowcost[j] = 0;
		for (i = 0; i < vertexNum; i++)
		{
			if (arc[i][j] < lowcost[i])
			{
				lowcost[i] = arc[i][j];
				arc[i] = j;
			}
		}
	}
}

int main()
{
	char ch[] = {'A', 'B', 'C', 'D', 'E', 'F'};
	MGraph<char> MG(ch, 6, 9);
	for (int i = 0; i < MaxSize; i++)
		visited[i] = 0;
	cout << "������ȱ��������ǣ�";
	MG.DFSTraverse(0);
	cout << endl;
	for (int i = 0; i < MaxSize; i++)
		visited[i] = 0;
	cout << "������ȱ��������ǣ�";
	MG.BFSTraverse(0);
	cout << endl;
	cout << "��С�����������ɹ���Ϊ��" << endl;
	MG.Prim(0);
	cout << endl;
	system("pause");
}
