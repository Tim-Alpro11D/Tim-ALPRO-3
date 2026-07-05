#include <iostream>
#include <string>
using namespace std;

class Register {
private:
    string nama;
    string username;
    string password;
    string email;
    string noHP;
    string alamat;

public:

    Register() {
        nama = "";
        username = "";
        password = "";
        email = "";
        noHP = "";
        alamat = "";
    }

    void inputRegister() {

        cin.ignore();

        cout << "\n========== REGISTER ==========\n";

        do{
            cout << "Nama Lengkap : ";
            getline(cin,nama);
        }while(nama=="");

        do{
            cout << "Username     : ";
            getline(cin,username);
        }while(username=="");

        do{
            cout << "Password     : ";
            getline(cin,password);
        }while(password=="");

        do{
            cout << "Email        : ";
            getline(cin,email);
        }while(email=="");

        do{
            cout << "No HP        : ";
            getline(cin,noHP);
        }while(noHP=="");

        do{
            cout << "Alamat       : ";
            getline(cin,alamat);
        }while(alamat=="");

        cout << "\nRegistrasi berhasil.\n";
    }

    void simpanData() {

        cout << "Data berhasil disimpan.\n";

    }

    void tampilData() {

        cout << "\n===== DATA REGISTER =====\n";

        cout << "Nama      : " << nama << endl;
        cout << "Username  : " << username << endl;
        cout << "Email     : " << email << endl;
        cout << "No HP     : " << noHP << endl;
        cout << "Alamat    : " << alamat << endl;

    }

    void editData() {

        cin.ignore();

        cout << "\n===== EDIT DATA REGISTER =====" << endl;

        cout << "Nama Baru      : ";
        getline(cin,nama);

        cout << "Username Baru  : ";
        getline(cin,username);

        cout << "Password Baru  : ";
        getline(cin,password);

        cout << "Email Baru     : ";
        getline(cin,email);

        cout << "No HP Baru     : ";
        getline(cin,noHP);

        cout << "Alamat Baru    : ";
        getline(cin,alamat);

        cout << "\nData berhasil diubah." << endl;

    }

    void hapusData() {

        nama = "";
        username = "";
        password = "";
        email = "";
        noHP = "";
        alamat = "";

        cout << "\nData register berhasil dihapus." << endl;

    }

    void cariUsername() {

        string cari;

        cin.ignore();

        cout << "\nMasukkan Username : ";
        getline(cin,cari);

        if(cari == username)
        {
            cout << "\nData ditemukan." << endl;
            tampilData();
        }
        else
        {
            cout << "\nUsername tidak ditemukan." << endl;
        }

    }

    void tampilProfil() {

        cout << "\n========== PROFIL ==========" << endl;

        cout << "Nama      : " << nama << endl;
        cout << "Username  : " << username << endl;
        cout << "Email     : " << email << endl;
        cout << "No HP     : " << noHP << endl;
        cout << "Alamat    : " << alamat << endl;

    }

    void resetRegister() {

        nama = "";
        username = "";
        password = "";
        email = "";
        noHP = "";
        alamat = "";

        cout << "\nData berhasil direset." << endl;

    }

    string getNama() {
        return nama;
    }

    string getUsername() {
        return username;
    }

    string getPassword() {
        return password;
    }

    string getEmail() {
        return email;
    }

    string getNoHP() {
        return noHP;
    }

    string getAlamat() {
        return alamat;
    }

};

class Login {
private:

    string usernameInput;
    string passwordInput;
    bool statusLogin;
    int kesempatanLogin;

public:

    Login() {

        usernameInput = "";
        passwordInput = "";
        statusLogin = false;
        kesempatanLogin = 3;

    }

    void inputLogin() {

        cin.ignore();

        cout << "\n========== LOGIN ==========\n";

        do
        {
            cout << "Username : ";
            getline(cin, usernameInput);

            if(usernameInput=="")
                cout<<"Username tidak boleh kosong.\n";

        }while(usernameInput=="");

        do
        {
            cout << "Password : ";
            getline(cin, passwordInput);

            if(passwordInput=="")
                cout<<"Password tidak boleh kosong.\n";

        }while(passwordInput=="");

    }

    void validasiLogin(Register reg) {

        if(usernameInput == reg.getUsername() &&
           passwordInput == reg.getPassword())
        {

            statusLogin = true;

            kesempatanLogin = 3;

        }
        else
        {

            statusLogin = false;

            kesempatanLogin--;

        }

    }

    void tampilStatus() {

        if(statusLogin)
        {

            cout << "\nLogin Berhasil." << endl;

        }
        else
        {

            cout << "\nUsername atau Password salah." << endl;
            cout << "Sisa kesempatan login : "
                 << kesempatanLogin << endl;

        }

    }

    void infoLogin() {

        cout << "\n===== INFORMASI LOGIN =====" << endl;

        cout << "Username : "
             << usernameInput << endl;

        if(statusLogin)
            cout << "Status   : Login" << endl;
        else
            cout << "Status   : Belum Login" << endl;

    }

    void logout() {

        usernameInput = "";
        passwordInput = "";

        statusLogin = false;

        cout << "\nLogout berhasil." << endl;

    }

    void resetLogin() {

        usernameInput = "";
        passwordInput = "";

        statusLogin = false;

        kesempatanLogin = 3;

        cout << "\nData login berhasil direset." << endl;

    }

    void gantiPassword() {

        string passBaru;

        if(statusLogin)
        {

            cout << "\nPassword Baru : ";
            getline(cin,passBaru);

            passwordInput = passBaru;

            cout << "Password login berhasil diubah." << endl;

        }
        else
        {

            cout << "Silakan login terlebih dahulu." << endl;

        }

    }

    void tampilDataLogin() {

        cout << "\n===== DATA LOGIN =====" << endl;

        cout << "Username : "
             << usernameInput << endl;

        cout << "Password : "
             << passwordInput << endl;

        cout << "Kesempatan Login : "
             << kesempatanLogin << endl;

    }

    string getUsernameLogin() {

        return usernameInput;

    }

    bool getStatusLogin() {

        return statusLogin;

    }

    int getKesempatanLogin() {

        return kesempatanLogin;

    }

};

