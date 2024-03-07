#!/bin/bash
while IFS= read -r line; do
    echo "$line" | awk '{print $1}'
done