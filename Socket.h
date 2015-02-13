/* 
 * File:   Socket.h
 * Author: alex
 *
 * Created on 12. Februar 2015, 16:38
 */

#ifndef SOCKET_H
#define	SOCKET_H

#include <string>

using std::string;

class Socket
{
public:
  Socket();
  Socket(int domain, int type, int protocol);
  virtual ~Socket();

  void bind(short port);
  void bind(int ip, short port);
  void listen();
  void listen(int backlog);
  Socket *accept();

  void connect(int ip, short port);
  void close();
  
  int read(char* buffer, int length);
  void write(char* msg, int length);
  void write(string s);
  void write(string s, int length);

  enum Status
  {
    UNINITIZIALIZED = 0,
    INITIZIALIZED = 1,
    CLOSED = 2,

    BOUND = 10,
    LISTENING = 11,

    CONNECTING = 20,
    CONNECTED = 21
  };

private:
  Socket(const Socket& orig);
  Socket(int sockfd, int domain, int type, int protocol, Status status, struct sockaddr_in *localEndPoint, struct sockaddr_in *remoteEndPoint);


  int sockfd;

  //for sock fd
  int domain;
  int type;
  int protocol;

  //
  Status status;

  struct sockaddr_in *localEndPoint;
  struct sockaddr_in *remoteEndPoint;

  void initSocket();
};

#endif	/* SOCKET_H */

