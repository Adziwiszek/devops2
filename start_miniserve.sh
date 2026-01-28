#!/bin/bash
# start server for receiving files from jenkins
miniserve --port 8081 -u -o rename -- ../test
