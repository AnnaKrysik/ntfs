#pragma once
#include "FS.h"
class NTFS :
	public FS
{
protected:
	// � ������ �� ����������� ������ ������� ��������� ������� ��������
	bool ReadClusterSize();
};

