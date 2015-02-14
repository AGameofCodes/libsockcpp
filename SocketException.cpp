/* 
 * File:   SocketException.cpp
 * Author: alex
 * 
 * Created on 12. Februar 2015, 22:57
 */

#include "SocketException.h"

using namespace libsockcpp;

SocketException::SocketException() : Exception()
{
}

SocketException::SocketException(char* message) : Exception(message)
{
}

SocketException::SocketException(const SocketException& orig)
{
}

SocketException::~SocketException()
{
}

