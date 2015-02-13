/* 
 * File:   IllegalStateException.h
 * Author: alex
 *
 * Created on 12. Februar 2015, 22:41
 */

#ifndef ILLEGALSTATEEXCEPTION_H
#define	ILLEGALSTATEEXCEPTION_H

#include "Exception.h"

class IllegalStateException : public Exception
{
public:
  IllegalStateException();
  IllegalStateException(char* message);
  IllegalStateException(const IllegalStateException& orig);
  virtual ~IllegalStateException();
private:

};

#endif	/* ILLEGALSTATEEXCEPTION_H */

