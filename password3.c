#!/bin/bash
# Simple Password Generator (hex)

echo "Welcome to simple password generator"
sleep 2

echo "Please enter the length of the password:"
read PASS_LENGTH

for p in $(seq 1 10); do
    openssl rand -hex 24 | cut -c1-$PASS_LENGTH
done