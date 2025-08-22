# C/C++ My learning
- [1.COMPILER](#1-COMPILER)

# 1. COMPILER
## 1.1 Preprocessor (tiền xử lý)
- Là một tính năng đặc trưng của ngôn ngữ C => dễ dàng phát triển chương trình hơn,...
- Chỉ thị tiền xử lý giúp chương trình hiệu quả hơn, nó chạy trước quá trình biên dịch và trước khi mã đối tượng hay file thực thi được tạo ra.
[![Screenshot-2025-04-02-121730.png](https://i.postimg.cc/MZCcLb2h/Screenshot-2025-04-02-121730.png)](https://postimg.cc/RqTV6t0R)
1. Từ khóa define: 
- Lệnh #define cho phép định nghĩa macro trong mã nguồn của bạn. Các định nghĩa macro này cho phép các giá trị không đổi được khai báo để sử dụng trong toàn bộ mã của bạn.
- Các định nghĩa macro không phải là biến và không thể được thay đổi bằng mã chương trình của bạn như các biến. Bạn thường sử dụng cú pháp này khi tạo các hằng số đại diện cho số, chuỗi hoặc biểu thức.
- NÊN định nghĩa macro ở đầu chương trình hoặc file header để dễ nhìn và quản lý.
- KHÔNG đặt ký tự dấu chấm phẩy ở cuối câu lệnh #define.
2. Từ khóa typedef 
- typedef là từ khóa cho phép người dùng thêm tên mới cho kiểu dữ liệu có sẵn.
- typedef được thực hiện bởi trình biên dịch (compiler) trong khi các câu lệnh #define được xử lý bởi bộ tiền xử lý (preprocessor).
- Cú pháp khai báo:
typedef data_type new_name
- Trong đó:
- typedef: Là một từ khóa.
- data_type: Là một kiểu dữ liệu trong ngôn ngữ C.
- new_name: Là tên mới mà bạn muốn đặt cho kiểu dữ liệu có sẵn muốn định nghĩa.

## 1.2 Câu lệnh #include
- Ví dụ trong câu lệnh có #include <stdio.h> nó sẽ trỏ đến file có tên như trong <> và chương trình đang viết sẽ cần các nội dụng trong file này để biên dịch. #include trỏ đến file kết thúc bằng ".h". Những file này là header file, nó thường đặt ở đầu file source code (là file có kết thúc là .c).
## 1.3 File Header files
- Là những file khai báo thông tin về một số hàm được cung cấp bởi file đó. 
- Nó thể hiện một số chức năng mà trình biên dịch cần hiểu trước khi nó xử lí. Ví dụ như file stdio.h sẽ chứa thông tin về hàm printf (là hàm dùng để hiển thị ra màn hình console). Trong file stdio.h có hàm printf và còn rất nhiều các hàm liên quan đến input/output khác nữa,  cho nên stdio là viết tắt của standard input output (thư viện input/output tiêu chuẩn).
- Ngoài thư viện tiêu chuẩn đi kèm với ngôn ngữ C có thể tự tạo file header để có thể tái sử dụng những chức năng trong chương trình của mình.
## 1.4 Cú pháp khi dùng #include
1. Cú pháp #include yêu cầu phải gõ đúng  tên file được viết hoa hay thường.
2. Có hai cách để thêm file vào câu lệnh include trong chương trình:
- Bạn có thể sử dụng dấu ngoặc nhọn, ví dụ như #include <Han.h>. Làm như vậy là bạn đang ra lệnh cho bộ tiền xử lý tìm kiếm file đó trong thư mục hệ thống. Thường thì nó là một thư viện tiêu chuẩn đi kèm với ngôn ngữ C.
- Bạn có thể sử dụng dấu ngoặc kép #include “iuh.h”. Điều này có nghĩa là một file tiêu đề được tạo ra bởi người dùng. Nó được tạo ra bởi một lập trình viên chứ không đi kèm với ngôn ngữ C.
3. Mọi trình biên dịch C tuân thủ tiêu chuẩn của C11 đều có tập các file tiêu đề tiêu chuẩn đi kèm.
4. Một số chỉ thị tiền xử lý cũng được sử dụng phổ biến như là #ifndef và #define dùng để tránh việc bạn khai báo 1 thư viện nào quá 1 lần trong chương trình  vì như thế bộ tiền xử lý sẽ thực hiện những thao tác không cần thiết.
5. Header file còn có thể bao gồm nhiều thứ khác nhau như directive (chỉ thị), constant (hằng) hoặc khai báo cấu trúc (structure). Bạn có thể xem hình ảnh của 1 file header như thế này nhé:

[![Screenshot-2025-04-02-120258.png](https://i.postimg.cc/HLg9C1G1/Screenshot-2025-04-02-120258.png)](https://postimg.cc/pmsFD7Xs)

6. Source code để thực thi thường ở trong file source code (file có phần mở rộng là .c) và không nằm trong file header. Cũng có trường hợp ngoại lệ khi bạn muốn thực hiện mọi thứ hiệu quả hơn bạn có thể cho mã nguồn vào tệp tiêu đề. Nhưng thông thường tệp tiêu đề sẽ không chứa mã thực thi mà chứa các dòng lệnh dành cho mục đích khai báo. 
##