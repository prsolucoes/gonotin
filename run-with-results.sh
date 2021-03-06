#! /bin/bash

################################################################################

echo ""

################################################################################

echo "> Removing old results..."
rm -rf RESULTS.md

################################################################################

echo "> Executing main script..."

MARKDOWN_CODE='```'

echo "$MARKDOWN_CODE" >> RESULTS.md
./run.sh $1  >> RESULTS.md
echo "$MARKDOWN_CODE" >> RESULTS.md

echo "> Finished!"
echo ""
