#include "Graph.h"

#include <string>
#include <sstream>
#include <iomanip>

std::string Graph::toString() const
{
    std::stringstream s;
    s << "Einfügepunkt: " << m_origin.toString();
    return s.str();
}


