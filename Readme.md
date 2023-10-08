

1. **YÊU CẦU CHUNG**

Dự án yêu cầu cài đặt các ứng dụng sau:

- Bộ ứng dụng lập trình giao diện Qt (các phiên bản 6.x.x).
- Trình biên dịch MinGW cho C/C++.



1. **HƯỚNG DẪN CÁCH CÀI ĐẶT PHẦN MỀM QT**

**Bước 1:** Truy cập trang <https://www.qt.io/download> để tải phần mềm Qt. Tìm xuống phần cuối cùng của trang “Download Qt for open source use” như hình 2.

Hình 1

Hình 2

**Bước 2:** Chạy Qt để ra màn hình cài đặt. Nếu bạn chưa có tài khoản thì nhấn vào Sign up để đăng ký bằng email.

Hình 3

**Bước 3:** Nhấn Next để sang bước tiếp theo, hệ thống sẽ tự động tải các dữ liệu để chọn cài đặt như hình 5, có thể chọn Custom để tùy chọn, hoặc cũng có thể chọn Qt 6.2 for Desktop Development nhưng sẽ nặng hơn, và sau đó nhắn Next để sang bước tiếp theo. Nhưng trước bước này sẽ hiện 1 màn hình đề xuất dành cho nhà phát triển, có thể nhấn Disabled… để bỏ qua bước này.
**Bước 4:** Màn hình tùy chọn xuất hiện. Để tối ưu về dung lượng, chỉ cần chọn Option “MinGW 11.2.0  64bit” như hình 6. Sau đó nhấn Next để cài đặt hệ thống. Thời gian chờ sẽ phụ thuộc vào máy và internet.

**Bước 5:** Sau khi hoàn tất quá trình cài đặt, khởi chạy Qt Creator sẽ được màn hình như hình 7.

Các bước cài đặt ứng dụng Qt để lập trình giao diện đã xong. Phần 3 sẽ hướng dẫn chạy dự án của nhóm.

1. **HƯỚNG DẪN CÁCH CHẠY CHƯƠNG TRÌNH**

**Bước 1**: Giải nén file sourcecode.rar sau khi tải về. Kết quả thu được như hình.

**Bước 2**: Mở thư mục sourcefile và smarthome, sau đó tìm đến file smarthome.pro.

**Bước 3**: Chọn chuột phải vào file smarthome.pro ở trên và chọn Open with Qt Creator (hoặc có thể click double nếu đã chọn mở file mặc định với Qt Creator).

**Bước 4**: Sẽ có thông báo hiển thị chưa cài đặt cho project này.

Nhấn chọn OK và xuất hiện màn hình cài đặt xuất hiện (Trường hợp nếu máy bạn không hiển thị hoặc nhỡ nhấn Close, bạn chỉ cần nhấn vào ký hiệu Project ở thanh công cụ bên trái để hiển thị màn hình cài đặt).

**Bước 5**: Chọn bộ kit để Build & Run cho project này. Nếu máy bạn chỉ có 01 bộ kit như máy mình thì sẽ được chọn tự động. Chọn vào nút Configure Project để lưu lại và thoát.

**Bước 6**: Mở thư mục Smarthome và Sources, tìm đến file mainwindow.cpp và click double để mở file này.

**Bước 7:** Copy các đường dẫn từ thư mục image và txtfile để tiến hành đổi đường dẫn trong filecode

**Lưu ý:** Copy từng file ảnh hoặc txt ở thư mục gốc rồi thực hiện dán địa chỉ của ảnh hoặc txt tương ứng ở các vị trí được comment //change path trong code. Các dấu / trong địa chỉ path của từng hệ điều hành có thể khác nhau nên mình phải chú ý đổi các dấu này sang / tương ứng với địa chỉ path trong code.

**Bước 8**: Đổi đường dẫn các file ảnh sử dụng trong dự án thành đường dẫn cụ thể mà bạn lưu dự án này (trong code có comment “change path” tại các vị trí cần chỉnh sửa đường dẫn). Ví dụ, mình lưu vào vị trí Documents thì đường dẫn sẽ là: “C:/Users/SinhNguyen/Documents/Sourcefile/Smarthome/…”

**Bước 9**: Cuối cùng chọn vào ký hiệu Run trên thanh công cụ ở góc dưới bên trái màn hình (hoặc có thể nhấn tổ hợp phím Ctrl + R) để chạy chương trình.