class Admin {
private:

    string idAdmin;
    string namaAdmin;
    string username;
    string password;
    string jabatan;
    string noHP;
    string email;

public:

    Admin() {

        idAdmin = "";
        namaAdmin = "";
        username = "";
        password = "";
        jabatan = "";
        noHP = "";
        email = "";

    }

    void inputAdmin() {

        cin.ignore();

        cout << "\n======================================" << endl;
        cout << "         INPUT DATA ADMIN" << endl;
        cout << "======================================" << endl;

        do{
            cout << "ID Admin      : ";
            getline(cin,idAdmin);
        }while(idAdmin=="");

        do{
            cout << "Nama Admin    : ";
            getline(cin,namaAdmin);
        }while(namaAdmin=="");

        do{
            cout << "Username      : ";
            getline(cin,username);
        }while(username=="");

        do{
            cout << "Password      : ";
            getline(cin,password);
        }while(password=="");

        do{
            cout << "Jabatan       : ";
            getline(cin,jabatan);
        }while(jabatan=="");

        do{
            cout << "No HP         : ";
            getline(cin,noHP);
        }while(noHP=="");

        do{
            cout << "Email         : ";
            getline(cin,email);
        }while(email=="");

        cout << "\nData Admin berhasil disimpan." << endl;

    }

    void tampilAdmin() {

        cout << "\n======================================" << endl;
        cout << "           DATA ADMIN" << endl;
        cout << "======================================" << endl;

        cout << "ID Admin   : " << idAdmin << endl;
        cout << "Nama       : " << namaAdmin << endl;
        cout << "Username   : " << username << endl;
        cout << "Jabatan    : " << jabatan << endl;
        cout << "No HP      : " << noHP << endl;
        cout << "Email      : " << email << endl;

    }

    void editAdmin() {

        cin.ignore();

        cout << "\n========== EDIT DATA ADMIN ==========" << endl;

        cout << "Nama Admin Baru : ";
        getline(cin,namaAdmin);

        cout << "Username Baru   : ";
        getline(cin,username);

        cout << "Password Baru   : ";
        getline(cin,password);

        cout << "Jabatan Baru    : ";
        getline(cin,jabatan);

        cout << "No HP Baru      : ";
        getline(cin,noHP);

        cout << "Email Baru      : ";
        getline(cin,email);

        cout << "\nData admin berhasil diubah." << endl;

    }

    void cariAdmin() {

        string cari;

        cin.ignore();

        cout << "\nMasukkan ID Admin : ";
        getline(cin,cari);

        if(cari==idAdmin)
        {
            cout << "\nData Admin Ditemukan." << endl;
            tampilAdmin();
        }
        else
        {
            cout << "\nData Admin Tidak Ditemukan." << endl;
        }

    }

    void tampilProfilAdmin() {

        cout << "\n========== PROFIL ADMIN ==========" << endl;

        cout << "ID Admin : " << idAdmin << endl;
        cout << "Nama     : " << namaAdmin << endl;
        cout << "Jabatan  : " << jabatan << endl;
        cout << "No HP    : " << noHP << endl;
        cout << "Email    : " << email << endl;

    }

    void ubahJabatan() {

        cin.ignore();

        cout << "\nJabatan Baru : ";
        getline(cin,jabatan);

        cout << "Jabatan berhasil diubah." << endl;

    }

    void ubahPassword() {

        cin.ignore();

        cout << "\nPassword Baru : ";
        getline(cin,password);

        cout << "Password berhasil diubah." << endl;

    }

    void resetAdmin() {

        idAdmin = "";
        namaAdmin = "";
        username = "";
        password = "";
        jabatan = "";
        noHP = "";
        email = "";

        cout << "\nData admin berhasil dihapus." << endl;

    }

    string getIdAdmin() {

        return idAdmin;

    }

    string getNamaAdmin() {

        return namaAdmin;

    }

    string getUsername() {

        return username;

    }

    string getPassword() {

        return password;

    }

    string getJabatan() {

        return jabatan;

    }

    string getNoHP() {

        return noHP;

    }

    string getEmail() {

        return email;

    }

};

class Pelanggan {
private:

    string idPelanggan;
    string nama;
    string jenisKelamin;
    string alamat;
    string noHP;
    string email;

public:

    Pelanggan() {

        idPelanggan = "";
        nama = "";
        jenisKelamin = "";
        alamat = "";
        noHP = "";
        email = "";

    }

    void inputPelanggan() {

        cin.ignore();

        cout << "\n======================================" << endl;
        cout << "        INPUT DATA PELANGGAN" << endl;
        cout << "======================================" << endl;

        do{
            cout << "ID Pelanggan     : ";
            getline(cin,idPelanggan);
        }while(idPelanggan=="");

        do{
            cout << "Nama Pelanggan   : ";
            getline(cin,nama);
        }while(nama=="");

        do{
            cout << "Jenis Kelamin    : ";
            getline(cin,jenisKelamin);
        }while(jenisKelamin=="");

        do{
            cout << "Alamat           : ";
            getline(cin,alamat);
        }while(alamat=="");

        do{
            cout << "Nomor HP         : ";
            getline(cin,noHP);
        }while(noHP=="");

        do{
            cout << "Email            : ";
            getline(cin,email);
        }while(email=="");

        cout << "\nData pelanggan berhasil disimpan." << endl;

    }

    void tampilPelanggan() {

        cout << "\n======================================" << endl;
        cout << "          DATA PELANGGAN" << endl;
        cout << "======================================" << endl;

        cout << "ID Pelanggan   : " << idPelanggan << endl;
        cout << "Nama           : " << nama << endl;
        cout << "Jenis Kelamin  : " << jenisKelamin << endl;
        cout << "Alamat         : " << alamat << endl;
        cout << "No HP          : " << noHP << endl;
        cout << "Email          : " << email << endl;

    }

