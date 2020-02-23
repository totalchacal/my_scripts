# .bashrc

# Source global definitions
if [ -f /etc/bashrc ]; then
	. /etc/bashrc
fi

# Uncomment the following line if you don't like systemctl's auto-paging feature:
# export SYSTEMD_PAGER=

# User specific aliases and functions
export PATH=$PATH:/home/totalchacal/my_scripts
export GIT_EDITOR="emacs -nw"
export PS1="Gid_Gud:\w>"

test -s ~/.alias && . ~/.allias || true

### C graphical Programming Environement Variable
export LIBRARY_Path=$LD_LIBRARY_PATH:/home/totalchacal/.c_graph_prog/lib
export CPATH=$CPATCH:/home/totalchacal/.c_graph_prog/include
export CGP_INSTALL_DIR=/home/totalchacal/.c_graph_prog
alias norm='/home/totalchacal/norminette/norminette'
alias norm-update=/home/totalchacal/norminette/update.sh
alias norm-debug=/home/totalchacal/norminette/debug.sh
alias norm=/home/totalchacal/norminette/norminette
alias norm-update=/home/totalchacal/norminette/update.sh
alias norm-debug=/home/totalchacal/norminette/debug.sh
