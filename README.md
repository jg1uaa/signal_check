# signal_check

## Description

a test code to receive signal

## Usage

```
# signal_check
```

simply wait for signal and quit, the results will be stored in syslog.


```
Mar 14 19:52:00 framboise signal_check: signal 15
Mar 14 19:52:22 framboise signal_check: signal 1
```

thanks to Jan Pedersen's [cpp-syslog](https://github.com/jp-embedded).

## Appendix

what signal will receive from init process when none received?

### OpenBSD

invoke from /etc/rc.local

```
Mar 14 20:01:50 ik1-342-31132 signal_check: signal 1
```
SIGHUP received, and this cannot prevent nohup.

### NetBSD

invoke from /etc/rc.local

```
Mar 14 20:30:45 netbsd-vm signal_check: signal 1
```
SIGHUP received, and this cannot prevent nohup.

### FreeBSD and DragonFlyBSD

not tested yet...
