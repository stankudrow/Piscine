#!/usr/bin/env bash

git ls-files -io --exclude-standard $(git rev-parse --show-toplevel)