    void editPelanggan() {

        cin.ignore();

        cout << "\n========== EDIT DATA PELANGGAN ==========" << endl;

        cout << "Nama Baru           : ";
        getline(cin,nama);

        cout << "Jenis Kelamin Baru  : ";
        getline(cin,jenisKelamin);

        cout << "Alamat Baru         : ";
        getline(cin,alamat);

        cout << "Nomor HP Baru       : ";
        getline(cin,noHP);

        cout << "Email Baru          : ";
        getline(cin,email);

        cout << "\nData pelanggan berhasil diubah." << endl;

    }

    void cariPelanggan() {

        string cari;

        cin.ignore();

        cout << "\nMasukkan ID Pelanggan : ";
        getline(cin,cari);

        if(cari==idPelanggan)
        {
            cout << "\nData pelanggan ditemukan.\n";
            tampilPelanggan();
        }
        else
        {
            cout << "\nData pelanggan tidak ditemukan.\n";
        }

    }

    void tampilProfil() {

        cout << "\n========== PROFIL PELANGGAN ==========" << endl;

        cout << "ID Pelanggan  : " << idPelanggan << endl;
        cout << "Nama          : " << nama << endl;
        cout << "Jenis Kelamin : " << jenisKelamin << endl;
        cout << "Alamat        : " << alamat << endl;
        cout << "No HP         : " << noHP << endl;
        cout << "Email         : " << email << endl;

    }

    void ubahNomorHP() {

        cin.ignore();

        cout << "\nNomor HP Baru : ";
        getline(cin,noHP);

        cout << "Nomor HP berhasil diubah." << endl;

    }

    void ubahEmail() {

        cin.ignore();

        cout << "\nEmail Baru : ";
        getline(cin,email);

        cout << "Email berhasil diubah." << endl;

    }

    void ubahAlamat() {

        cin.ignore();

        cout << "\nAlamat Baru : ";
        getline(cin,alamat);

        cout << "Alamat berhasil diubah." << endl;

    }

    string getIdPelanggan() {

        return idPelanggan;

    }

    string getNama() {

        return nama;

    }

    string getJenisKelamin() {

        return jenisKelamin;

    }

    string getAlamat() {

        return alamat;

    }

    string getNoHP() {

        return noHP;

    }

    string getEmail() {

        return email;

    }

    void setNama(string n) {

        nama = n;

    }

    void setAlamat(string a) {

        alamat = a;

    }

    void setNoHP(string hp) {

        noHP = hp;

    }

    void setEmail(string e) {

        email = e;

    }

    void resetPelanggan() {

        idPelanggan = "";
        nama = "";
        jenisKelamin = "";
        alamat = "";
        noHP = "";
        email = "";

        cout << "\nData pelanggan berhasil dihapus." << endl;

    }

};

class Produk {
private:

    string namaProduk[4];
    int hargaProduk[4];
    int stokProduk[4];
    int pilihan;

public:

    Produk() {

        namaProduk[0] = "Aqua";
        namaProduk[1] = "Le Minerale";
        namaProduk[2] = "Vit";
        namaProduk[3] = "Cleo";

        hargaProduk[0] = 20000;
        hargaProduk[1] = 22000;
        hargaProduk[2] = 19000;
        hargaProduk[3] = 21000;

        stokProduk[0] = 50;
        stokProduk[1] = 40;
        stokProduk[2] = 35;
        stokProduk[3] = 30;

        pilihan = 0;

    }

    void inputProduk() {

        cout << "\n======================================" << endl;
        cout << "         DAFTAR PRODUK" << endl;
        cout << "======================================" << endl;

        for(int i=0;i<4;i++)
        {
            cout << i+1 << ". "
                 << namaProduk[i]
                 << "\tRp " << hargaProduk[i]
                 << "\tStok : " << stokProduk[i]
                 << endl;
        }

        cout << "======================================" << endl;
        cout << "Pilih Produk : ";
        cin >> pilihan;

        while(pilihan < 1 || pilihan > 4)
        {
            cout << "Pilihan salah, pilih lagi : ";
            cin >> pilihan;
        }

    }

    void tampilProduk() {

        cout << "\n======================================" << endl;
        cout << "        PRODUK DIPILIH" << endl;
        cout << "======================================" << endl;

        cout << "Nama Produk : " << namaProduk[pilihan-1] << endl;
        cout << "Harga       : Rp " << hargaProduk[pilihan-1] << endl;
        cout << "Stok        : " << stokProduk[pilihan-1] << endl;

    }

    void tampilSemuaProduk() {

        cout << "\n========== DAFTAR PRODUK ==========\n";

        for(int i=0;i<4;i++)
        {
            cout << i+1 << ". "
                 << namaProduk[i]
                 << " | Harga : Rp "
                 << hargaProduk[i]
                 << " | Stok : "
                 << stokProduk[i]
                 << endl;
        }

    }

    void cariProduk() {

        string cari;

        cin.ignore();

        cout << "\nMasukkan nama produk : ";
        getline(cin,cari);

        bool ketemu = false;

        for(int i=0;i<4;i++)
        {
            if(cari == namaProduk[i])
            {
                cout << "\nProduk ditemukan.\n";
                cout << "Nama  : " << namaProduk[i] << endl;
                cout << "Harga : Rp " << hargaProduk[i] << endl;
                cout << "Stok  : " << stokProduk[i] << endl;

                ketemu = true;
            }
        }

        if(!ketemu)
        {
            cout << "Produk tidak ditemukan." << endl;
        }

    }

    void tambahStok(int jumlah) {

        stokProduk[pilihan-1] += jumlah;

        cout << "Stok berhasil ditambah." << endl;

    }

    void kurangiStok(int jumlah) {

        if(jumlah <= stokProduk[pilihan-1])
        {
            stokProduk[pilihan-1] -= jumlah;

            cout << "Stok berhasil dikurangi." << endl;
        }
        else
        {
            cout << "Stok tidak mencukupi." << endl;
        }

    }

    void cekStok() {

        cout << "\nStok "
             << namaProduk[pilihan-1]
             << " : "
             << stokProduk[pilihan-1]
             << endl;

    }

    void produkTermurah() {

        int indeks = 0;

        for(int i=1;i<4;i++)
        {
            if(hargaProduk[i] < hargaProduk[indeks])
                indeks = i;
        }

        cout << "\nProduk Termurah" << endl;
        cout << namaProduk[indeks]
             << " Rp "
             << hargaProduk[indeks]
             << endl;

    }

