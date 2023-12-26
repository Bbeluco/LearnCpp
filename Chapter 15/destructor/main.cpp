#include <string>
#include <vector>
#include <iostream>

class NetworkData {
public:
    NetworkData(std::string_view ipAddr)
    : m_networkIpAddr{ipAddr}
    {}

    void setDataToSend(std::string data) {
        m_data.push_back(data);
    }

    void sendData() {
        std::cout << "You sent data to the server.\n";
    }

    ~NetworkData() { //This is a destructor. It will execute when the objs is destroyed in the memory
        sendData();
    }

private:
    std::string m_networkIpAddr{};
    std::vector<std::string> m_data{};
};

int main() {
    NetworkData n{"google.com"};
    {
        NetworkData n{"google.com"};
        n.setDataToSend("Hello!");
    }
    
    return 0;
}