# Minitalk - a data exchange program using UNIX signals
## 5th project in my 42 cursus
The goal of this project to create a program that allows one-way communications between a server and clients using UNIX signals only, that is to say between 2 processes.
Through this project, I explored the notions of processes, UNIX signals and bit manipulation (for the correct sending and receiving of the full data exchanged).

---
<br/>

| Project Name | Minitalk |
| :-: | :-: |
| Description | Using unix signals to send messages between a server and a client |
| Technologies | <a href="#"><img alt="C" src="https://custom-icon-badges.demolab.com/badge/C-03599C.svg?logo=c-in-hexagon&logoColor=white&style=for-the-badge"></a> |
| Allowed utilities | write(), signal(), sigemptyset(), sigaddset(), sigaction(), kill(), getpid(), malloc(), free(), pause(), sleep(), usleep(), exit() |

## Usage

Download the project and compile it :
```
git clone https://github.com/GSantoine/minitalk.git
cd minitalk
make
```

First, launch the server :
```
./server
```

The server will print its PID so clients can send messages to him.
Launch the client program with the server PID and the message to send :
```
./client <SERVER_PID> <MSG_TO_SEND> 
```

And voila !