    void produkTermahal() {

        int indeks = 0;

        for(int i=1;i<4;i++)
        {
            if(hargaProduk[i] > hargaProduk[indeks])
                indeks = i;
        }

        cout << "\nProduk Termahal" << endl;
        cout << namaProduk[indeks]
             << " Rp "
             << hargaProduk[indeks]
             << endl;

    }

    void resetProduk() {

        pilihan = 0;

        cout << "Produk berhasil direset." << endl;

    }

    string getNamaProduk() {

        return namaProduk[pilihan-1];

    }

    int getHarga() {

        return hargaProduk[pilihan-1];

    }

    int getStok() {

        return stokProduk[pilihan-1];

    }

    int getPilihan() {

        return pilihan;

    }

};

class AirGalon {
private:

    string namaProduk;
    int harga;

    string ukuran;
    string jenis;
    int stok;

public:

    AirGalon() {

        namaProduk = "";
        harga = 0;

        ukuran = "19 Liter";
        jenis = "Isi Ulang";
        stok = 50;

    }

    void inputAirGalon(Produk produk) {

        namaProduk = produk.getNamaProduk();
        harga = produk.getHarga();
        stok = produk.getStok();

        cout << "\n======================================" << endl;
        cout << "        DETAIL AIR GALON" << endl;
        cout << "======================================" << endl;

        cout << "Merek   : " << namaProduk << endl;
        cout << "Ukuran  : " << ukuran << endl;
        cout << "Jenis   : " << jenis << endl;
        cout << "Harga   : Rp " << harga << endl;
        cout << "Stok    : " << stok << endl;

    }

    void tampilAirGalon() {

        cout << "\n========== INFORMASI AIR GALON ==========" << endl;

        cout << "Nama Produk : " << namaProduk << endl;
        cout << "Ukuran      : " << ukuran << endl;
        cout << "Jenis       : " << jenis << endl;
        cout << "Harga       : Rp " << harga << endl;
        cout << "Stok        : " << stok << endl;

    }

    void tambahStok(int jumlah) {

        stok += jumlah;

        cout << "Stok berhasil ditambah." << endl;

    }

    void kurangiStok(int jumlah) {

        if(jumlah <= stok)
        {

            stok -= jumlah;

            cout << "Stok berhasil dikurangi." << endl;

        }
        else
        {

            cout << "Stok tidak mencukupi." << endl;

        }

    }

    void cekStok() {

        cout << "\nStok tersedia : "
             << stok
             << " galon"
             << endl;

    }

    void ubahUkuran() {

        cin.ignore();

        cout << "\nUkuran Baru : ";
        getline(cin,ukuran);

        cout << "Ukuran berhasil diubah." << endl;

    }

    void ubahJenis() {

        cin.ignore();

        cout << "\nJenis Baru : ";
        getline(cin,jenis);

        cout << "Jenis berhasil diubah." << endl;

    }

    void tampilSpesifikasi() {

        cout << "\n========== SPESIFIKASI ==========" << endl;

        cout << "Nama Produk : " << namaProduk << endl;
        cout << "Ukuran      : " << ukuran << endl;
        cout << "Jenis       : " << jenis << endl;
        cout << "Harga       : Rp " << harga << endl;
        cout << "Stok        : " << stok << endl;

    }

    void resetAirGalon() {

        namaProduk = "";
        harga = 0;

        ukuran = "19 Liter";
        jenis = "Isi Ulang";
        stok = 50;

        cout << "\nData Air Galon berhasil direset." << endl;

    }

    string getNamaProduk() {

        return namaProduk;

    }

    int getHarga() {

        return harga;

    }

    string getUkuran() {

        return ukuran;

    }

    string getJenis() {

        return jenis;

    }

    int getStok() {

        return stok;

    }

};

class Pesanan {
private:

    string idPesanan;
    string tanggalPesanan;
    string metodePengiriman;
    string statusPesanan;
    string alamatTujuan;

    Pelanggan pelanggan;
    AirGalon produk;

    int jumlah;
    int ongkir;
    int totalHarga;
    int totalBayar;

public:

    Pesanan() {

        idPesanan = "";
        tanggalPesanan = "";
        metodePengiriman = "";
        statusPesanan = "Belum Diproses";
        alamatTujuan = "";

        jumlah = 0;
        ongkir = 0;
        totalHarga = 0;
        totalBayar = 0;

    }

    void setPelanggan(Pelanggan p) {

        pelanggan = p;

    }

    void setProduk(AirGalon p) {

        produk = p;

    }

    void hitungTotalHarga() {

        totalHarga = produk.getHarga() * jumlah;

        totalBayar = totalHarga + ongkir;

    }

    void inputPesanan(Pelanggan p, AirGalon a) {

        pelanggan = p;
        produk = a;
        alamatTujuan = pelanggan.getAlamat();

        cin.ignore();

        cout << "\n======================================" << endl;
        cout << "          INPUT PESANAN" << endl;
        cout << "======================================" << endl;

        cout << "ID Pesanan        : ";
        getline(cin,idPesanan);

        cout << "Tanggal Pesanan   : ";
        getline(cin,tanggalPesanan);

        cout << "Metode Pengiriman : ";
        getline(cin,metodePengiriman);

        cout << "Jumlah Galon      : ";
        cin >> jumlah;

        while(jumlah <= 0)
        {
            cout << "Jumlah harus lebih dari 0 : ";
            cin >> jumlah;
        }

        cout << "Ongkir            : ";
        cin >> ongkir;

        while(ongkir < 0)
        {
            cout << "Ongkir tidak boleh negatif : ";
            cin >> ongkir;
        }

        hitungTotalHarga();

    }

