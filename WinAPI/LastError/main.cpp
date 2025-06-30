#include"ErrorHeader.h"


LPSTR our::LastError::FormatLastError(DWORD dwErrorID)
{
	//DWORD dwErrorID = GetLastError();
	LPSTR lpszMessage = NULL;
	FormatMessage
	(
		FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM | FORMAT_MESSAGE_IGNORE_INSERTS,
		NULL,
		dwErrorID,
		MAKELANGID(LANG_NEUTRAL, SUBLANG_RUSSIAN_RUSSIA),
		(LPSTR)&lpszMessage,
		NULL,
		NULL
	);
	return lpszMessage;
}

VOID our::LastError::PrintLastError(DWORD dwErrorID)
{
	LPSTR lpszMessage = FormatLastError(GetLastError());
	std::cout << lpszMessage << std::endl;
	LocalFree(lpszMessage);
}

