#pragma once
#include<Windows.h>
#include<float.h>
#include<stdio.h>
#include<iostream>
namespace our
{
	class LastError
	{
	public:
		LPSTR FormatLastError(DWORD dwErrorID);
		VOID PrintLastError(DWORD dwErrorID);
	};
}