    void tampilPesanan() {

        cout << "\n======================================" << endl;
        cout << "          DATA PESANAN" << endl;
        cout << "======================================" << endl;

        cout << "ID Pesanan        : " << idPesanan << endl;
        cout << "Tanggal           : " << tanggalPesanan << endl;
        cout << "Nama Pelanggan    : " << pelanggan.getNama() << endl;
        cout << "Alamat Tujuan     : " << alamatTujuan << endl;
        cout << "Produk            : " << produk.getNamaProduk() << endl;
        cout << "Ukuran            : " << produk.getUkuran() << endl;
        cout << "Jenis             : " << produk.getJenis() << endl;
        cout << "Harga             : Rp " << produk.getHarga() << endl;
        cout << "Jumlah            : " << jumlah << endl;
        cout << "Total Harga       : Rp " << totalHarga << endl;
        cout << "Metode Kirim      : " << metodePengiriman << endl;
        cout << "Ongkir            : Rp " << ongkir << endl;
        cout << "Total Bayar       : Rp " << totalBayar << endl;
        cout << "Status Pesanan    : " << statusPesanan << endl;

    }

    void prosesPesanan() {

        statusPesanan = "Sedang Diproses";

    }

    void kirimPesanan() {

        statusPesanan = "Sedang Dikirim";

    }

    void selesaiPesanan() {

        statusPesanan = "Selesai";

    }

    void batalkanPesanan() {

        statusPesanan = "Dibatalkan";

    }

    void resetPesanan() {

        idPesanan = "";
        tanggalPesanan = "";
        metodePengiriman = "";
        statusPesanan = "Belum Diproses";
        alamatTujuan = "";
        jumlah = 0;
        ongkir = 0;
        totalHarga = 0;
        totalBayar = 0;

    }

    string getIdPesanan() {

        return idPesanan;

    }

    string getTanggalPesanan() {

        return tanggalPesanan;

    }

    string getMetodePengiriman() {

        return metodePengiriman;

    }

    string getAlamatTujuan() {

        return alamatTujuan;

    }

    string getStatusPesanan() {

        return statusPesanan;

    }

    int getJumlah() {

        return jumlah;

    }

    int getOngkir() {

        return ongkir;

    }

    int getTotalHarga() {

        return totalHarga;

    }

    int getTotalBayar() {

        return totalBayar;

    }

    Pelanggan getPelanggan() {

        return pelanggan;

    }

    AirGalon getProduk() {

        return produk;

    }

};

class Pembayaran {
private:

    string idPembayaran;
    string tanggalPembayaran;
    string metodePembayaran;
    string statusPembayaran;

    Pesanan pesanan;

    int totalBayar;
    int uangBayar;
    int kembalian;

public:

    Pembayaran() {

        idPembayaran = "";
        tanggalPembayaran = "";
        metodePembayaran = "";
        statusPembayaran = "Belum Lunas";

        totalBayar = 0;
        uangBayar = 0;
        kembalian = 0;

    }

    void setPesanan(Pesanan p) {

        pesanan = p;

    }

    void setIdPembayaran(string id) {

        idPembayaran = id;

    }

    void setTanggalPembayaran(string tanggal) {

        tanggalPembayaran = tanggal;

    }

    void setMetodePembayaran(string metode) {

        metodePembayaran = metode;

    }

    void hitungTotalBayar() {

        totalBayar = pesanan.getTotalBayar();

    }

    void inputPembayaran(Pesanan p) {

        pesanan = p;

        cin.ignore();

        cout << "\n======================================" << endl;
        cout << "          PEMBAYARAN" << endl;
        cout << "======================================" << endl;

        cout << "ID Pembayaran      : ";
        getline(cin,idPembayaran);

        cout << "Tanggal Pembayaran : ";
        getline(cin,tanggalPembayaran);

        cout << endl;

        cout << "Metode Pembayaran" << endl;
        cout << "1. Tunai" << endl;
        cout << "2. Transfer Bank" << endl;
        cout << "3. E-Wallet" << endl;

        int pilih;

        cout << "Pilih : ";
        cin >> pilih;

        while(pilih < 1 || pilih > 3)
        {
            cout << "Pilihan salah : ";
            cin >> pilih;
        }

        if(pilih == 1)
        {
            metodePembayaran = "Tunai";
        }
        else if(pilih == 2)
        {
            metodePembayaran = "Transfer Bank";
        }
        else
        {
            metodePembayaran = "E-Wallet";
        }

        hitungTotalBayar();

        cout << endl;
        cout << "Total Bayar : Rp " << totalBayar << endl;

        cout << "Uang Bayar  : Rp ";
        cin >> uangBayar;

        while(uangBayar < totalBayar)
        {
            cout << "Uang kurang, masukkan lagi : Rp ";
            cin >> uangBayar;
        }

        kembalian = uangBayar - totalBayar;

        statusPembayaran = "Lunas";

    }

    void tampilPembayaran() {

        cout << "\n======================================" << endl;
        cout << "         DATA PEMBAYARAN" << endl;
        cout << "======================================" << endl;

        cout << "ID Pembayaran      : " << idPembayaran << endl;
        cout << "Tanggal            : " << tanggalPembayaran << endl;
        cout << "Metode Pembayaran  : " << metodePembayaran << endl;
        cout << "Total Bayar        : Rp " << totalBayar << endl;
        cout << "Uang Bayar         : Rp " << uangBayar << endl;
        cout << "Kembalian          : Rp " << kembalian << endl;
        cout << "Status Pembayaran  : " << statusPembayaran << endl;

    }

    void tampilRingkasanPembayaran() {

        cout << "\n========== RINGKASAN PEMBAYARAN ==========" << endl;

        cout << "ID Pembayaran : " << idPembayaran << endl;
        cout << "Metode        : " << metodePembayaran << endl;
        cout << "Total Bayar   : Rp " << totalBayar << endl;
        cout << "Status        : " << statusPembayaran << endl;

    }

    void cekStatusPembayaran() {

        cout << "\nStatus Pembayaran : "
             << statusPembayaran
             << endl;

    }

    void batalkanPembayaran() {

        statusPembayaran = "Dibatalkan";

        uangBayar = 0;
        kembalian = 0;

        cout << "Pembayaran berhasil dibatalkan." << endl;

    }

    void resetPembayaran() {

        idPembayaran = "";
        tanggalPembayaran = "";
        metodePembayaran = "";
        statusPembayaran = "Belum Lunas";

        totalBayar = 0;
        uangBayar = 0;
        kembalian = 0;

        cout << "Data pembayaran berhasil direset." << endl;

    }

