//=======================================================================================
//�@�A���S���Y��
//�@�ۑ�F�I���\�[�g
//�@���O�F���� ��b
//=======================================================================================
#include <iostream>
#include <array>

using namespace std;

// �v���g�^�C�v�錾
void Swap(int& a, int& b);

int main()
{
	array<int,5> data = { 12,13,11,14,10 };
	int indexMin = 0;

	for (int i = 0;  i < 4;  i++)
	{
		indexMin = i;
		for (int k = i+1; k < 5; k++)
		{
			if (data[k] < data[indexMin])
			{
				indexMin = k;
			}
			Swap(data[i], data[indexMin]);
		}
	}

	// �\��
	for (int i = 0; i < data.size(); i++)
		cout << data[i] << endl;

	// ���͑҂�
	cin.get();

	return 0;
}

// Swap�֐��i�Q�Ɠn���j
void Swap(int& a, int& b)
{
	int tmp;

	tmp = a;
	a = b;
	b = tmp;
}