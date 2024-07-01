#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
{   
private:
    std::string first_name;
    std::string last_name;
    std::string phone_number;
    std::string nickname;
    std::string secret;
public:
    Contact(){};
    ~Contact(){};
    std::string getAttribute(int num) const;
    void setAttribute(int n, const std::string &tmp);
};

#endif