    string getIdPembayaran() {

        return idPembayaran;

    }

    string getTanggalPembayaran() {

        return tanggalPembayaran;

    }

    string getMetodePembayaran() {

        return metodePembayaran;

    }

    string getStatusPembayaran() {

        return statusPembayaran;

    }

    int getTotalBayar() {

        return totalBayar;

    }

    int getUangBayar() {

        return uangBayar;

    }

    int getKembalian() {

        return kembalian;

    }
    
    Pesanan getPesanan() {

    return pesanan;

}

};

class DetailPesanan {
private:

    Pesanan pesanan;
    Pembayaran pembayaran;

public:

    DetailPesanan() {

    }

    ~DetailPesanan() {

    }

    void setPesanan(Pesanan p) {

        pesanan = p;

    }

    void setPembayaran(Pembayaran p) {

        pembayaran = p;

    }

    Pesanan getPesanan() {

        return pesanan;

    }

    Pembayaran getPembayaran() {

        return pembayaran;

    }

    void inputDetailPesanan(Pesanan p, Pembayaran pb) {

        pesanan = p;
        pembayaran = pb;

    }

    void tampilDetailPesanan() {

        cout << "\n======================================" << endl;
        cout << "         DETAIL PESANAN" << endl;
        cout << "======================================" << endl;

        cout << "ID Pesanan          : "
             << pesanan.getIdPesanan() << endl;

        cout << "Tanggal Pesanan     : "
             << pesanan.getTanggalPesanan() << endl;

        cout << "Nama Pelanggan      : "
             << pesanan.getPelanggan().getNama() << endl;

        cout << "Produk              : "
             << pesanan.getProduk().getNamaProduk() << endl;

        cout << "Ukuran              : "
             << pesanan.getProduk().getUkuran() << endl;

        cout << "Jenis               : "
             << pesanan.getProduk().getJenis() << endl;

        cout << "Harga               : Rp "
             << pesanan.getProduk().getHarga() << endl;

        cout << "Jumlah Galon        : "
             << pesanan.getJumlah() << endl;

        cout << "Total Harga         : Rp "
             << pesanan.getTotalHarga() << endl;

        cout << "Metode Pengiriman   : "
             << pesanan.getMetodePengiriman() << endl;

        cout << "Ongkir              : Rp "
             << pesanan.getOngkir() << endl;

        cout << "Total Bayar         : Rp "
             << pesanan.getTotalBayar() << endl;

        cout << endl;

        cout << "ID Pembayaran       : "
             << pembayaran.getIdPembayaran() << endl;

        cout << "Tanggal Pembayaran  : "
             << pembayaran.getTanggalPembayaran() << endl;

        cout << "Metode Pembayaran   : "
             << pembayaran.getMetodePembayaran() << endl;

        cout << "Status Pembayaran   : "
             << pembayaran.getStatusPembayaran() << endl;

        cout << "Uang Bayar          : Rp "
             << pembayaran.getUangBayar() << endl;

        cout << "Kembalian           : Rp "
             << pembayaran.getKembalian() << endl;

        cout << "======================================" << endl;

    }

    void tampilRingkasan() {

        cout << "\n========== RINGKASAN ==========" << endl;

        cout << "Pelanggan : "
             << pesanan.getPelanggan().getNama() << endl;

        cout << "Produk    : "
             << pesanan.getProduk().getNamaProduk() << endl;

        cout << "Jumlah    : "
             << pesanan.getJumlah() << endl;

        cout << "Total     : Rp "
             << pesanan.getTotalBayar() << endl;

        cout << "Status    : "
             << pembayaran.getStatusPembayaran() << endl;

    }

    void cekStatusPembayaran() {

        cout << "\nStatus Pembayaran : "
             << pembayaran.getStatusPembayaran()
             << endl;

    }

    void cekStatusPesanan() {

        cout << "Status Pesanan : "
             << pesanan.getStatusPesanan()
             << endl;

    }

    void resetDetailPesanan() {

        pesanan.resetPesanan();
        pembayaran.resetPembayaran();

        cout << "Detail pesanan berhasil direset." << endl;

    }

};

class Kurir {
private:

    string idKurir[3];
    string namaKurir[3];
    string jenisKelamin[3];
    string nomorHP[3];
    string kendaraan[3];
    string platNomor[3];
    string wilayah[3];

    int pilihan;

    string id;
    string nama;
    string jk;
    string hp;
    string kendaraanDipilih;
    string platDipilih;
    string wilayahDipilih;

    string statusKurir;
    bool tersedia;

public:

    Kurir() {

        idKurir[0] = "K001";
        idKurir[1] = "K002";
        idKurir[2] = "K003";

        namaKurir[0] = "Farrel Nugraha";
        namaKurir[1] = "Budi Santoso";
        namaKurir[2] = "Asep Saputra";

        jenisKelamin[0] = "Laki-laki";
        jenisKelamin[1] = "Laki-laki";
        jenisKelamin[2] = "Laki-laki";

        nomorHP[0] = "081234567891";
        nomorHP[1] = "081234567892";
        nomorHP[2] = "081234567893";

        kendaraan[0] = "Motor";
        kendaraan[1] = "Motor";
        kendaraan[2] = "Mobil Pick Up";

        platNomor[0] = "AB 1234 FR";
        platNomor[1] = "AB 5678 BD";
        platNomor[2] = "AB 9012 AS";

        wilayah[0] = "Yogyakarta";
        wilayah[1] = "Sleman";
        wilayah[2] = "Bantul";

        pilihan = 0;

        id = "";
        nama = "";
        jk = "";
        hp = "";
        kendaraanDipilih = "";
        platDipilih = "";
        wilayahDipilih = "";

        statusKurir = "Tidak Bertugas";
        tersedia = true;

    }

    ~Kurir() {

    }

