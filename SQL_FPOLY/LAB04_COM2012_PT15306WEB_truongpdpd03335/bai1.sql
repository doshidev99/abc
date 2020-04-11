CREATE TABLE quanLiBDS;

USE quanlibds;

CREATE TABLE van_phong(
ma_vp nvarchar(50) not null,
place nvarchar(50) not null,
ma_nv nvarchar(50) not null,
ma_bds nvarchar(50) not null,
primary key (ma_vp)
);

CREATE TABLE nhanvien(
ten_nv nvarchar(50) not null,
ma_nv nvarchar(50) not null,
ngay_sinh date not null,
ma_vp nvarchar(50) not null,
ten_tn nvarchar(50) not null,
primary key(ten_nv),
foreign key(ma_vp) references van_phong(ma_vp)
);

CREATE TABLE thannhan(
ten_tn nvarchar(50) not null,
ngay_sinh date not null,
primary key(ten_tn)
);

CREATE TABLE chu_so_huu(
ma_csh nvarchar(50) not null,
ten nvarchar(50) not null,
dia_chi nvarchar(50) not null,
sdt nvarchar(50) not null,
primary key(ma_csh)
);

CREATE TABLE sanphambds(
ma_bds nvarchar(50) not null,
ten_bds nvarchar(50) not null,
ma_csh nvarchar(50) not null,
ma_vp nvarchar(50) not null,
primary key(ma_bds),
foreign key(ma_vp) references van_phong(ma_vp),
foreign key(ma_csh) references chu_so_huu(ma_csh)
);

CREATE TABLE chitiet_tn(
ten_tn nvarchar(50) not null,
ten_nv nvarchar(50) not null,
moi_quan_he nvarchar(50) not null,
primary key(ten_nv,ten_tn),
foreign key(ten_tn) references thannhan(ten_tn),
foreign key(ten_nv) references nhanvien(ten_nv)
);

CREATE TABLE truong_phong(
ten_tp nvarchar(50) not null,
ma_tp nvarchar(50) not null,
ma_vp nvarchar(50) not null,
foreign key(ma_vp) references van_phong(ma_vp)      
);


