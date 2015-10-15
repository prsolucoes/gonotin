# gonotin (Go Not In)

This simple scripts compare file A and file B and shows line that NOT IN inside file B.

To execute the golang version:

    go run gonotin.go fileA.txt fileB.txt

or for better performance:

    go build gonotin.go
    ./gonotin fileA.txt fileB.txt

To execute the php version:

    php php-not-in.php fileA.txt fileB.txt

You can execute and send the output to a file, example:

    go run gonotin.go fileA.txt fileB.txt > result.txt

or for better performance:

    go build gonotin.go
    ./gonotin fileA.txt fileB.txt > result.txt

To execute sample file generator you can use:

    go run generate.go fileA.txt 100000 120000
    go run generate.go fileB.txt 100000 120000

> Syntax: go run generate.go [filename] [quantity of rows] [max random number]

# PHP Version 

You can run the same logic in PHP. To do it you need:

    cd php-version
    [generate two files, fileA and fileB, for example]
    php gonotion.php fileA.txt fileB.txt

# Python Version 

You can run the same logic in Python. To do it you need:

    cd python-version
    [generate two files, fileA and fileB, for example]
    python gonotion.py fileA.txt fileB.txt

* Thanks Gustavo Henrique 

# Author WebSite

> http://www.pcoutinho.com

# License

MIT