    void inputKurir() {

        cout << "\n======================================" << endl;
        cout << "           PILIH KURIR" << endl;
        cout << "======================================" << endl;

        for(int i = 0; i < 3; i++)
        {
            cout << i + 1 << ". "
                 << namaKurir[i]
                 << " (" << kendaraan[i] << ")" << endl;
        }

        cout << "======================================" << endl;
        cout << "Pilih Kurir : ";
        cin >> pilihan;

        while(pilihan < 1 || pilihan > 3)
        {
            cout << "Pilihan salah : ";
            cin >> pilihan;
        }

        id = idKurir[pilihan-1];
        nama = namaKurir[pilihan-1];
        jk = jenisKelamin[pilihan-1];
        hp = nomorHP[pilihan-1];
        kendaraanDipilih = kendaraan[pilihan-1];
        platDipilih = platNomor[pilihan-1];
        wilayahDipilih = wilayah[pilihan-1];

        statusKurir = "Siap Bertugas";
        tersedia = true;

    }

    void tampilKurir() {

        cout << "\n======================================" << endl;
        cout << "           DATA KURIR" << endl;
        cout << "======================================" << endl;

        cout << "ID Kurir        : " << id << endl;
        cout << "Nama Kurir      : " << nama << endl;
        cout << "Jenis Kelamin   : " << jk << endl;
        cout << "Nomor HP        : " << hp << endl;
        cout << "Kendaraan       : " << kendaraanDipilih << endl;
        cout << "Plat Nomor      : " << platDipilih << endl;
        cout << "Wilayah Tugas   : " << wilayahDipilih << endl;
        cout << "Status          : " << statusKurir << endl;

    }

    void mulaiBertugas() {

        statusKurir = "Sedang Bertugas";

    }

    void selesaiBertugas() {

        statusKurir = "Selesai Bertugas";

    }

    void aktifkanKurir() {

        tersedia = true;

    }

    void nonaktifkanKurir() {

        tersedia = false;

    }

    void cekStatus() {

        cout << "\n===== STATUS KURIR =====" << endl;

        if(tersedia)
            cout << "Kurir Aktif." << endl;
        else
            cout << "Kurir Tidak Aktif." << endl;

    }

    void resetKurir() {

        pilihan = 0;

        id = "";
        nama = "";
        jk = "";
        hp = "";
        kendaraanDipilih = "";
        platDipilih = "";
        wilayahDipilih = "";

        statusKurir = "Tidak Bertugas";
        tersedia = true;

    }

    string getIdKurir() {

        return id;

    }

    string getNamaKurir() {

        return nama;

    }

    string getJenisKelamin() {

        return jk;

    }

    string getNomorHP() {

        return hp;

    }

    string getKendaraan() {

        return kendaraanDipilih;

    }

    string getPlatNomor() {

        return platDipilih;

    }

    string getWilayah() {

        return wilayahDipilih;

    }

    string getStatusKurir() {

        return statusKurir;

    }

    bool getTersedia() {

        return tersedia;

    }

};

class Pengiriman {
private:

    string idPengiriman;
    string statusPengiriman;
    string estimasi;

    Pesanan pesanan;
    Kurir kurir;

public:

    Pengiriman() {

        idPengiriman = "";
        statusPengiriman = "Sedang Dikirim";
        estimasi = "20 Menit";

    }

    ~Pengiriman() {

    }

    void inputPengiriman(Pesanan p, Kurir k) {

        pesanan = p;
        kurir = k;

        idPengiriman = "PG001";
        statusPengiriman = "Sedang Dikirim";
        estimasi = "20 Menit";

    }

    void tampilPengiriman() {

        cout << "\n======================================" << endl;
        cout << "         DATA PENGIRIMAN" << endl;
        cout << "======================================" << endl;

        cout << "ID Pengiriman    : " << idPengiriman << endl;
        cout << "ID Pesanan       : " << pesanan.getIdPesanan() << endl;
        cout << "Nama Pelanggan   : " << pesanan.getPelanggan().getNama() << endl;
        cout << "Produk           : " << pesanan.getProduk().getNamaProduk() << endl;
        cout << "Jumlah           : " << pesanan.getJumlah() << " Galon" << endl;
        cout << "Alamat Tujuan    : " << pesanan.getAlamatTujuan() << endl;
        cout << "Kurir            : " << kurir.getNamaKurir() << endl;
        cout << "Kendaraan        : " << kurir.getKendaraan() << endl;
        cout << "Plat Nomor       : " << kurir.getPlatNomor() << endl;
        cout << "Wilayah          : " << kurir.getWilayah() << endl;
        cout << "Status           : " << statusPengiriman << endl;
        cout << "Estimasi Sampai  : " << estimasi << endl;
        cout << "======================================" << endl;

    }

    void pesananSampai() {

        statusPengiriman = "Pesanan Sampai";

    }

    string getIdPengiriman() {

        return idPengiriman;

    }

    string getStatusPengiriman() {

        return statusPengiriman;

    }

    void resetPengiriman() {

        idPengiriman = "";
        statusPengiriman = "Sedang Dikirim";
        estimasi = "20 Menit";

    }
    
    Kurir getKurir() {

    return kurir;

}

};

class Transaksi {
private:

    string idTransaksi;
    string tanggalTransaksi;

    Pembayaran pembayaran;
    Pengiriman pengiriman;

public:

    Transaksi() {

        idTransaksi = "TR001";
        tanggalTransaksi = "05 Juli 2026";

    }

    ~Transaksi() {

    }

    void setPembayaran(Pembayaran p) {

        pembayaran = p;

    }

    void setPengiriman(Pengiriman p) {

        pengiriman = p;

    }

