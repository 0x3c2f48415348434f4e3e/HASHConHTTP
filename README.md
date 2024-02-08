# HASHHTTP
Creating an HTTP server using the C programming language which will replicate the features of the NGINX web server
# TO DO
- [] Create server
- [] Create client
# Server
So what is a socket. Well, essentially, a socket is something that allows us to
communcate with the outside world.
For this application we are going to try and support both Linux and Windows (So
Cross-platform).
# Checking if a system is windows or Linux
To check if a system is windows or Linux, we have the macros:
1. #ifdef _WIN32
2. #ifdef linux
