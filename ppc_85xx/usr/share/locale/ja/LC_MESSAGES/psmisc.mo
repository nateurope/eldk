��    5      �  G   l      �  $   �  �  �  *   �  o   �  p   /     �     �  )   �  	   �     	      $	  ,   E	  $   r	     �	  #   �	     �	      �	     
     ,
  #   K
  !   o
     �
     �
     �
  <   �
       *   :     e     |     �     �     �  &   �          1     F  �   ]     @     W     h  �  �  H   S  (   �  �   �  �  �  -   ^  F   �  8   �  -        :     M     a  z  �  &   �  !  "  5   D  �   z  �   
  ,   �  '   �  ;   �     $     +  !   ?  3   a  (   �     �  0   �       #   '      K  "   l  )   �  '   �     �      �  )     <   E  #   �  .   �     �     �  "      &   (      O   "   j      �      �      �   �   �      �!     �!     �!  �  �!  O   �&  -   �&    '  �  $(  L   �*  0   7+  .   h+  2   �+     �+     �+     �+     	          
   3       "                 +      (   4          #           &      %      .   $   *             )                                 '   /         !   ,                       -                        5   2                0              1    
%*s USER        PID ACCESS COMMAND
        killall -l, --list
       killall -V, --version

  -e,--exact          require exact match for very long names
  -I,--ignore-case    case insensitive process name match
  -g,--process-group  kill process group instead of process
  -i,--interactive    ask for confirmation before killing
  -l,--list           list all known signal names
  -q,--quiet          don't print complaints
  -r,--regexp         interpret NAME as an extended regular expression
  -s,--signal SIGNAL  send this signal instead of SIGTERM
  -u,--user USER      kill only process(es) running as USER
  -v,--verbose        report if the signal was successfully sent
  -V,--version        display version information
  -w,--wait           wait for processes to die
     -Z     show SELinux security contexts
     PID    start at this PID; default is 1 (init)
    USER   show only trees rooted at processes of this user

   -Z,--context REGEXP kill only process(es) having context
                      (must precede other arguments)
 %s is empty (not mounted ?)
 %s: no process killed
 %s: unknown signal; %s -l lists signals.
 (unknown) Bad regular expression: %s
 Can't get terminal capabilities
 Cannot allocate memory for matched proc: %s
 Cannot find socket's device number.
 Cannot find user %s
 Cannot get UID from process status
 Cannot open /etc/mtab: %s
 Cannot open /proc directory: %s
 Cannot open /proc/net/unix: %s
 Cannot open a network socket.
 Cannot open protocol file "%s": %s
 Cannot resolve local port %s: %s
 Cannot stat %s: %s
 Cannot stat file %s: %s
 Cannot stat mount point %s: %s
 Copyright (C) 1993-2005 Werner Almesberger and Craig Small

 Could not kill process %d: %s
 Internal error: MAX_DEPTH not big enough.
 Invalid namespace name Kill %s(%s%d) ? (y/N)  Kill process %d ? (y/N)  Killed %s(%s%d) with signal %d
 Maximum number of names is %d
 Namespace option requires an argument. No process specification given No processes found.
 No such user name: %s
 PSmisc comes with ABSOLUTELY NO WARRANTY.
This is free software, and you are welcome to redistribute it under
the terms of the GNU General Public License.
For more information about these matters, see the files named COPYING.
 Press return to close
 TERM is not set
 Unknown local port AF %d
 Usage: fuser [ -a | -s | -c ] [ -n SPACE ] [ -SIGNAL ] [ -kimuv ] NAME...
             [ - ] [ -n SPACE ] [ -SIGNAL ] [ -kimuv ] NAME...
       fuser -l
       fuser -V
Show which processes use the named files, sockets, or filesystems.

    -a        display unused files too
    -c        mounted FS
    -f        silently ignored (for POSIX compatibility)
    -i        ask before killing (ignored without -k)
    -k        kill processes accessing the named file
    -l        list available signal names
    -m        show all processes using the named filesystems
    -n SPACE  search in this name space (file, udp, or tcp)
    -s        silent operation
    -SIGNAL   send this signal instead of SIGKILL
    -u        display user IDs
    -v        verbose output
    -V        display version information
    -4        search IPv4 sockets only
    -6        search IPv6 sockets only
    -         reset options

  udp/tcp names: [local_port][,[rmt_host][,[rmt_port]]]

 Usage: killall [-Z CONTEXT] [-u USER] [ -eIgiqrvw ] [ -SIGNAL ] NAME...
 Usage: killall [OPTION]... [--] NAME...
 Usage: pidof [ -eg ] NAME...
       pidof -V

    -e      require exact match for very long names;
            skip if the command line is unavailable
    -g      show process group ID instead of process ID
    -V      display version information

 Usage: pstree [ -a ] [ -c ] [ -h | -H PID ] [ -l ] [ -n ] [ -p ] [ -u ]
              [ -A | -G | -U ] [ PID | USER ]
       pstree -V
Display a tree of processes.

    -a     show command line arguments
    -A     use ASCII line drawing characters
    -c     don't compact identical subtrees
    -h     highlight current process and its ancestors
    -H PID highlight this process and its ancestors
    -G     use VT100 line drawing characters
    -l     don't truncate long lines
    -n     sort output by PID
    -p     show PIDs; implies -c
    -u     show uid transitions
    -U     use UTF-8 (Unicode) line drawing characters
    -V     display version information
 You can only use files with mountpoint option You cannot search for only IPv4 and only IPv6 sockets at the same time You cannot use the mounted and mountpoint flags together all option cannot be used with silent option. fuser (PSmisc) %s
 pstree (PSmisc) %s
 skipping partial match %s(%d)
 Project-Id-Version: psmisc 22.2pre1
Report-Msgid-Bugs-To: csmall@small.dropbear.id.au
POT-Creation-Date: 2006-08-09 21:28+1000
PO-Revision-Date: 2006-03-20 10:31+0900
Last-Translator: GOTO Masanori <gotom@debian.or.jp>
Language-Team: Japanese <translation-team-ja@lists.sourceforge.net>
MIME-Version: 1.0
Content-Type: text/plain; charset=EUC-JP
Content-Transfer-Encoding: 8bit
 
%*s �桼��     PID �������� ���ޥ��
        killall -l, --list
       killall -V, --version

  -e,--exact            �ȤƤ�Ĺ��̾�����Ф��ƴ������פ��׵᤹��
  -I,--ignore-case      �ץ�����̾�ΰ��פ���ʸ���ξ�ʸ�����̤ʤ��Ԥ�
  -g,--process-group    �ץ����������˥ץ��������롼�פ˥����ʥ������
  -i,--interactive      kill �������˳�ǧ�����
  -l,--list             ���ΤΥ����ʥ�̾�򤹤٤�ɽ������
  -q,--quiet            kill ����ץ��������ʤ�����ɽ����Ԥ�ʤ�
  -r,--regexp           ���ꤷ��̾�����ĥ����ɽ���Ȥ��Ʋ�᤹��
  -s,--signal �����ʥ�  SIGTERM�����˻��ꤷ�������ʥ������
  -u,--user �桼��      ���ꤷ���桼�������Ԥ���ץ������Τ�kill����
  -v,--verbose          �����ʥ��������������������𤹤�
  -V,--version          �С����������ɽ������
  -w,--wait             kill�����ץ���������λ����ޤ��Ԥ�
     -Z     SELinux�������ƥ�����ƥ����Ȥ�ɽ������
     PID      ���ꤷ��PID����ɽ�����Ϥ��ޤ�; �ǥե���Ȥ� 1 (init)
    �桼��̾ ���ꤷ���桼���Ȥ���ư���ץ�����������������ĥ꡼�Τ�ɽ��

   -Z,--context ����ɽ�� ����ƥ����Ȥ���ĥץ������Τ�kill����
                        (¾�ΰ����������˻��ꤵ��Ƥ��ʤ���Фʤ�ʤ�)
 %s �϶��ǥ��쥯�ȥ� (�ޥ���Ȥ���Ƥ��ʤ�?)
 %s: �ɤΥץ�������kill����ޤ���Ǥ���
 %s: ̤�ΤΥ����ʥ�; %s -l �ˤ�äƥ����ʥ�����ɽ�����ޤ�
 (����) ����������ɽ��: %s
 ü���ε�ǽ������Ǥ��ޤ���Ǥ���
 ���פ����ץ��������Ф�����꤬�����Ǥ��ޤ���: %s
 �����åȤΥǥХ����ֹ椬���Ĥ���ޤ���.
 �桼�� %s ��ȯ���Ǥ��ޤ���
 �ץ������θ��߾��֤���UID������Ǥ��ޤ���Ǥ���
 /etc/mtab �������ޤ���: %s
 /proc �ǥ��쥯�ȥ�򳫤��ޤ���: %s
 /proc/net/unix �������ޤ���: %s
 �ͥåȥ�������åȤ������ޤ���.
 �ץ��ȥ���ե����� "%s" �������ޤ���: %s
 ��������ݡ��� %s ����Ǥ��ޤ���: %s
 %s ��stat�Ǥ��ޤ���: %s
 �ե������stat�Ǥ��ޤ��� %s: %s
 �ޥ���ȥݥ���� %s ��stat�Ǥ��ޤ���: %s
 Copyright (C) 1993-2005 Werner Almesberger and Craig Small

 �ץ����� %d �� kill �Ǥ��ޤ���: %s
 �������顼: MAX_DEPTH ����ʬ�礭������ޤ���.
 ������̾������̾ %s(%s%d) ��kill���ޤ���? (y/N) �ץ����� %d ��kill���ޤ���? (y/N)  %s(%s%d) �򥷥��ʥ� %d ��kill���ޤ���
 ̾���κ�������ǽ���� %d
 ̾�����֥��ץ����ϰ�����ɬ�פǤ� ������Ϳ�����Ƥ��ޤ��� �ץ������ϸ��Ĥ���ޤ���Ǥ���
 ����桼��̾��¸�ߤ��ޤ���: %s
 PSmisc�ϴ�����̵�ݾڤǤ�
����ϥե꡼���եȥ������Ǥ���GNU���̸������ѵ��������ξ��˴�Ť���
�����ۤ�ͳ�˹ԤäƤ��ޤ��ޤ���
�����ˤĤ��Ƥ��ܺ٤ʾ����COPYING�ե����������������
 �꥿���󥭡��򲡤����Ĥ��ޤ�
 TERM�����ꤵ��Ƥ��ޤ���
 ̤�ΤΥ�������ݡ��� AF %d
 ����ˡ: fuser [ -a | -s | -c ] [ -n SPACE ] [ -�����ʥ� ] [ -kimuv ] ̾��...
              [ - ] [ -n SPACE ] [ -�����ʥ� ] [ -kimuv ] ̾��...
        fuser -l
        fuser -V
�ե�����̾�������åȡ��ե����륷���ƥ��ɤΥץ����������Ѥ��Ƥ��뤫��ɽ��

    -a        �ץ��������黲�Ȥ���Ƥ��ʤ��ե������ɽ���оݤȤ���
    -c        -m���ץ�����Ʊ�� (POSIX�ߴ����Τ��������¸��)
    -f        �Ĥ��Ƥ�̵�뤵��� (POSIX�ߴ����Τ��������¸��)
    -i        kill�������˳�ǧ����� (-k���ץ�����Ĥ��ʤ��Ȥ���̵�뤵���)
    -k        ���ꤷ���ե�����˥����������Ƥ���ץ�������kill����
    -l        ���Ѳ�ǽ�ʥ����ʥ�̾�򤹤٤�ɽ������
    -m        ����ե������Υե����륷���ƥ����Ѥ������ץ�������ɽ������
    -n SPACE  ̾�����֤Ȥ���SPACE(file, udp, �ޤ��� tcp �Τɤ줫)����ꤹ�� 
    -s        ɽ������������
    -�����ʥ� SIGKILL�����˻��ꤷ�������ʥ������
    -u        �桼��ID��ɽ������
    -v        ��Ĺɽ����Ԥ�
    -V        �С����������ɽ������
    -4        IPv4�����åȤΤ߸�������
    -6        IPv6�����åȤΤ߸�������
    -         �ꥻ�åȥ��ץ����

  udp/tcp ̾��: [��������ݡ���][,[��⡼�ȥۥ���][,[��⡼�ȥݡ���]]]

 ����ˡ: killall [-Z CONTEXT] [-u �桼����] [ -eIgiqrvw ] [ -�����ʥ� ] ̾��...
 ����ˡ: killall [���ץ����]... [--] ̾��...
 ����ˡ: pidof [ -eg ] �ץ�����̾...
        pidof -V

    -e      �ȤƤ�Ĺ���ץ�����̾���Ф��ƴ������פ��׵᤹��
            ���ޥ�ɥ饤�����ѤǤ��ʤ����ϳ����ץ������ϥ����åפ����
    -g      �ץ�����ID�����˥ץ��������롼��ID��ɽ������
    -V      �С����������ɽ������

 ����ˡ: pstree [ -a ] [ -c ] [ -h | -H PID ] [ -l ] [ -n ] [ -p ] [ -u ]
              [ -A | -G | -U ] [ PID | �桼��̾ ]
        pstree -V
�ץ������ĥ꡼��ɽ�����롣

    -a     ���ޥ�ɥ饤�������ɽ��
    -A     ASCII ʸ�������ɽ���˻���
    -c     Ʊ�����ƤΥ��֥ĥ꡼��ޤȤ��û��ɽ�����ʤ�
    -h     ���ߤΥץ������Ȥ������ĤΥץ�������Ĵɽ������
    -H PID ����ץ�����PID�Ȥ������ĤΥץ�������Ĵɽ������
    -G     VT100 ����ʸ����ɽ���˻���
    -l     Ĺ���Ԥ�ɽ������������Ǥ��ڤ�ޤ���
    -n     PID�ǥ����Ȥ���ɽ��
    -p     PID��ɽ��; -c���ץ�����Ĥ�����̤�ޤߤޤ�
    -u     UID�����ܾ�����ɽ������
    -U     UTF-8 (Unicode) ʸ�������ɽ���˻���
    -V     �С����������ɽ��
 �ޥ���ȥݥ���ȥ��ץ����(-m�ޤ���-c)�Ȱ��˻Ȥ���Τ�file̾�����֤ΤߤǤ� -4���ץ�����-6���ץ�����Ʊ���˻���Ǥ��ޤ��� -m���ץ�����-c���ץ�����Ʊ���ˤϻȤ��ޤ��� -a���ץ�����-s���ץ����Ȱ��ˤϻ��ѤǤ��ޤ��� fuser (PSmisc) %s
 pstree (PSmisc) %s
 ��ʬ���פ򥹥��å� %s(%d)
 