    void tampilTransaksi() {

        Pesanan pesanan = pembayaran.getPesanan();

        cout << "\n==========================================" << endl;
        cout << "        STRUK PEMESANAN AIR GALON" << endl;
        cout << "==========================================" << endl;

        cout << "ID Transaksi    : " << idTransaksi << endl;
        cout << "Tanggal         : " << tanggalTransaksi << endl;

        cout << "\n------------------------------------------" << endl;
        cout << "Pelanggan" << endl;
        cout << "------------------------------------------" << endl;

        cout << "Nama            : "
             << pesanan.getPelanggan().getNama() << endl;

        cout << "Alamat          : "
             << pesanan.getAlamatTujuan() << endl;

        cout << "\n------------------------------------------" << endl;
        cout << "Pesanan" << endl;
        cout << "------------------------------------------" << endl;

        cout << "Produk          : "
             << pesanan.getProduk().getNamaProduk() << endl;

        cout << "Harga           : Rp "
             << pesanan.getProduk().getHarga() << endl;

        cout << "Jumlah          : "
             << pesanan.getJumlah()
             << " Galon" << endl;

        cout << "Subtotal        : Rp "
             << pesanan.getTotalHarga() << endl;

        cout << "Ongkir          : Rp "
             << pesanan.getOngkir() << endl;

        cout << "Total Bayar     : Rp "
             << pembayaran.getTotalBayar() << endl;

        cout << "\n------------------------------------------" << endl;
        cout << "Pembayaran" << endl;
        cout << "------------------------------------------" << endl;

        cout << "Metode          : "
             << pembayaran.getMetodePembayaran() << endl;

        cout << "Uang Bayar      : Rp "
             << pembayaran.getUangBayar() << endl;

        cout << "Kembalian       : Rp "
             << pembayaran.getKembalian() << endl;

        cout << "Status          : "
             << pembayaran.getStatusPembayaran() << endl;

        cout << "\n------------------------------------------" << endl;
        cout << "Pengiriman" << endl;
        cout << "------------------------------------------" << endl;

        cout << "Kurir           : "
             << pengiriman.getKurir().getNamaKurir() << endl;

        cout << "Kendaraan       : "
             << pengiriman.getKurir().getKendaraan() << endl;

        cout << "Plat Nomor      : "
             << pengiriman.getKurir().getPlatNomor() << endl;

        cout << "Status          : "
             << pengiriman.getStatusPengiriman() << endl;

        cout << "==========================================" << endl;
        cout << "     TERIMA KASIH TELAH MEMESAN" << endl;
        cout << "      AIR GALON DI TOKO KAMI" << endl;
        cout << "==========================================" << endl;

    }

    void cetakStruk() {

        tampilTransaksi();

    }

};

int main()
{
    Login login;
    Register reg;
    Admin admin;
    Pelanggan pelanggan;
    Produk produk;
    AirGalon galon;
    Pesanan pesanan;
    Pembayaran pembayaran;
    DetailPesanan detailPesanan;
    Kurir kurir;
    Pengiriman pengiriman; 
    Transaksi transaksi;

    int pilihan;

    do
    {
        cout << "\n==================================================" << endl;
        cout << "          SISTEM PEMESANAN AIR GALON" << endl;
        cout << "==================================================" << endl;
        cout << " Langkah 1. Register Akun" << endl;
        cout << " Langkah 2. Login" << endl;
        cout << " Langkah 3. Input Data Admin" << endl;
        cout << " Langkah 4. Input Data Pelanggan" << endl;
        cout << " Langkah 5. Data Produk" << endl;
        cout << " Langkah 6. Data Air Galon" << endl;
        cout << " Langkah 7. Buat Pesanan" << endl;
        cout << " Langkah 8. Pembayaran" << endl;
        cout << " Langkah 9. detail pesanan" << endl;
        cout << " Langkah 10. Data Kurir" << endl;
        cout << " Langkah 11. Pengiriman" << endl;
        cout << " Langkah 12. Transaksi" << endl;
        cout << "==================================================" << endl;
        cout << "0. Keluar" << endl;
        cout << "==================================================" << endl;
        cout << "Pilih Langkah : ";
        cin >> pilihan;

        switch(pilihan)
        {

        case 1:

            cout << "\n===== LANGKAH 1 : REGISTER =====\n";

            reg.inputRegister();
            reg.simpanData();
            reg.tampilData();

            break;

        case 2:

            cout << "\n===== LANGKAH 2 : LOGIN =====\n";

            login.inputLogin();
            login.validasiLogin(reg);
            login.tampilStatus();

            break;

        case 3:

            cout << "\n===== LANGKAH 3 : DATA ADMIN =====\n";

            admin.inputAdmin();
            admin.tampilAdmin();

            break;

        case 4:

            cout << "\n===== LANGKAH 4 : DATA PELANGGAN =====\n";

            pelanggan.inputPelanggan();
            pelanggan.tampilPelanggan();

            break;

        case 5:

            cout << "\n===== LANGKAH 5 : DATA PRODUK =====\n";

            produk.inputProduk();
            produk.tampilProduk();

            break;

        case 6:

            cout << "\n===== LANGKAH 6 : AIR GALON =====\n";

            galon.inputAirGalon(produk);
            galon.tampilAirGalon();

    break;
            

        case 7:

           cout << "\n===== LANGKAH 7 : PESANAN =====\n";

           pesanan.inputPesanan(pelanggan,galon);

           pesanan.prosesPesanan();

           pesanan.tampilPesanan();

           break;
            
        case 8:

          cout << "\n===== LANGKAH 8 : PEMBAYARAN =====\n";
  
          pembayaran.inputPembayaran(pesanan);
 
          pembayaran.tampilPembayaran();

          break;
          
        case 9:

         cout << "\n===== LANGKAH 9 : DETAIL PESANAN =====\n";

         detailPesanan.inputDetailPesanan(pesanan, pembayaran);

         detailPesanan.tampilDetailPesanan();

         break;
           
        case 10:

           cout << "\n===== LANGKAH 10 : DATA KURIR =====\n";

           kurir.inputKurir();
           kurir.tampilKurir();

    break;

        case 11:

        cout << "\n===== LANGKAH 11 : PENGIRIMAN =====\n";

        pengiriman.inputPengiriman(pesanan, kurir);

        pengiriman.tampilPengiriman();

   
    break;

        case 12:

        cout << "\n===== LANGKAH 12 : TRANSAKSI =====\n";

        transaksi.setPembayaran(pembayaran);
        transaksi.setPengiriman(pengiriman);

        transaksi.tampilTransaksi();

    break;

        case 0:

            cout << "\nTerima kasih telah menggunakan program." << endl;

            break;

        default:

            cout << "\nPilihan tidak tersedia." << endl;

        }

        if(pilihan != 0)
        {
            cout << "\nTekan Enter untuk kembali ke menu...";
            cin.ignore();
            cin.get();
        }

    }
    while(pilihan != 0);

    return 0;
}
