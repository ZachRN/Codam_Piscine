ifconfig -a | grep "ether " | cut -d ":" -f 1-6 | sed 's/ether//'| xargs echo | tr ' ' "\n"
