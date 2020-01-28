E: 无法获得锁 /var/lib/dpkg/lock - open (11: Resource temporarily unavailable)
E: 无法锁定管理目录(/var/lib/dpkg/)，是否有其他进程正占用它？

解 决方法一：
#:ps -aux (列出进程，形式如)
root 5765 0.0 1.0 18204 15504 ? SN 04:02 0:00 apt-get -qq -d
找到最后一列以apt-get 开头的进程
#:sudo kill -9 该进程的PID

解决方法二：
#:sudo rm /var/cache/apt/archives/lock
#:sudo rm /var/lib/dpkg/lock


flask的安装使用
1. 安装pip
2.安装pipenv
3 pipenv install flask
4 在指定文件目录下 执行 flask run,进入 flask shell
