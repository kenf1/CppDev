FROM ubuntu:23.04

RUN apt-get update && apt-get install -y \
    build-essential \
    curl \
    software-properties-common \
    libboost-all-dev

COPY . .