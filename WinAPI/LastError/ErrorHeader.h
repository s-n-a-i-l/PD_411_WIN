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
		static  LPSTR __stdcall FormatLastError(DWORD dwErrorID);
		static  VOID __stdcall PrintLastError(DWORD dwErrorID);
	};
}

