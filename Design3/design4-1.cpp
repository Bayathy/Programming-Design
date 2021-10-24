class Num;
int main()
{
 int n;
 cin >> n;
 double* d = new double[n];// double の配列（サイズ n）を確保
 Num* tmp = new Num;// Num を 1 個確保（配列じゃないやつ）
 Num* num = new Num[5]// Num の配列（サイズ 5）を確保
・・・
delete[] num;// num を解放
delete tmp;// tmp を解放
delete[] d;// d を解放
}