#pragma once
#include "FS.h"
class HFSP :
	public FS
{
protected:
	// � ������ �� ����������� ������ ������� ��������� ������� ��������
	bool ReadClusterSize();
};

