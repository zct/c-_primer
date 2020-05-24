#include <string>
#include <iostream>


class Event
{
public:
	std::string getType();
	struct timeval getTime();
	virtual std::string getDescription()=0;

private:
	std::string m_type;
	struct timeval m_time;
};

class PortScanEvent : public Event
{
public:
	virtual std::string getDescription() override
	{
		return "Port scan from "+this->m_fromIP;
	}	
private:
    std::string m_fromIP;
};

int main(){
    PortScanEvent e;
    std::cout << e.getDescription() << std::endl;
}