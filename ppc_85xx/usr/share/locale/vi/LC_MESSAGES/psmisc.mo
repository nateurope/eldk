��    5      �  G   l      �  $   �  �  �  *   �  o   �  p   /     �     �  )   �  	   �     	      $	  ,   E	  $   r	     �	  #   �	     �	      �	     
     ,
  #   K
  !   o
     �
     �
     �
  <   �
       *   :     e     |     �     �     �  &   �          1     F  �   ]     @     W     h  �  �  H   S  (   �  �   �  �  �  -   ^  F   �  8   �  -        :     M     a  �  �  1   C    u  ?   �  �   �  �   s       +   *  N   V     �  !   �  3   �  J     7   V  %   �  >   �  "   �  )      2   @   *   s   5   �   1   �   /   !  9   6!  =   p!  ?   �!  5   �!  G   $"  "   l"  ;   �"  C   �"  7   #     G#  7   c#  &   �#  "   �#  .   �#  �   $  %   %     9%  &   K%  X  r%  h   �*  ;   4+  =  p+  Z  �,  K   	0  ^   U0  i   �0  V   1     u1     �1  1   �1     	          
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
 Project-Id-Version: psmisc-22.2pre1
Report-Msgid-Bugs-To: csmall@small.dropbear.id.au
POT-Creation-Date: 2006-08-09 21:28+1000
PO-Revision-Date: 2006-03-08 19:06+1030
Last-Translator: Clytie Siddall <clytie@riverland.net.au>
Language-Team: Vietnamese <gnomevi-list@lists.sourceforge.net>
MIME-Version: 1.0
Content-Type: text/plain; charset=UTF-8
Content-Transfer-Encoding: 8bit
Plural-Forms: nplurals=1; plural=0
X-Generator: LocFactoryEditor 1.6b36
 
%*s NGƯỜI_DÙNG        PID TRUY CẬP LỆNH
        killall -l, --list 		(_liệt kê_)
       killall -V --version 		(_phiên bản_)

  -e,--exact          		cần đến điều khớp _chính xác_ với mọi tên rất dài
  -I,--ignore-case    	_bỏ qua _chữ hoa/thường_ khi khớp tên tiến trình
  -g,--process-group  	buộc kết thúc _nhóm tiến trình_ thay thế tiến trình
  -i,--interactive    		xin xác nhận trước khi buộc kết thúc (_tương tác_)
  -l,--list           		_liệt kê_ mọi tên tín hiệu đã biết
  -q,--quiet          		không hiển thị lời than phiền (_im_)
  -r,--regexp        		giải thích TÊN là _biểu thức chính quy_ nối dài
  -s,--signal TÍN_HIỆU		gởi tín hiệu này thay thế SIGTERM
  -u,--user NG_DÙNG      	buộc kết thúc chỉ những tiến trình đang chạy
							với tư cách _người dùng_ này
  -v,--verbose        	thông báo khi đã gởi tín hiệu
  -V,--version        	hiện thông tin _phiên bản_
  -w,--wait           		_đợi_ tiến trình kết thúc

     -Z     hiện các ngữ cảnh bảo mật kiểu SELinux
     PID    	bắt đầu tại PID này; mặc định là 1 (init)
    USER   hiện chỉ các cây có gốc là tiến trình của _người dùng_ này

   -Z,--context BIỂU_THỨC_CHÍNH _QUY
		buộc kết thúc chỉ những tiến trình có ngữ cảnh
			(phải đi trước các đối số khác)
 %s trống (lắp chưa?)
 %s: chưa buộc kết thúc tiến trình
 %s: không biết tín hiệu; lệnh « %s -l » liệt kê các tín hiệu
 (không biết) Biểu thức chính quy sai: %s
 Không thể gọi khả năng thiết bị cuối
 Không thể cấp phát bộ nhớ cho tiến trình được khớp: %s
 Không tìm thấy số hiệu thiết bị ổ cắm.
 Không tìm thấy người dùng %s
 Không thể lấy UID từ trạng thái của tiến trình
 Không thể mở </etc/mtab>: %s
 Không thể mở thư mục </proc>: %s
 Không thể mở thư mục </proc/net/unix>: %s
 Không thể mở một ổ cắm mạng.
 Không thể mở tập tin giao thức « %s »: %s
 Không tìm thấy tên cổng cục bộ %s: %s
 Không thể lấy các thông tin về %s: %s
 Không thể lấy các thông tin về tập tin %s: %s
 Không thể lấy các thông tin về điểm lắp %s: %s
 Bản quyền © 1993-2005 Werner Almesberger và Craig Small

 Không thể buộc kết thúc tiến trình %d: %s
 Lỗi nội bộ : « MAX_DEPTH » (độ sâu tối đa) chưa đủ.
 Tên miền tên không hợp lệ Có buộc kết thúc %s(%s%d) không? (y/n) (có/không)  Có buốc kết thúc tiến trình %d không? (y/N) (có/không)  Mới buộc kết thúc %s(%s%d) với tín hiệu %d
 Số tên tối đa là %d
 Tùy chọn miền tên cần đến một đối số. Chưa nhập đặc tả tiến trình Không tìm thấy tiến trình.
 Không có tên người dùng như vậy: %s
 PSmisc không bảo đảm gì cả.
Đây là phần mềm tự do thì bạn có thể phân phối nó với điều kiện của
Quyền Công Chung Gnu (GPL).
Để tìm thấy thông tin thêm thì hãy xem tập tin có tên COPYING (cách chép)
 Hãy bấm phím Return để đóng
 Chưa lặp TERM
 Không biết cổng cục bộ AF %d
 Cách sử dụng: fuser [ -a | -s | -c ] [ -n MIỀN ] [ -KÝ_HIỆU ] [ -kimuv ] TÊN...
             [ - ] [ -n MIỀN ] [ -KÝ_HIỆU ] [ -kimuv ] TÊN...
       fuser -l
       fuser -V
Hiển thị tiến trình nào có dùng những tập tin, ổ cắm
hay hệ thống tập tin có tên này.

    -a   	cũng hiện các tập tin không được dùng
    -c     	hệ thống tập tin đã lắp
    -f     	bị bỏ qua im (để tương thích với POSIX)
    -i     	hỏi trước khi buộc kết thúc
			(bị bỏ qua nếu không có tùy chọn « -k »)
    -k     	_buộc kết thúc_ các tiến trình đang truy cập tập tin tên này
    -l   	_liệt kê_ các tên ký hiệu sẵn sàng
    -m     	hiện các tiến trình đang dùng những hệ thống tập tin c
    -n MIỀN  	tìm kiếm trong miền _tên_ này (file, udp, hay tcp)
    -s        thao tác _im_ (không xuất chi tiết)
    -TÍN_HIỆU   	gởi tín hiệu này thay vào SIGKILL
    -u        hiện các ID của _người dùng_ (UID)
    -v        xuất _chi tiết_
    -V        hiện thông tin phiên bản
    -4        chỉ tìm kiếm ổ cắm kiểu IPv4
    -6        chỉ tìm kiếm ổ cắm kiểu IPv6
    -       	đặt lại các tùy chọn

  Các tên udp/tcp: [cổng_cục_bộ][,[máy_từ_xa][,[cổng_từ_xa]]]

 Cách sử dụng: killall [-Z NGỮ_CẢNH] [-u NGƯỜI_DÙNG] [ -eIgiqrvw ] [ -TÍN_HIỆU ] TÊN...
 Cách sử dụng: killall [ TÙY_CHỌN ]... [--] TÊN...
 Cách sử dụng: pidof [ -eg ] TÊN ...
       pidof -V

    -e      cần đến điều khớp _chính xác_ với mọi tên rất dài
	bỏ qua nếu không có dòng lệnh sẵn sàng
    -g      hiện ID của _nhóm_ tiến trình thay thế ID tiến trình
    -V      hiện thông tin _phiên bản_

 Cách sử dụng: pstree [ -a ] [ -c ] [ -h | -H PID ] [ -l ] [ -n ] [ -p ] [ -u ]
              [ -A | -G | -U ] [ PID | NGƯỜI_DÙNG]
       pstree -V

Hiện một cây tiến trình.

    -a     	hiện các _đối số_ dòng lệnh
    -A   	sử dụng các ký tự vẽ đờng kiểu _ASCII_
    -c     	không _gọn_ phụ cây trùng
    -h     	_nổi bật_ tiến trình hiện có và các tổ tiên của nó
    -H PID		_nổi bật_ tiến trình này và các tổ tiên của nó
     -G     	sử dụng các ký tự vẽ dòng kiểu VT100
    -l     	không chặt cụt _dòng dài_
    -n     	sắp xếp kết xuất theo PID
    -p     	hiện các PID; ngụ ý  tùy chọn « -c »
    -u	hiện các việc chuyển tiếp _UID
    -U	sử dụng các ký tự vẽ dòng UTF-8
    -V	hiện thông tin _phiên bản_
 Bạn có thể sử dụng chỉ tập tin với tùy chọn điểm lắp Không cho phép bạn tìm kiếm ổ cắm kiểu cả IPv4 lẫn IPv6 đều đồng thời Không cho phép bạn sử dụng cờ kiểu cả « được lắp » lẫn « điểm lắp » đều không cho phép bạn sử dụng chọn « tất cả » với tùy chọn « im ». fuser (PSmisc) %s
 pstree (PSmisc) %s
 đang bỏ qua điều khớp bộ phần %s(%d)
 