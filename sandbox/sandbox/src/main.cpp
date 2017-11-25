#include <iostream>

class Log
{

public:
	enum Level {
		levelError, levelWarning, levelInfo
	};

private:
	Level m_log_level = levelInfo;

public:
	void info(const char* message)
	{
		if (m_log_level >= levelInfo) {
			std::cout << "[INFO]: " << message << std::endl;
		}
	}

	void warn(const char* message)
	{
		if (m_log_level >= levelWarning) {
			std::cout << "[WARNING]: " << message << std::endl;
		}	
	}

	void error(const char* message)
	{
		if (m_log_level >= levelError) {
			std::cout << "[ERROR]: " << message << std::endl;
		}
	}


	void setLogLevel(const Level& level)
	{
		m_log_level = level;
	}
};

int main()
{
	Log logger;
	logger.setLogLevel(Log::levelInfo);
	logger.info("Amir");
	logger.warn("Amir");
	logger.error("Amir");
	std::cin.get();
	return 0;
}