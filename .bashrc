# .bashrc

#aliases
alias lt='ls -lrt'
alias ll='ls -l'
alias line='grep -rin'
alias cantfind='find . -iname'
alias cdrive='cd /Cdrive;ll'
alias games='cd /Cdrive/Games;ll'
alias home='cd /home/rlongley11;ll'

# Source global definitions
if [ -f /etc/bashrc ]; then
	. /etc/bashrc
fi

# User specific environment
if ! [[ "$PATH" =~ "$HOME/.local/bin:$HOME/bin:" ]]
then
    PATH="$HOME/.local/bin:$HOME/bin:$PATH"
fi
export PATH

# Prompt:
# user @ host : full_path
if [ "$color_prompt" = yes ]; then
    PS1='${debian_chroot:+($debian_chroot)}\[\033[01;32m\]\u \[\033[00m\]@ \[\033[01;34m\]\h\[\033[00m\] : ${PWD} \$ '
else
    PS1='${debian_chroot:+($debian_chroot)}\u @ \h : ${PWD} \$ '
fi

# Set the window title to the same as prompt
case "$TERM" in
    xterm*|rxvt*) PS1="\[\e]0;${debian_chroot:+($debian_chroot)}\u @ \h : ${PWD} \a\]$PS1" ;;
               *) ;;
esac

# Uncomment the following line if you don't like systemctl's auto-paging feature:
# export SYSTEMD_PAGER=

# User specific aliases and functions
if [ -d ~/.bashrc.d ]; then
	for rc in ~/.bashrc.d/*; do
		if [ -f "$rc" ]; then
			. "$rc"
		fi
	done
fi

unset rc