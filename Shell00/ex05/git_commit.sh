#!/bin/sh

git log -n 5 | grep 'commit' | cut -d ' ' -f2
