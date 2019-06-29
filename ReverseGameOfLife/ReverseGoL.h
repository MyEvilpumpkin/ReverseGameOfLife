#pragma once

// ���������, ����������� ����������� �������
struct Pattern {
	int pattern; // �������
	int* patternBitwise; // ������� � ���� �������
	int numOfLiveCells; // ���������� ����� ������ � ��������
	Pattern() : pattern(0), patternBitwise(nullptr), numOfLiveCells(0) {};
};

// ���������, ����������� ������
struct Cell {
	Pattern pattern; // ����������� �������
	Pattern inversePattern; // ��������������� ����������� �������
	void FillCell(int); // ��������� ������ ������ �� �������������� ��������
};

bool MatchCheck(int, Pattern); // �������� �� ���������� ����� � ��������
int** FreeField(int**, int); // ������������ ������ �� ��� ����
void FreePatterns(); // ������������ ������ �� ��� ���������
void FreeFIELDS(int); // ������������ ������ �� ��� �����
void FindAllPatterns(); // ���������� ���� ���������, ��������� � �� ��������� �����
int** CopyField(int**, int, int); // �������� ����� ����
void FindAllFields(int**, int, int); // ���������� �����, �������������� ��������� ����
int** ReformField(int**, int, int); // ����������� �� ���� ��������� ���������������� ����
