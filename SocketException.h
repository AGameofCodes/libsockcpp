/* 
 * File:   SocketException.h
 * Author: alex
 *
 * Created on 12. Februar 2015, 22:57
 */

#ifndef SOCKETEXCEPTION_H
#define	SOCKETEXCEPTION_H

#include "Exception.h"

namespace libsockcpp
{

  class SocketException : public Exception
  {
  public:
    SocketException();
    SocketException(char *message);
    SocketException(const SocketException& orig);
    virtual ~SocketException();
  private:

  };
}

#endif	/* SOCKETEXCEPTION_H */

