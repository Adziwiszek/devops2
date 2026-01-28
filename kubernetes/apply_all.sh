#!/bin/bash
# simple script to start jenkins on kubernetes
minikube start
eval $(minikube -p minikube docker-env)
kubectl create namespace devops-tools
docker build -t jenkins-cpp-agent:latest .
kubectl apply -f jenkins-01-serviceAccount.yml
kubectl apply -f jenkins-02-volume.yml
kubectl apply -f jenkins-03-deployment.yml
kubectl apply -f jenkins-04-service.yml
