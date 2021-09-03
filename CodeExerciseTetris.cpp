// Hello, I'm creator of this file. Hihi, i finished my exercise. It's not easy but not too hard either.

#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;
char Straighttetromino[4][4] = { {' ', 'X', ' ', ' '},
				 {' ', 'X', ' ', ' '},
				 {' ', 'X', ' ', ' '},
				 {' ', 'X', ' ', ' '} };
char Squaretetromino[4][4] = { {' ', ' ', ' ', ' '},
			       {' ', 'X', 'X', ' '},
			       {' ', 'X', 'X', ' '},
			       {' ', ' ', ' ', ' '} };
char Ttetromino[4][4] = { {' ', ' ', 'X', ' '},
			{' ', 'X', 'X', ' '},
			{' ', ' ', 'X', ' '},
			{' ', ' ', ' ', ' '} };
char Ltetromino[4][4] = { {' ', 'X', ' ', ' '},
			  {' ', 'X', ' ', ' '},
			  {' ', 'X', 'X', ' '},
		          {' ', ' ', ' ', ' '} };
char ReverseLtetromino[4][4] = { {' ', ' ', 'X', ' '},
				 {' ', ' ', 'X', ' '},
				 {' ', 'X', 'X', ' '},
				 {' ', ' ', ' ', ' '} };
char SkewLefttetromino[4][4] = { {' ', ' ', 'X', ' '},
				 {' ', 'X', 'X', ' '},
				 {' ', 'X', ' ', ' '},
				 {' ', ' ', ' ', ' '} };
char SkewRighttetromino[4][4] = { {' ', 'X', ' ', ' '},
				  {' ', 'X', 'X', ' '},
				  {' ', ' ', 'X', ' '},
				  {' ', ' ', ' ', ' '} };
