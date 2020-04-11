CREATE DATABASE QuanLyNhanSu
GO
USE QuanLyNhanSu
CREATE TABLE PhongBan(
maphong CHAR(5) PRIMARY KEY,
tenphong NVARCHAR(50) NOT NULL,
chucnang NVARCHAR(100))
CREATE TABLE NhanVien(
maNV CHAR(5) PRIMARY KEY,
hoTen NVARCHAR(50) NOT NULL,
ngayvaolam DATETIME,
luong FLOAT,
maphong CHAR(5) FOREIGN KEY REFERENCES PhongBan(maphong))
INSERT INTO dbo.PhongBan
        ( maphong, tenphong, chucnang )
VALUES  ( 'pd002', -- maphong - char(5)
          N'sản Xuất', -- tenphong - nvarchar(50)
          N'Sản Xuất Kinh tế'  -- chucnang - nvarchar(100)
          )
		  
		  INSERT INTO dbo.PhongBan
		          ( maphong, tenphong, chucnang )
		  VALUES  ( 'pd003', -- maphong - char(5)
		            N'kế Toán', -- tenphong - nvarchar(50)
		            N'Kế toán kinh doanh'  -- chucnang - nvarchar(100)
		            )
					INSERT INTO dbo.PhongBan
					        ( maphong, tenphong, chucnang )
					VALUES  ( 'pd001', -- maphong - char(5)
					          N'Quản Trị', -- tenphong - nvarchar(50)
					          N'Quản trị kinh doanh'  -- chucnang - nvarchar(100)
					          )
							  INSERT INTO dbo.NhanVien
							          ( maNV ,
							            hoTen ,
							            ngayvaolam ,
							            luong ,
							            maphong
							          )
							  VALUES  ( 'pt001' , -- maNV - char(5)
							            N'Phạm Quốc Trọng' , -- hoTen - nvarchar(50)
							            02022007 , -- ngayvaolam - datetime
							            450000 , -- luong - float
							            'pd001'  -- maphong - char(5)
							          )
									  INSERT dbo.NhanVien
									          ( maNV ,
									            hoTen ,
									            ngayvaolam ,
									            luong ,
									            maphong
									          )
									  VALUES  ( 'pt002' , -- maNV - char(5)
									            N'Nguyễn Hữu Thực' , -- hoTen - nvarchar(50)
									            02032010 , -- ngayvaolam - datetime
									           5000000 , -- luong - float
									            'pd002'  -- maphong - char(5)
									          )
											  INSERT dbo.NhanVien
											          ( maNV ,
											            hoTen ,
											            ngayvaolam ,
											            luong ,
											            maphong
											          )
											  VALUES  ( 'pt003' , -- maNV - char(5)
											            N'A Mai Ly' , -- hoTen - nvarchar(50)
											            02022017 , -- ngayvaolam - datetime
											            5000000 , -- luong - float
											            'pd0003'  -- maphong - char(5)
											          )
													 -- 3.	Liệt kê các nhân viên có ngày vào làm từ 1-1-2016
													  SELECT*FROM dbo.NhanVien
													  WHERE ngayvaolam >01-01-2016
													  --4.	Liệt kê các nhân viên(họ tên, ngày vào làm, lương) thuộc phòng kế toán
													  SELECT NhanVien.hoTen,NhanVien.ngayvaolam, NhanVien.luong FROM dbo.NhanVien,dbo.PhongBan
													  WHERE  tenphong=N'kế Toán'
													  --5.	Hiển thị tên nhân viên có lương nằm trong khoảng 1000$ đến 2000$ ( e làm từ 8 triệu đến 20 triệu vì e khai báo tiền triệu)
													  SELECT hoTen FROM dbo.NhanVien
													  WHERE luong<20000000 AND luong >8000000
													  --6.	Hiển thị tên nhân viên, lương, tênphong, chức năng từ 2 bảng PhongBan và NhanVien
													  SELECT hoTen, luong, tenphong, chucnang FROM dbo.NhanVien,dbo.PhongBan
													  WHERE NhanVien.maphong=PhongBan.maphong
													  --7.	Hiển thị mức lương cao nhất của mỗi phòng ban
													  SELECT tenphong , MAX(luong) AS 'Mức lương cao nhất' FROM dbo.NhanVien, dbo.PhongBan
													  GROUP BY tenphong 
													  --8.	Tăng lương cho các nhân viên lên 10%
													  UPDATE dbo.NhanVien
													  SET luong=luong*0.1
													  --9.	Xoá nhân viên có ngày vào làm trước ngày 31-12-1990
													  DELETE FROM dbo.NhanVien 
													  WHERE ngayvaolam < 12-31-1990

													  