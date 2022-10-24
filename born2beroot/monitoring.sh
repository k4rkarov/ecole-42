arch=$(uname -a)
pid=$(grep "physical id" /proc/cpuinfo | sort | uniq |wc -l)
mems=$(free --mega | grep Mem | awk '{print $3"/"$7}')
pct=$(free --mega | grep Mem | awk '{printf"%.2f", $3/$7*100}')
mems2=$(df --total -Bm | grep "total" | awk '{print $3"b"}')
mems3=$(df --total -Bg | grep "total" | awk '{print "/"$4"b","("$5")"}')
cpul=$(top -bn1 | grep "Cpu(s)" | cut -d, -f4 | awk '{printf"%.1f", 100-$1}')
lastb=$(who -b | awk '{print($3 " " $4)}')
luse=$(if [ $(lsblk | grep lvm | wc -l) -eq 0 ]; then echo no; else echo yes; fi)
tcpc=$(ss -t | grep ESTAB | wc -l)
ulog=$(who | wc -l)
ip=$(hostname -I)
mac=$(ip link show | grep link/ether | awk '{print $2}')
nsudo=$(sudo grep -a 'sudo' /var/log/auth.log | wc -l)

echo "
        #Architecture: $arch
        #CPU physical : $pid
        #Memory Usage : $mems ($pct%)
        #Disk Usage : $mems2$mems3
        #CPU load : $cpul%
        #Last boot : $lastb
        #LVM use: $luse
        #Connection TCP : $tcpc
        #User log: $ulog
        #Network: IP $ip ($mac)
        #Sudo : $nsudo cmd
"
