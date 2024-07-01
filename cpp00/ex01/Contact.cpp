#include "Contact.hpp"

void Contact::setAttribute(int n, const std::string &tmp)
{
    if (n == 1)
        first_name = tmp;
    if (n == 2)
        last_name = tmp;
    if (n == 3)
        phone_number = tmp;
    if (n == 4)
        nickname = tmp;
    if (n == 5)
        secret = tmp;
}

std::string Contact::getAttribute(int n) const
{
    if (n == 1)
        return first_name;
    if (n == 2)
        return last_name;
    if (n == 3)
        return phone_number;
    if (n == 4)
        return nickname;
    if (n == 5)
        return secret;
    return "";
}
