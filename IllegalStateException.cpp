/* 
 * File:   IllegalStateException.cpp
 * Author: alex
 * 
 * Created on 12. Februar 2015, 22:41
 */

#include "IllegalStateException.h"
using namespace libsockcpp;

IllegalStateException::IllegalStateException() : Exception()
{
}

IllegalStateException::IllegalStateException(char* message) : Exception(message)
{

}

IllegalStateException::IllegalStateException(const IllegalStateException& orig)
{
}

IllegalStateException::~IllegalStateException()
{
}
