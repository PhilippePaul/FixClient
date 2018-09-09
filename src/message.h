#include "fixDefines.hpp"
#include <vector>

const std::string FIELD_DELIMITER = "^";

//Represents fields in FIX messages
class Field
{
public:
	std::string Serialize() const
	{
		return std::to_string(m_tag) + "=" + m_value;
	}

private:
	int m_tag;
	std::string m_value;
};

class Message
{
//Methods
public:
protected:
private:

//Fields
public:
protected:
	std::vector<Field> m_header;
	std::vector<Field> m_body;
	std::vector<Field> m_trailer;

private:
};