int const numOfRow = 4;
int const numOfColumn = 4;
void rotate90(char arr[numOfRow][numOfColumn]) {
	char tempArr[numOfRow][numOfColumn];
	for (int r = 0; r < numOfRow; r += 1) {
		for (int c = 0; c < numOfColumn; c += 1) {
			tempArr[r][c] = arr[r][c];
		}
	}
	for (int r = 0; r < numOfRow; r += 1) {
		for (int c = 0; c < numOfColumn; c += 1) {
			int convertR = c;
			int convertC = (numOfColumn - 1) - r;
			arr[convertR][convertC] = tempArr[r][c];
		}
	}
}
void print(char arr[numOfColumn][numOfColumn]) {
	for (int r = 0; r < numOfRow; r += 1) {
		for (int c = 0; c < numOfColumn; c += 1) {
			cout << arr[r][c];
		}
		cout << endl;
	}
	cout << endl;
}
string tetromino[7] = { "Straight tetromino","Square tetromino", "T tetromino", "L tetromino", "Reverse L tetromino", "Skew Left tetromino", "Skew Right tetromino" };
string rotatecss[3] = { "90css", "180css", "270css" };
void DrawandRotateTetromino();
void RotateStraighttetromino()
{
	int choose = rand() % 3 + 0;
	cout << "Rotate " << rotatecss[choose] << ":";
	cout << endl;
	switch (choose){
		case 0:
			rotate90(Straighttetromino);
			print(Straighttetromino);
		    break;
		case 1:
			rotate90(Straighttetromino);
			rotate90(Straighttetromino);
			print(Straighttetromino);
			break;
		case 2:
			rotate90(Straighttetromino);
			rotate90(Straighttetromino);
			rotate90(Straighttetromino);
			print(Straighttetromino);
			break;
	}
}
void RotateSquaretetromino()
{
	int choose = rand() % 3 + 0;
	cout << "Rotate " << rotatecss[choose] << ":";
	cout << endl;
	switch (choose) {
	case 1:
		rotate90(Squaretetromino);
		print(Squaretetromino);
		break;
	case 2:
		rotate90(Squaretetromino);
		rotate90(Squaretetromino);
		print(Squaretetromino);
		break;
	case 3:
		rotate90(Squaretetromino);
		rotate90(Squaretetromino);
		rotate90(Squaretetromino);
		print(Squaretetromino);
		break;
	}
}
void RotateTtetromino()
{
	int choose = rand() % 3 + 0;
	cout << "Rotate " << rotatecss[choose] << ":";
	cout << endl;
	switch (choose) {
	case 0:
		rotate90(Ttetromino);
		print(Ttetromino);
		break;
	case 1:
		rotate90(Ttetromino);
		rotate90(Ttetromino);
		print(Ttetromino);
		break;
	case 2:
		rotate90(Ttetromino);
		rotate90(Ttetromino);
		rotate90(Ttetromino);
		print(Ttetromino);
		break;
	}
}
void RotateLtetromino()
{
	int choose = rand() % 3 + 0;
	cout << "Rotate " << rotatecss[choose] << ":";
	cout << endl;
	switch (choose) {
	case 0:
		rotate90(Ltetromino);
		print(Ltetromino);
		break;
	case 1:
		rotate90(Ltetromino);
		rotate90(Ltetromino);
		print(Ltetromino);
		break;
	case 2:
		rotate90(Ltetromino);
		rotate90(Ltetromino);
		rotate90(Ltetromino);
		print(Ltetromino);
		break;
	}
}
void RotateReverseLtetromino()
{
	int choose = rand() % 3 + 0;
	cout << "Rotate " << rotatecss[choose] << ":";
	cout << endl;
	switch (choose) {
	case 0:
		rotate90(ReverseLtetromino);
		print(ReverseLtetromino);
		break;
	case 1:
		rotate90(ReverseLtetromino);
		rotate90(ReverseLtetromino);
		print(ReverseLtetromino);
		break;
	case 2:
		rotate90(ReverseLtetromino);
		rotate90(ReverseLtetromino);
		rotate90(ReverseLtetromino);
		print(ReverseLtetromino);
		break;
	}
}
void RotateSkewLefttetromino()
{
	int choose = rand() % 3 + 0;
	cout << "Rotate " << rotatecss[choose] << ":";
	cout << endl;
	switch (choose) {
	case 0:
		rotate90(SkewLefttetromino);
		print(SkewLefttetromino);
		break;
	case 1:
		rotate90(SkewLefttetromino);
		rotate90(SkewLefttetromino);
		print(SkewLefttetromino);
		break;
	case 2:
		rotate90(SkewLefttetromino);
		rotate90(SkewLefttetromino);
		rotate90(SkewLefttetromino);
		print(SkewLefttetromino);
		break;
	}
}
void RotateSkewRighttetromino()
{
	int choose = rand() % 3 + 0;
	cout << "Rotate " << rotatecss[choose] << ":";
	cout << endl;
	switch (choose) {
	case 0:
		rotate90(SkewRighttetromino);
		print(SkewRighttetromino);
		break;
	case 1:
		rotate90(SkewRighttetromino);
		rotate90(SkewRighttetromino);
		print(SkewRighttetromino);
		break;
	case 2:
		rotate90(SkewRighttetromino);
		rotate90(SkewRighttetromino);
		rotate90(SkewRighttetromino);
		print(SkewRighttetromino);
		break;
	}
}
int main() {
	int x;
    START:
	cout << "          Menu        " << endl;
	cout << "1. If you want to clear console screen, enter 1!" << endl;
	cout << endl;
	cout << "2. If you want to draw Tetromino and Rotate on console screen, enter 2!" << endl;
	cout << endl;
	cout << "3. If you want to exit the program, enter 3!" << endl;
	cin >> x;

	if (x != 1 && x != 2 && x != 3)
	{
		cout << "Please enter 1  or 2 or 3!!!" << endl;
		goto START;
	}
	else if (x == 1)
	{
		system("cls");
		goto START;
	}
	else if (x == 2)
	{

		DrawandRotateTetromino();
		goto START;
	}
	else
	{
		cout << "Thank you for testing!" << endl;
	}

	system("pause");
	return 0;
}
void DrawandRotateTetromino()
{
AGAIN:
	int choose = rand() % 6 + 0;
	cout << "Draw " << tetromino[choose] << ":" << endl;
	cout << endl;
	switch(choose)
		{
	case 0:
		print(Straighttetromino);
		RotateStraighttetromino();
		break;
	case 1:
		print(Squaretetromino);
		RotateSquaretetromino();
		break;
	case 2:
		print(Ttetromino);
		RotateTtetromino();
		break;
	case 3:
		print(Ltetromino);
		RotateLtetromino();
		break;
	case 4:
		print(ReverseLtetromino);
		RotateReverseLtetromino();
		break;
	case 5:
		print(SkewLefttetromino);
		RotateSkewLefttetromino();
		break;
	case 6:
		print(SkewRighttetromino);
		RotateSkewRighttetromino();
		break;
	}
}
Source: Ex 2.1: https://www.youtube.com/watch?v=YURfJP4CJGo. Keyword: how to clear the screen console c++
        Ex 2.3: https://www.youtube.com/watch?v=faUM8Xrod-I. Keyword: ngẫu nhiên c++ 

Thank you for your watching. If you like it, you can fix it to be more better.
