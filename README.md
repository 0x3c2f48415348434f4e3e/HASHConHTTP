# HASHHTTP
Creating an HTTP server using the C programming language which will replicate the features of the NGINX web server
# TO DO
- [] Create server
- [] Create client
# Server
So what is a socket. Well, a socket is something 
(for the more technical individuals, a 'channel') that allows us to
communcate with processes within the same environment such as another program, or 
other process on a different network, i.e. another computer on a different network.
Think of a socket like a file, because within the linux environment, 
that is what a socket is. Just a file. So with a file, we
are able to open a file, read from a file and close a file, well that is what
essentially a socket does.
For this application we are going to try and support both Linux and Windows (So
Cross-platform). Not sure about MacOSX
# Checking if a system is windows or Linux
To check if a system is windows or Linux, we have the macros:
1. #ifdef _WIN32
   #endif

2. #ifdef linux
   #endif
