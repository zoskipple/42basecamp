#!/bin/sh
git status --ignored -s | grep '!!' | sed -r 's/!! (\.\.\/)?//'