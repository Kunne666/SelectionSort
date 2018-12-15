//=======================================================================================
//　アルゴリズム
//　課題：選択ソート
//　名前：柳瀬 拓臣
//=======================================================================================
#include <iostream>
#include <array>

using namespace std;

// プロトタイプ宣言
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

	// 表示
	for (int i = 0; i < data.size(); i++)
		cout << data[i] << endl;

	// 入力待ち
	cin.get();

	return 0;
}

// Swap関数（参照渡し）
void Swap(int& a, int& b)
{
	int tmp;

	tmp = a;
	a = b;
	b = tmp;
}