-- phpMyAdmin SQL Dump
-- version 5.0.1
-- https://www.phpmyadmin.net/
--
-- Host: localhost
-- Generation Time: Mar 17, 2020 at 03:36 PM
-- Server version: 8.0.19
-- PHP Version: 7.1.23

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET AUTOCOMMIT = 0;
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `mytest_database`
--

-- --------------------------------------------------------

--
-- Table structure for table `HoaDon`
--

CREATE TABLE `HoaDon` (
  `maHoaDon` int NOT NULL COMMENT 'Mã hoá đơn khoá chính',
  `ngayMuaHang` date NOT NULL COMMENT 'Ngày mua hàng',
  `maKhachHang` tinytext NOT NULL COMMENT 'Mã khách hàng khoá ngoại',
  `trangThai` tinytext NOT NULL COMMENT 'Trạng thái của đơn hàng đ thanh toán chưa thanh toán …)'
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- Dumping data for table `HoaDon`
--

INSERT INTO `HoaDon` (`maHoaDon`, `ngayMuaHang`, `maKhachHang`, `trangThai`) VALUES
(101, '2019-12-31', '01', 'pending'),
(102, '2019-12-31', '01', 'pending'),
(103, '2019-12-31', '01', 'done'),
(104, '2019-12-31', '01', 'done'),
(105, '2019-12-31', '01', 'pending');

-- --------------------------------------------------------

--
-- Table structure for table `HoaDonChiTiet`
--

CREATE TABLE `HoaDonChiTiet` (
  `maHoaDon` int NOT NULL COMMENT 'Mã hoá đơn khoá ngoại',
  `maSanPham` int NOT NULL COMMENT 'Mã sản phẩm trong đơn hàng khoá ngoại',
  `soLuong` int NOT NULL COMMENT 'Số lượng mua',
  `maHoaDonChiTiet` int NOT NULL COMMENT 'Mã hoá đơn chi tiết khoá chính, tự sinh'
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- Dumping data for table `HoaDonChiTiet`
--

INSERT INTO `HoaDonChiTiet` (`maHoaDon`, `maSanPham`, `soLuong`, `maHoaDonChiTiet`) VALUES
(101, 101, 3, 101),
(102, 101, 3, 102),
(103, 101, 3, 103),
(104, 101, 3, 104),
(105, 101, 3, 105);

-- --------------------------------------------------------

--
-- Table structure for table `KhachHang`
--

CREATE TABLE `KhachHang` (
  `maKhachHang` int NOT NULL COMMENT 'Mã khách hàng khoá chính',
  `hoVaTenLot` tinytext NOT NULL COMMENT 'Họ và tên lót khách hàng',
  `Ten` tinytext NOT NULL COMMENT 'Tên Khách hàng',
  `diaChi` text NOT NULL COMMENT 'Địa chỉ khách hàng',
  `Email` tinytext NOT NULL COMMENT 'Email khách hàng',
  `dienThoai` tinytext NOT NULL COMMENT 'Số điện thoại của khách hàng'
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- Dumping data for table `KhachHang`
--

INSERT INTO `KhachHang` (`maKhachHang`, `hoVaTenLot`, `Ten`, `diaChi`, `Email`, `dienThoai`) VALUES
(2, 'pham dong ', 'truong', 'viet nam', 'truong@gmail.com', '0901989847'),
(3, 'pham dong ', 'g', 'vietnam', 'abc@gmail.com', '012313425'),
(4, 'pham dong ', 'g', 'vietnam', 'abc@gmail.com', '012313425'),
(5, 'pham dong ', 'g', 'vietnam', 'abc@gmail.com', '012313425'),
(6, 'pham dong ', 'g', 'vietnam', 'abc@gmail.com', '012313425'),
(23, 'pham dong ', 'g', 'vietnam', 'abc@gmail.com', '012313425');

-- --------------------------------------------------------

--
-- Table structure for table `SanPham`
--

CREATE TABLE `SanPham` (
  `maSanPham` int NOT NULL COMMENT 'Mã sản phẩm khoá chính tự sinh',
  `moTa` text NOT NULL COMMENT 'Mô tả về sản phẩm',
  `soLuong` int NOT NULL COMMENT 'Số lương tồn kho >=0',
  `donGia` varchar(45) NOT NULL COMMENT 'Đơn giá sản phẩm >=0',
  `tenSP` tinytext NOT NULL COMMENT 'Tên sản phẩm'
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- Dumping data for table `SanPham`
--

INSERT INTO `SanPham` (`maSanPham`, `moTa`, `soLuong`, `donGia`, `tenSP`) VALUES
(101, 'milk vietnam', 1, '1000', 'milk'),
(102, 'break', 2, '3000', 'break'),
(103, 'osi', 2, '3000', 'break'),
(104, 'break', 2, '3000', 'break'),
(105, 'break', 2, '3000', 'break');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `HoaDon`
--
ALTER TABLE `HoaDon`
  ADD PRIMARY KEY (`maHoaDon`);

--
-- Indexes for table `HoaDonChiTiet`
--
ALTER TABLE `HoaDonChiTiet`
  ADD PRIMARY KEY (`maHoaDonChiTiet`);

--
-- Indexes for table `KhachHang`
--
ALTER TABLE `KhachHang`
  ADD PRIMARY KEY (`maKhachHang`),
  ADD UNIQUE KEY `maKhachHang_UNIQUE` (`maKhachHang`);

--
-- Indexes for table `SanPham`
--
ALTER TABLE `SanPham`
  ADD PRIMARY KEY (`maSanPham`),
  ADD UNIQUE KEY `maSanPham_UNIQUE` (`maSanPham`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `SanPham`
--
ALTER TABLE `SanPham`
  MODIFY `maSanPham` int NOT NULL AUTO_INCREMENT COMMENT 'Mã sản phẩm khoá chính tự sinh', AUTO_INCREMENT=106;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
