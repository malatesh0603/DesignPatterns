#include<iostream>
#include<fstream>
#include<string>

using namespace std;

class Logger
{
private:
	Logger() { };
	static Logger* m_pInstance;
	Logger(Logger const&);
	Logger& operator =(Logger const&);
 	ofstream mSaveData;
public: 

static Logger* GetInstance()
{
		if (m_pInstance==NULL)
			m_pInstance = new Logger();
		
		return m_pInstance;
}
	void OpenLogFile()
	{
		mSaveData.open("Example.txt");
	}
	void WriteLogFile(string data)
	{
		mSaveData << data << endl;
	}

	void CloseLogFile()
	{
		mSaveData.close();
	}
};

Logger* Logger::m_pInstance = NULL; 
