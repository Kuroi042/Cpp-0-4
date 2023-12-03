            #include "contact.hpp"
             void Contact::setName(std::string Newname)
                {
                    name = Newname;
                }
            void Contact::setLastname(std::string NewLastname)
            {
                lastname =  NewLastname;
            }
            void Contact::setNickname(std::string NewNickname)
            {
                nickname =  NewNickname;
            }
            void Contact::setNumber(std::string NewNumber)
            {
                number =  NewNumber;
            }
            void Contact::set_Secret(std::string NewSecret)
            {
                secret = NewSecret;
            }

std::string Contact::getName()
{
    return name;
}
std::string Contact::getLastname()
{
    return lastname;
}

std::string Contact::get_Secret()
{
    return  secret;
}
std::string Contact::getNumber()
{
    return nickname;
}
std::string Contact::getNickname()
{
    return number;
}

