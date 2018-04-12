# Homework1 for Laboratorio Ciberfisico - University of Verona

Author: Thomas Negrelli

Date: April 12, 2018

A. Y. 2017/2018

# Project description

The project is composed by three nodes.

Firstly, Handlerhw1.cpp prints the menu in witch the user selects the information:
- 'a' : all information
- 'n' : name
- 'e' : age
- 'c' : course

Secondly, Talkerhw1.cpp sends all informations to listenerhw.cpp.

Finaly, Listenerhw1.cpp listens the two nodes and it prints the information that was choosen.

In the folder 'msg' the user finds the file mex.msg in witch there is the struct of the messages.

# Executing

The user execs the project using the launch file.

User writs on his terminal:

roslaunch homework1 homework1.launch
