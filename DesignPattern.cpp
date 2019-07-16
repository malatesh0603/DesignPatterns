// DesignPattern.cpp : Defines the entry point for the console application.
//



#include "stdafx.h"
#include "Logger.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	Logger *m_pInstance = Logger::GetInstance();
	m_pInstance->OpenLogFile();
	m_pInstance->WriteLogFile("My Name is Malatesh");
	m_pInstance->WriteLogFile("This is to log all entries all items in a file");
	m_pInstance->CloseLogFile();
	return 0;
	// m_pInstance->WriteLogFile("This is the first line in the log file"); 
}

