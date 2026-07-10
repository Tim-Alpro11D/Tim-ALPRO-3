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

    string username;
    string password;
    string tanggalDaftar;
    string levelMember;
    string statusPelanggan;
    string pekerjaan;
    string kota;
    string provinsi;

    int umur;
    int poin;
    int totalTransaksi;
    int totalGalon;
    int totalBelanja;

    double diskon;

    bool memberAktif;

public:

    Pelanggan() {

        idPelanggan = "";
        nama = "";
        jenisKelamin = "";
        alamat = "";
        noHP = "";
        email = "";

        username = "";
        password = "";
        tanggalDaftar = "";
        levelMember = "Silver";
        statusPelanggan = "Aktif";
        pekerjaan = "";
        kota = "";
        provinsi = "";

        umur = 0;
        poin = 0;
        totalTransaksi = 0;
        totalGalon = 0;
        totalBelanja = 0;

        diskon = 0;

        memberAktif = true;

    }

    ~Pelanggan() {

    }

    void inputPelanggan() {

        cin.ignore();

        cout << "\n==========================================" << endl;
        cout << "         INPUT DATA PELANGGAN" << endl;
        cout << "==========================================" << endl;

        do{
            cout << "ID Pelanggan      : ";
            getline(cin,idPelanggan);
        }while(idPelanggan=="");

        do{
            cout << "Nama Pelanggan    : ";
            getline(cin,nama);
        }while(nama=="");

        do{
            cout << "Jenis Kelamin     : ";
            getline(cin,jenisKelamin);
        }while(jenisKelamin=="");

        cout << "Umur              : ";
        cin >> umur;

        while(umur<=0)
        {
            cout << "Masukkan umur yang benar : ";
            cin >> umur;
        }

        cin.ignore();

        do{
            cout << "Pekerjaan         : ";
            getline(cin,pekerjaan);
        }while(pekerjaan=="");

        do{
            cout << "Alamat            : ";
            getline(cin,alamat);
        }while(alamat=="");

        do{
            cout << "Kota              : ";
            getline(cin,kota);
        }while(kota=="");

        do{
            cout << "Provinsi          : ";
            getline(cin,provinsi);
        }while(provinsi=="");

        do{
            cout << "Nomor HP          : ";
            getline(cin,noHP);
        }while(noHP=="");

        do{
            cout << "Email             : ";
            getline(cin,email);
        }while(email=="");

        do{
            cout << "Username          : ";
            getline(cin,username);
        }while(username=="");

        do{
            cout << "Password          : ";
            getline(cin,password);
        }while(password=="");

        cout << "Tanggal Daftar    : ";
        getline(cin,tanggalDaftar);

        levelMember = "Silver";
        statusPelanggan = "Aktif";
        memberAktif = true;
        poin = 0;
        totalTransaksi = 0;
        totalGalon = 0;
        totalBelanja = 0;
        diskon = 0;

        cout << "\nData pelanggan berhasil disimpan." << endl;

    }

    void tampilPelanggan() {

        cout << "\n==========================================" << endl;
        cout << "          DATA PELANGGAN" << endl;
        cout << "==========================================" << endl;

        cout << "ID Pelanggan      : " << idPelanggan << endl;
        cout << "Nama              : " << nama << endl;
        cout << "Jenis Kelamin     : " << jenisKelamin << endl;
        cout << "Umur              : " << umur << " Tahun" << endl;
        cout << "Pekerjaan         : " << pekerjaan << endl;
        cout << "Alamat            : " << alamat << endl;
        cout << "Kota              : " << kota << endl;
        cout << "Provinsi          : " << provinsi << endl;
        cout << "Nomor HP          : " << noHP << endl;
        cout << "Email             : " << email << endl;
        cout << "Username          : " << username << endl;
        cout << "Tanggal Daftar    : " << tanggalDaftar << endl;
        cout << "Level Member      : " << levelMember << endl;
        cout << "Status            : " << statusPelanggan << endl;
        cout << "Poin              : " << poin << endl;

    }

    void tampilProfil() {

        cout << "\n==========================================" << endl;
        cout << "          PROFIL PELANGGAN" << endl;
        cout << "==========================================" << endl;

        cout << "Nama              : " << nama << endl;
        cout << "Alamat            : " << alamat << endl;
        cout << "Nomor HP          : " << noHP << endl;
        cout << "Email             : " << email << endl;
        cout << "Member            : " << levelMember << endl;
        cout << "Status            : " << statusPelanggan << endl;

    }
    
        void editPelanggan() {

        cin.ignore();

        cout << "\n==========================================" << endl;
        cout << "          EDIT DATA PELANGGAN" << endl;
        cout << "==========================================" << endl;

        cout << "Nama Baru         : ";
        getline(cin,nama);

        cout << "Jenis Kelamin     : ";
        getline(cin,jenisKelamin);

        cout << "Umur              : ";
        cin >> umur;
        cin.ignore();

        cout << "Pekerjaan         : ";
        getline(cin,pekerjaan);

        cout << "Alamat            : ";
        getline(cin,alamat);

        cout << "Kota              : ";
        getline(cin,kota);

        cout << "Provinsi          : ";
        getline(cin,provinsi);

        cout << "Nomor HP          : ";
        getline(cin,noHP);

        cout << "Email             : ";
        getline(cin,email);

        cout << "\nData pelanggan berhasil diperbarui." << endl;

    }

    void cariPelanggan() {

        string cari;

        cin.ignore();

        cout << "\nMasukkan ID Pelanggan : ";
        getline(cin,cari);

        if(cari==idPelanggan)
        {
            cout << "\nData ditemukan." << endl;
            tampilPelanggan();
        }
        else
        {
            cout << "\nData tidak ditemukan." << endl;
        }

    }

    void ubahNomorHP() {

        cin.ignore();

        cout << "\nNomor HP Baru : ";
        getline(cin,noHP);

        cout << "Nomor HP berhasil diperbarui." << endl;

    }

    void ubahEmail() {

        cin.ignore();

        cout << "\nEmail Baru : ";
        getline(cin,email);

        cout << "Email berhasil diperbarui." << endl;

    }

    void ubahAlamat() {

        cin.ignore();

        cout << "\nAlamat Baru : ";
        getline(cin,alamat);

        cout << "Alamat berhasil diperbarui." << endl;

    }

    void ubahPassword() {

        cin.ignore();

        cout << "\nPassword Baru : ";
        getline(cin,password);

        cout << "Password berhasil diperbarui." << endl;

    }

    void tampilRingkasan() {

        cout << "\n==========================================" << endl;
        cout << "       RINGKASAN PELANGGAN" << endl;
        cout << "==========================================" << endl;

        cout << "Nama              : " << nama << endl;
        cout << "Level Member      : " << levelMember << endl;
        cout << "Poin              : " << poin << endl;
        cout << "Status            : " << statusPelanggan << endl;
        cout << "Total Transaksi   : " << totalTransaksi << endl;
        cout << "Total Galon       : " << totalGalon << endl;
        cout << "Total Belanja     : Rp " << totalBelanja << endl;

    }

    void tampilKontak() {

        cout << "\n========== KONTAK PELANGGAN ==========" << endl;

        cout << "Nama      : " << nama << endl;
        cout << "No HP     : " << noHP << endl;
        cout << "Email     : " << email << endl;
        cout << "Alamat    : " << alamat << endl;

    }

    void tampilMember() {

        cout << "\n========== INFORMASI MEMBER ==========" << endl;

        cout << "Nama            : " << nama << endl;
        cout << "Level Member    : " << levelMember << endl;
        cout << "Status          : " << statusPelanggan << endl;
        cout << "Poin            : " << poin << endl;
        cout << "Diskon          : " << diskon << "%" << endl;

    }
    
        void tambahPoin(int nilai) {

        poin += nilai;

        cout << "Poin pelanggan bertambah " << nilai << " poin." << endl;

    }

    void kurangiPoin(int nilai) {

        if(nilai <= poin)
        {
            poin -= nilai;
            cout << "Poin pelanggan berkurang." << endl;
        }
        else
        {
            cout << "Poin tidak mencukupi." << endl;
        }

    }

    void resetPoin() {

        poin = 0;

        cout << "Poin berhasil direset." << endl;

    }

    void tambahTransaksi(int total) {

        totalTransaksi++;
        totalBelanja += total;

    }

    void tambahPembelianGalon(int jumlah) {

        totalGalon += jumlah;

    }

    void upgradeMember() {

        if(totalBelanja >= 1000000)
        {
            levelMember = "Diamond";
            diskon = 15;
        }
        else if(totalBelanja >= 700000)
        {
            levelMember = "Platinum";
            diskon = 10;
        }
        else if(totalBelanja >= 400000)
        {
            levelMember = "Gold";
            diskon = 5;
        }
        else
        {
            levelMember = "Silver";
            diskon = 0;
        }

        cout << "Level Member : " << levelMember << endl;

    }

    void nonaktifkanMember() {

        memberAktif = false;
        statusPelanggan = "Tidak Aktif";

    }

    void aktifkanMember() {

        memberAktif = true;
        statusPelanggan = "Aktif";

    }

    void cekMember() {

        cout << "\n========== STATUS MEMBER ==========" << endl;

        cout << "Nama            : " << nama << endl;
        cout << "Level Member    : " << levelMember << endl;
        cout << "Status          : " << statusPelanggan << endl;
        cout << "Poin            : " << poin << endl;
        cout << "Diskon          : " << diskon << "%" << endl;

    }

    void tampilStatistik() {

        cout << "\n========== STATISTIK PELANGGAN ==========" << endl;

        cout << "Nama                : " << nama << endl;
        cout << "Jumlah Transaksi    : " << totalTransaksi << endl;
        cout << "Total Galon Dibeli  : " << totalGalon << endl;
        cout << "Total Belanja       : Rp " << totalBelanja << endl;
        cout << "Level Member        : " << levelMember << endl;
        cout << "Poin                : " << poin << endl;

    }

    void tampilDiskon() {

        cout << "\n========== INFORMASI DISKON ==========" << endl;

        cout << "Nama            : " << nama << endl;
        cout << "Level Member    : " << levelMember << endl;
        cout << "Diskon          : " << diskon << "%" << endl;

    }

    void tukarPoin() {

        if(poin >= 100)
        {
            poin -= 100;

            cout << "100 poin berhasil ditukar dengan voucher." << endl;
        }
        else
        {
            cout << "Poin belum mencukupi." << endl;
        }

    }

    void tampilPrestasi() {

        cout << "\n========== PRESTASI PELANGGAN ==========" << endl;

        if(totalBelanja >= 1000000)
        {
            cout << "Predikat : Pelanggan Prioritas" << endl;
        }
        else if(totalBelanja >= 500000)
        {
            cout << "Predikat : Pelanggan Aktif" << endl;
        }
        else
        {
            cout << "Predikat : Pelanggan Baru" << endl;
        }

    }
    
        void validasiEmail() {

        if(email.find("@") != string::npos)
        {
            cout << "Email valid." << endl;
        }
        else
        {
            cout << "Email tidak valid." << endl;
        }

    }

    void validasiNomorHP() {

        if(noHP.length() >= 10 && noHP.length() <= 13)
        {
            cout << "Nomor HP valid." << endl;
        }
        else
        {
            cout << "Nomor HP tidak valid." << endl;
        }

    }

    void cekDataLengkap() {

        cout << "\n========== CEK DATA ==========" << endl;

        if(idPelanggan!="" &&
           nama!="" &&
           alamat!="" &&
           noHP!="" &&
           email!="")
        {
            cout << "Data pelanggan lengkap." << endl;
        }
        else
        {
            cout << "Masih ada data yang kosong." << endl;
        }

    }

    void tampilAlamatLengkap() {

        cout << "\n========== ALAMAT ==========" << endl;

        cout << "Alamat   : " << alamat << endl;
        cout << "Kota     : " << kota << endl;
        cout << "Provinsi : " << provinsi << endl;

    }

    void tampilIdentitas() {

        cout << "\n========== IDENTITAS ==========" << endl;

        cout << "ID             : " << idPelanggan << endl;
        cout << "Nama           : " << nama << endl;
        cout << "Jenis Kelamin  : " << jenisKelamin << endl;
        cout << "Umur           : " << umur << " Tahun" << endl;

    }

    void tampilRiwayatBelanja() {

        cout << "\n========== RIWAYAT BELANJA ==========" << endl;

        cout << "Jumlah Transaksi : " << totalTransaksi << endl;
        cout << "Total Belanja    : Rp " << totalBelanja << endl;
        cout << "Total Galon      : " << totalGalon << endl;

    }

    void tampilKeuntunganMember() {

        cout << "\n========== KEUNTUNGAN MEMBER ==========" << endl;

        cout << "Level Member : " << levelMember << endl;
        cout << "Diskon       : " << diskon << "%" << endl;
        cout << "Poin         : " << poin << endl;

    }

    void simulasiBelanja(int total) {

        double potongan = total * diskon / 100.0;

        cout << "\n========== SIMULASI BELANJA ==========" << endl;
        cout << "Total Belanja : Rp " << total << endl;
        cout << "Diskon        : " << diskon << "%" << endl;
        cout << "Potongan      : Rp " << potongan << endl;
        cout << "Total Bayar   : Rp " << total - potongan << endl;

    }

    void cetakKartuMember() {

        cout << "\n===================================" << endl;
        cout << "          KARTU MEMBER" << endl;
        cout << "===================================" << endl;

        cout << "ID Member    : " << idPelanggan << endl;
        cout << "Nama         : " << nama << endl;
        cout << "Level        : " << levelMember << endl;
        cout << "Status       : " << statusPelanggan << endl;

    }

    void laporanPelanggan() {

        cout << "\n===================================" << endl;
        cout << "        LAPORAN PELANGGAN" << endl;
        cout << "===================================" << endl;

        tampilIdentitas();
        tampilKontak();
        tampilStatistik();

    }

    void tampilSemuaInformasi() {

        tampilPelanggan();
        tampilProfil();
        tampilStatistik();
        tampilMember();

    }

    void hapusPoin() {

        poin = 0;

        cout << "Semua poin berhasil dihapus." << endl;

    }

    void ubahStatus(string status) {

        statusPelanggan = status;

    }

    void tampilStatus() {

        cout << "\n========== STATUS ==========" << endl;

        cout << "Nama   : " << nama << endl;
        cout << "Status : " << statusPelanggan << endl;

    }

    void tampilUcapan() {

        cout << "\nTerima kasih telah menjadi pelanggan setia." << endl;

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

    string getUsername() {

        return username;

    }

    string getPassword() {

        return password;

    }

    string getTanggalDaftar() {

        return tanggalDaftar;

    }

    string getLevelMember() {

        return levelMember;

    }

    string getStatusPelanggan() {

        return statusPelanggan;

    }

    string getPekerjaan() {

        return pekerjaan;

    }

    string getKota() {

        return kota;

    }

    string getProvinsi() {

        return provinsi;

    }

    int getUmur() {

        return umur;

    }

    int getPoin() {

        return poin;

    }

    int getTotalTransaksi() {

        return totalTransaksi;

    }

    int getTotalGalon() {

        return totalGalon;

    }

    int getTotalBelanja() {

        return totalBelanja;

    }

    double getDiskon() {

        return diskon;

    }

    bool getMemberAktif() {

        return memberAktif;

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

    void setUsername(string u) {

        username = u;

    }

    void setPassword(string p) {

        password = p;

    }

    void setPekerjaan(string p) {

        pekerjaan = p;

    }

    void setKota(string k) {

        kota = k;

    }

    void setProvinsi(string p) {

        provinsi = p;

    }

    void setUmur(int u) {

        umur = u;

    }

    void setLevelMember(string level) {

        levelMember = level;

    }

    void setStatusPelanggan(string status) {

        statusPelanggan = status;

    }

    void setPoin(int nilai) {

        poin = nilai;

    }

    void resetPelanggan() {

        idPelanggan = "";
        nama = "";
        jenisKelamin = "";
        alamat = "";
        noHP = "";
        email = "";

        username = "";
        password = "";
        tanggalDaftar = "";
        levelMember = "Silver";
        statusPelanggan = "Aktif";
        pekerjaan = "";
        kota = "";
        provinsi = "";

        umur = 0;
        poin = 0;
        totalTransaksi = 0;
        totalGalon = 0;
        totalBelanja = 0;

        diskon = 0;

        memberAktif = true;

        cout << "\nData pelanggan berhasil direset." << endl;

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

    string kualitasAir;
    string sumberAir;
    string kategoriProduk;
    string statusProduk;
    string promo;

    int diskon;

    bool tersedia;

public:

    AirGalon() {

        namaProduk = "";
        harga = 0;

        ukuran = "19 Liter";
        jenis = "Isi Ulang";
        stok = 50;

        kualitasAir = "Standar";
        sumberAir = "Mata Air Pegunungan";
        kategoriProduk = "Reguler";
        statusProduk = "Tersedia";
        promo = "Tidak Ada";

        diskon = 0;

        tersedia = true;

    }

    void inputAirGalon(Produk produk) {

        namaProduk = produk.getNamaProduk();
        harga = produk.getHarga();
        stok = produk.getStok();

        if(harga >= 21000)
        {
            kategoriProduk = "Premium";
        }
        else
        {
            kategoriProduk = "Reguler";
        }

        if(stok > 0)
        {
            statusProduk = "Tersedia";
            tersedia = true;
        }
        else
        {
            statusProduk = "Habis";
            tersedia = false;
        }

        cout << "\n======================================" << endl;
        cout << "         DETAIL AIR GALON" << endl;
        cout << "======================================" << endl;

        cout << "Merek          : " << namaProduk << endl;
        cout << "Ukuran         : " << ukuran << endl;
        cout << "Jenis          : " << jenis << endl;
        cout << "Harga          : Rp " << harga << endl;
        cout << "Stok           : " << stok << endl;
        cout << "Kategori       : " << kategoriProduk << endl;
        cout << "Kualitas Air   : " << kualitasAir << endl;
        cout << "Sumber Air     : " << sumberAir << endl;
        cout << "Status Produk  : " << statusProduk << endl;

    }

    void tampilAirGalon() {

        cout << "\n======================================" << endl;
        cout << "      INFORMASI AIR GALON" << endl;
        cout << "======================================" << endl;

        cout << "Nama Produk    : " << namaProduk << endl;
        cout << "Ukuran         : " << ukuran << endl;
        cout << "Jenis          : " << jenis << endl;
        cout << "Harga          : Rp " << harga << endl;
        cout << "Stok           : " << stok << endl;
        cout << "Kategori       : " << kategoriProduk << endl;
        cout << "Kualitas Air   : " << kualitasAir << endl;
        cout << "Sumber Air     : " << sumberAir << endl;
        cout << "Promo          : " << promo << endl;
        cout << "Status Produk  : " << statusProduk << endl;

    }

    void tampilSpesifikasi() {

        cout << "\n======================================" << endl;
        cout << "      SPESIFIKASI PRODUK" << endl;
        cout << "======================================" << endl;

        cout << "Nama Produk      : " << namaProduk << endl;
        cout << "Ukuran           : " << ukuran << endl;
        cout << "Jenis            : " << jenis << endl;
        cout << "Kualitas Air     : " << kualitasAir << endl;
        cout << "Sumber Air       : " << sumberAir << endl;
        cout << "Kategori Produk  : " << kategoriProduk << endl;
        cout << "Status Produk    : " << statusProduk << endl;

    }

    void tampilRingkasanProduk() {

        cout << "\n========== RINGKASAN ==========" << endl;

        cout << "Produk   : " << namaProduk << endl;
        cout << "Harga    : Rp " << harga << endl;
        cout << "Stok     : " << stok << endl;
        cout << "Status   : " << statusProduk << endl;

    }

    void tampilLabelProduk() {

        cout << "\n==============================" << endl;
        cout << "      LABEL AIR GALON" << endl;
        cout << "==============================" << endl;

        cout << namaProduk << endl;
        cout << ukuran << endl;
        cout << "Rp " << harga << endl;
        cout << statusProduk << endl;

    }

    void cekKetersediaan() {

        cout << "\nStatus Produk : ";

        if(tersedia)
        {
            cout << "Tersedia";
        }
        else
        {
            cout << "Tidak Tersedia";
        }

        cout << endl;

    }
    
        void updateStatusProduk() {

        if(stok == 0)
        {
            statusProduk = "Habis";
            tersedia = false;
        }
        else if(stok <= 10)
        {
            statusProduk = "Stok Menipis";
            tersedia = true;
        }
        else
        {
            statusProduk = "Tersedia";
            tersedia = true;
        }

    }

    void tampilStatusProduk() {

        updateStatusProduk();

        cout << "\n========== STATUS PRODUK ==========" << endl;
        cout << "Status Produk : " << statusProduk << endl;

    }

    void ubahHarga() {

        cout << "\nMasukkan Harga Baru : Rp ";
        cin >> harga;

        while(harga <= 0)
        {
            cout << "Harga tidak valid : ";
            cin >> harga;
        }

        cout << "Harga berhasil diubah." << endl;

    }

    void tambahHarga(int tambah) {

        harga += tambah;

        cout << "Harga berhasil ditambah." << endl;

    }

    void kurangiHarga(int kurang) {

        if(kurang < harga)
        {
            harga -= kurang;

            cout << "Harga berhasil dikurangi." << endl;
        }
        else
        {
            cout << "Harga tidak boleh kurang dari nol." << endl;
        }

    }

    void aturDiskon() {

        cout << "\nMasukkan Diskon (%) : ";
        cin >> diskon;

        while(diskon < 0 || diskon > 100)
        {
            cout << "Diskon harus 0 - 100 : ";
            cin >> diskon;
        }

    }

    void tampilDiskon() {

        int potongan = harga * diskon / 100;
        int hargaAkhir = harga - potongan;

        cout << "\n========== DISKON ==========" << endl;
        cout << "Harga Awal      : Rp " << harga << endl;
        cout << "Diskon          : " << diskon << "%" << endl;
        cout << "Potongan Harga  : Rp " << potongan << endl;
        cout << "Harga Akhir     : Rp " << hargaAkhir << endl;

    }

    void aturPromo() {

        cin.ignore();

        cout << "\nNama Promo : ";
        getline(cin,promo);

        cout << "Promo berhasil diperbarui." << endl;

    }

    void tampilPromo() {

        cout << "\n========== PROMO ==========" << endl;
        cout << "Promo Saat Ini : " << promo << endl;

    }

    void nilaiPersediaan() {

        cout << "\n========== NILAI PERSEDIAAN ==========" << endl;
        cout << "Harga Satuan      : Rp " << harga << endl;
        cout << "Jumlah Stok       : " << stok << endl;
        cout << "Total Persediaan  : Rp " << harga * stok << endl;

    }

    void kondisiStok() {

        cout << "\n========== KONDISI STOK ==========" << endl;

        if(stok >= 30)
        {
            cout << "Stok Aman" << endl;
        }
        else if(stok >= 10)
        {
            cout << "Stok Menipis" << endl;
        }
        else
        {
            cout << "Stok Hampir Habis" << endl;
        }

    }
    
        void simulasiPembelian() {

        int beli;

        cout << "\nJumlah Galon yang Dibeli : ";
        cin >> beli;

        if(beli <= stok)
        {
            cout << "Total Harga : Rp "
                 << beli * harga
                 << endl;

            cout << "Sisa Stok   : "
                 << stok - beli
                 << endl;
        }
        else
        {
            cout << "Stok tidak mencukupi." << endl;
        }

    }

    void estimasiSisaStok(int beli) {

        cout << "\n========== ESTIMASI STOK ==========" << endl;

        if(beli <= stok)
        {
            cout << "Sisa Stok : "
                 << stok - beli
                 << " Galon"
                 << endl;
        }
        else
        {
            cout << "Stok tidak mencukupi." << endl;
        }

    }

    void tampilKategoriHarga() {

        cout << "\nKategori Harga : ";

        if(harga >= 22000)
        {
            cout << "Premium";
        }
        else if(harga >= 20000)
        {
            cout << "Menengah";
        }
        else
        {
            cout << "Ekonomis";
        }

        cout << endl;

    }

    void tampilKualitasAir() {

        cout << "\n========== KUALITAS AIR ==========" << endl;

        cout << "Produk        : "
             << namaProduk
             << endl;

        cout << "Kualitas Air  : "
             << kualitasAir
             << endl;

        cout << "Sumber Air    : "
             << sumberAir
             << endl;

    }

    void ubahKualitasAir() {

        cin.ignore();

        cout << "\nKualitas Air Baru : ";
        getline(cin,kualitasAir);

        cout << "Berhasil diperbarui." << endl;

    }

    void ubahSumberAir() {

        cin.ignore();

        cout << "\nSumber Air Baru : ";
        getline(cin,sumberAir);

        cout << "Berhasil diperbarui." << endl;

    }

    void tampilInformasiLengkap() {

        cout << "\n======================================" << endl;
        cout << "      INFORMASI LENGKAP PRODUK" << endl;
        cout << "======================================" << endl;

        cout << "Nama Produk      : " << namaProduk << endl;
        cout << "Ukuran           : " << ukuran << endl;
        cout << "Jenis            : " << jenis << endl;
        cout << "Harga            : Rp " << harga << endl;
        cout << "Stok             : " << stok << endl;
        cout << "Kategori         : " << kategoriProduk << endl;
        cout << "Kualitas Air     : " << kualitasAir << endl;
        cout << "Sumber Air       : " << sumberAir << endl;
        cout << "Promo            : " << promo << endl;
        cout << "Status Produk    : " << statusProduk << endl;

    }

    void laporanProduk() {

        cout << "\n========== LAPORAN PRODUK ==========" << endl;

        cout << "Nama Produk : "
             << namaProduk
             << endl;

        cout << "Harga       : Rp "
             << harga
             << endl;

        cout << "Stok        : "
             << stok
             << endl;

        cout << "Nilai Stok  : Rp "
             << harga * stok
             << endl;

    }

    void statistikProduk() {

        cout << "\n========== STATISTIK ==========" << endl;

        cout << "Produk Aktif : ";

        if(tersedia)
        {
            cout << "Ya";
        }
        else
        {
            cout << "Tidak";
        }

        cout << endl;

        cout << "Kategori : "
             << kategoriProduk
             << endl;

        cout << "Status   : "
             << statusProduk
             << endl;

    }

    void resetInformasiProduk() {

        kualitasAir = "Standar";
        sumberAir = "Mata Air Pegunungan";
        kategoriProduk = "Reguler";
        statusProduk = "Tersedia";
        promo = "Tidak Ada";
        diskon = 0;
        tersedia = true;

        cout << "\nInformasi produk berhasil direset." << endl;

    }
    
        void simulasiRestok() {

        int tambah;

        cout << "\nJumlah Restok : ";
        cin >> tambah;

        if(tambah > 0)
        {
            cout << "Stok Sebelum : "
                 << stok
                 << endl;

            cout << "Stok Sesudah : "
                 << stok + tambah
                 << endl;
        }
        else
        {
            cout << "Jumlah restok tidak valid." << endl;
        }

    }

    void cekStokMinimum() {

        cout << "\n========== CEK STOK ==========" << endl;

        if(stok <= 10)
        {
            cout << "Segera lakukan restok." << endl;
        }
        else
        {
            cout << "Stok masih aman." << endl;
        }

    }

    void cekStokMaksimum() {

        cout << "\n========== KAPASITAS STOK ==========" << endl;

        if(stok >= 100)
        {
            cout << "Gudang hampir penuh." << endl;
        }
        else
        {
            cout << "Gudang masih tersedia." << endl;
        }

    }

    void hitungKeuntungan(int modal) {

        cout << "\n========== ESTIMASI KEUNTUNGAN ==========" << endl;

        cout << "Modal       : Rp " << modal << endl;
        cout << "Harga Jual  : Rp " << harga << endl;
        cout << "Keuntungan  : Rp " << harga - modal << endl;

    }

    void validasiProduk() {

        cout << "\n========== VALIDASI ==========" << endl;

        if(namaProduk != "" && harga > 0)
        {
            cout << "Data produk valid." << endl;
        }
        else
        {
            cout << "Data produk belum lengkap." << endl;
        }

    }

    void tampilDataSingkat() {

        cout << "\n"
             << namaProduk
             << " | Rp "
             << harga
             << " | "
             << stok
             << " Galon"
             << endl;

    }

    void setNamaProduk(string nama) {

        namaProduk = nama;

    }

    void setHarga(int h) {

        harga = h;

    }

    void setUkuran(string u) {

        ukuran = u;

    }

    void setJenis(string j) {

        jenis = j;

    }

    void setStok(int s) {

        stok = s;

    }

    void setKategoriProduk(string k) {

        kategoriProduk = k;

    }

    void setStatusProduk(string s) {

        statusProduk = s;

    }

    void setPromo(string p) {

        promo = p;

    }

    void setDiskon(int d) {

        diskon = d;

    }

    void setKualitasAir(string k) {

        kualitasAir = k;

    }

    void setSumberAir(string s) {

        sumberAir = s;

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

    string getKategoriProduk() {

        return kategoriProduk;

    }

    string getStatusProduk() {

        return statusProduk;

    }

    string getPromo() {

        return promo;

    }

    int getDiskon() {

        return diskon;

    }

    string getKualitasAir() {

        return kualitasAir;

    }

    string getSumberAir() {

        return sumberAir;

    }

};

class Pesanan {
private:

    string idPesanan;
    string kodePesanan;
    string tanggalPesanan;
    string metodePengiriman;
    string statusPesanan;
    string statusPembayaran;
    string alamatTujuan;
    string catatanPesanan;
    string estimasiSelesai;

    Pelanggan pelanggan;
    AirGalon produk;

    int jumlah;
    int ongkir;
    int totalHarga;
    int totalBayar;
    int diskon;
    int pajak;
    int biayaAdmin;

    bool statusValid;

public:

    Pesanan() {

        idPesanan = "";
        kodePesanan = "";
        tanggalPesanan = "";

        metodePengiriman = "";
        statusPesanan = "Belum Diproses";
        statusPembayaran = "Belum Dibayar";

        alamatTujuan = "";
        catatanPesanan = "-";
        estimasiSelesai = "20 Menit";

        jumlah = 0;
        ongkir = 0;
        totalHarga = 0;
        totalBayar = 0;

        diskon = 0;
        pajak = 0;
        biayaAdmin = 2000;

        statusValid = false;

    }

    void setPelanggan(Pelanggan p) {

        pelanggan = p;

    }

    void setProduk(AirGalon p) {

        produk = p;

    }

    void buatKodePesanan() {

        kodePesanan = "PS-" + idPesanan;

    }

    void hitungTotalHarga() {

        totalHarga = produk.getHarga() * jumlah;

        totalBayar = totalHarga + ongkir;

    }
    
        void hitungDiskon() {

        if(jumlah >= 10)
        {
            diskon = totalHarga * 10 / 100;
        }
        else if(jumlah >= 5)
        {
            diskon = totalHarga * 5 / 100;
        }
        else
        {
            diskon = 0;
        }

    }

    void hitungPajak() {

        pajak = totalHarga * 11 / 100;

    }

    void hitungTotalBayar() {

        hitungDiskon();

        hitungPajak();

        totalBayar = totalHarga
                   - diskon
                   + pajak
                   + ongkir
                   + biayaAdmin;

    }

    void validasiPesanan() {

        if(jumlah > 0 && produk.getHarga() > 0)
        {
            statusValid = true;
        }
        else
        {
            statusValid = false;
        }

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

        buatKodePesanan();

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

        cin.ignore();

        cout << "Catatan Pesanan   : ";
        getline(cin,catatanPesanan);

        hitungTotalHarga();

        hitungTotalBayar();

        validasiPesanan();

        statusPesanan = "Sedang Diproses";

        statusPembayaran = "Belum Dibayar";

        estimasiSelesai = "20 Menit";

    }

    void tampilRingkasanPesanan() {

        cout << "\n======================================" << endl;
        cout << "       RINGKASAN PESANAN" << endl;
        cout << "======================================" << endl;

        cout << "Kode Pesanan      : " << kodePesanan << endl;
        cout << "Nama Pelanggan    : " << pelanggan.getNama() << endl;
        cout << "Produk            : " << produk.getNamaProduk() << endl;
        cout << "Jumlah            : " << jumlah << " Galon" << endl;
        cout << "Subtotal          : Rp " << totalHarga << endl;
        cout << "Diskon            : Rp " << diskon << endl;
        cout << "Pajak             : Rp " << pajak << endl;
        cout << "Biaya Admin       : Rp " << biayaAdmin << endl;
        cout << "Ongkir            : Rp " << ongkir << endl;
        cout << "Total Bayar       : Rp " << totalBayar << endl;
        cout << "Estimasi          : " << estimasiSelesai << endl;
        cout << "Status            : " << statusPesanan << endl;

    }
    
        void tampilPesanan() {

        cout << "\n======================================" << endl;
        cout << "          DATA PESANAN" << endl;
        cout << "======================================" << endl;

        cout << "ID Pesanan         : " << idPesanan << endl;
        cout << "Kode Pesanan       : " << kodePesanan << endl;
        cout << "Tanggal            : " << tanggalPesanan << endl;

        cout << "\n===== DATA PELANGGAN =====" << endl;
        cout << "Nama Pelanggan     : " << pelanggan.getNama() << endl;
        cout << "Alamat Tujuan      : " << alamatTujuan << endl;

        cout << "\n===== DATA PRODUK =====" << endl;
        cout << "Produk             : " << produk.getNamaProduk() << endl;
        cout << "Ukuran             : " << produk.getUkuran() << endl;
        cout << "Jenis              : " << produk.getJenis() << endl;
        cout << "Harga Satuan       : Rp " << produk.getHarga() << endl;

        cout << "\n===== DETAIL PESANAN =====" << endl;
        cout << "Jumlah Galon       : " << jumlah << endl;
        cout << "Subtotal           : Rp " << totalHarga << endl;
        cout << "Diskon             : Rp " << diskon << endl;
        cout << "Pajak              : Rp " << pajak << endl;
        cout << "Biaya Admin        : Rp " << biayaAdmin << endl;
        cout << "Ongkir             : Rp " << ongkir << endl;
        cout << "Total Bayar        : Rp " << totalBayar << endl;

        cout << "\n===== INFORMASI =====" << endl;
        cout << "Metode Kirim       : " << metodePengiriman << endl;
        cout << "Estimasi Sampai    : " << estimasiSelesai << endl;
        cout << "Status Pesanan     : " << statusPesanan << endl;
        cout << "Status Pembayaran  : " << statusPembayaran << endl;
        cout << "Catatan            : " << catatanPesanan << endl;

        cout << "Validasi Data      : ";

        if(statusValid)
        {
            cout << "Valid";
        }
        else
        {
            cout << "Tidak Valid";
        }

        cout << endl;

    }

    void ubahJumlah() {

        cout << "\nJumlah Baru : ";
        cin >> jumlah;

        while(jumlah <= 0)
        {
            cout << "Jumlah harus lebih dari 0 : ";
            cin >> jumlah;
        }

        hitungTotalHarga();
        hitungTotalBayar();

        cout << "Jumlah berhasil diubah." << endl;

    }

    void ubahOngkir() {

        cout << "\nOngkir Baru : ";
        cin >> ongkir;

        while(ongkir < 0)
        {
            cout << "Ongkir tidak boleh negatif : ";
            cin >> ongkir;
        }

        hitungTotalBayar();

        cout << "Ongkir berhasil diubah." << endl;

    }

    void ubahMetodePengiriman() {

        cin.ignore();

        cout << "\nMetode Pengiriman Baru : ";
        getline(cin,metodePengiriman);

        cout << "Metode pengiriman berhasil diubah." << endl;

    }

    void ubahCatatanPesanan() {

        cin.ignore();

        cout << "\nCatatan Baru : ";
        getline(cin,catatanPesanan);

        cout << "Catatan berhasil diubah." << endl;

    }

    void tampilCatatanPesanan() {

        cout << "\n========== CATATAN PESANAN ==========" << endl;

        cout << catatanPesanan << endl;

    }

    void ubahStatusPembayaran(string status) {

        statusPembayaran = status;

    }

    void tampilStatusLengkap() {

        cout << "\n========== STATUS PESANAN ==========" << endl;

        cout << "Status Pesanan     : "
             << statusPesanan
             << endl;

        cout << "Status Pembayaran  : "
             << statusPembayaran
             << endl;

        cout << "Estimasi           : "
             << estimasiSelesai
             << endl;

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
    
        void simulasiPesanan() {

        int beli;

        cout << "\nJumlah Galon Simulasi : ";
        cin >> beli;

        int subtotal = produk.getHarga() * beli;
        int diskonSimulasi = 0;

        if(beli >= 10)
        {
            diskonSimulasi = subtotal * 10 / 100;
        }
        else if(beli >= 5)
        {
            diskonSimulasi = subtotal * 5 / 100;
        }

        int pajakSimulasi = subtotal * 11 / 100;

        int total = subtotal
                  - diskonSimulasi
                  + pajakSimulasi
                  + ongkir
                  + biayaAdmin;

        cout << "\nSubtotal      : Rp " << subtotal << endl;
        cout << "Diskon        : Rp " << diskonSimulasi << endl;
        cout << "Pajak         : Rp " << pajakSimulasi << endl;
        cout << "Total Bayar   : Rp " << total << endl;

    }

    void cekPesanan() {

        cout << "\n========== CEK PESANAN ==========" << endl;

        if(statusValid)
        {
            cout << "Pesanan valid." << endl;
        }
        else
        {
            cout << "Pesanan belum valid." << endl;
        }

    }

    void laporanPesanan() {

        cout << "\n========== LAPORAN PESANAN ==========" << endl;

        cout << "ID Pesanan    : " << idPesanan << endl;
        cout << "Kode Pesanan  : " << kodePesanan << endl;
        cout << "Pelanggan     : " << pelanggan.getNama() << endl;
        cout << "Produk        : " << produk.getNamaProduk() << endl;
        cout << "Jumlah        : " << jumlah << endl;
        cout << "Total Bayar   : Rp " << totalBayar << endl;

    }

    void statistikPesanan() {

        cout << "\n========== STATISTIK ==========" << endl;

        cout << "Jumlah Galon      : " << jumlah << endl;
        cout << "Subtotal          : Rp " << totalHarga << endl;
        cout << "Diskon            : Rp " << diskon << endl;
        cout << "Pajak             : Rp " << pajak << endl;
        cout << "Total Bayar       : Rp " << totalBayar << endl;

    }

    void resetPesanan() {

        idPesanan = "";
        kodePesanan = "";
        tanggalPesanan = "";
        metodePengiriman = "";
        statusPesanan = "Belum Diproses";
        statusPembayaran = "Belum Dibayar";
        alamatTujuan = "";
        catatanPesanan = "-";
        estimasiSelesai = "20 Menit";

        jumlah = 0;
        ongkir = 0;
        totalHarga = 0;
        totalBayar = 0;
        diskon = 0;
        pajak = 0;
        biayaAdmin = 2000;

        statusValid = false;

    }

    string getIdPesanan() {

        return idPesanan;

    }

    string getKodePesanan() {

        return kodePesanan;

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

    string getStatusPembayaran() {

        return statusPembayaran;

    }

    string getCatatanPesanan() {

        return catatanPesanan;

    }

    string getEstimasiSelesai() {

        return estimasiSelesai;

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

    int getDiskon() {

        return diskon;

    }

    int getPajak() {

        return pajak;

    }

    int getBiayaAdmin() {

        return biayaAdmin;

    }

    bool getStatusValid() {

        return statusValid;

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

    string kodePembayaran;
    string nomorReferensi;
    string namaBank;
    string namaEWallet;
    string namaKasir;
    string catatanPembayaran;

    Pesanan pesanan;

    int totalBayar;
    int uangBayar;
    int kembalian;
    int adminFee;
    int pajak;
    int diskon;
    int cashback;
    int totalAkhir;

    bool berhasil;
    bool cetakStruk;

public:

    Pembayaran() {

        idPembayaran = "";
        tanggalPembayaran = "";
        metodePembayaran = "";
        statusPembayaran = "Belum Lunas";

        kodePembayaran = "";
        nomorReferensi = "";
        namaBank = "";
        namaEWallet = "";

        // Nama kasir otomatis dari sistem
        namaKasir = "Asep";

        catatanPembayaran = "";

        totalBayar = 0;
        uangBayar = 0;
        kembalian = 0;

        adminFee = 0;
        pajak = 0;
        diskon = 0;
        cashback = 0;
        totalAkhir = 0;

        berhasil = false;
        cetakStruk = false;

    }

    ~Pembayaran() {

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

        // Pajak 11%
        pajak = totalBayar * 11 / 100;

        // Admin Fee berdasarkan metode pembayaran
        if(metodePembayaran == "Tunai")
        {
            adminFee = 0;
        }
        else if(metodePembayaran == "Transfer Bank")
        {
            adminFee = 2500;
        }
        else if(metodePembayaran == "E-Wallet")
        {
            adminFee = 1500;
        }
        else
        {
            adminFee = 0;
        }

        // Diskon otomatis
        if(totalBayar >= 100000)
        {
            diskon = 10000;
        }
        else
        {
            diskon = 0;
        }

        // Cashback otomatis
        if(metodePembayaran == "E-Wallet")
        {
            cashback = 5000;
        }
        else
        {
            cashback = 0;
        }

        totalAkhir = totalBayar
                   + pajak
                   + adminFee
                   - diskon
                   - cashback;

    }
    
        void inputPembayaran(Pesanan p) {

        pesanan = p;

        cin.ignore();

        cout << "\n==========================================" << endl;
        cout << "             PEMBAYARAN" << endl;
        cout << "==========================================" << endl;

        cout << "Tanggal Pembayaran : ";
        getline(cin, tanggalPembayaran);

        idPembayaran = "PB001";
        kodePembayaran = "PAY-PB001";
        namaKasir = "Asep";

        cout << "ID Pembayaran      : " << idPembayaran << endl;
        cout << "Kode Pembayaran    : " << kodePembayaran << endl;
        cout << "Nama Kasir         : " << namaKasir << endl;

        cout << endl;

        cout << "1. Tunai" << endl;
        cout << "2. Transfer Bank" << endl;
        cout << "3. E-Wallet" << endl;

        int pilih;

        cout << "Pilih Metode : ";
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

        if(metodePembayaran == "Transfer Bank")
        {

            cin.ignore();

            cout << "Nama Bank         : ";
            getline(cin, namaBank);

            nomorReferensi = "TRF-" + idPembayaran;

        }
        else if(metodePembayaran == "E-Wallet")
        {

            cin.ignore();

            cout << "Nama E-Wallet     : ";
            getline(cin, namaEWallet);

            nomorReferensi = "EWL-" + idPembayaran;

        }
        else
        {

            nomorReferensi = "-";

        }

        hitungTotalBayar();

        cout << "\n==========================================" << endl;
        cout << "RINCIAN PEMBAYARAN" << endl;
        cout << "==========================================" << endl;

        cout << "Subtotal          : Rp " << totalBayar << endl;
        cout << "Pajak             : Rp " << pajak << endl;
        cout << "Admin Fee         : Rp " << adminFee << endl;
        cout << "Diskon            : Rp " << diskon << endl;
        cout << "Cashback          : Rp " << cashback << endl;
        cout << "Total Akhir       : Rp " << totalAkhir << endl;

        cout << "\nUang Bayar        : Rp ";
        cin >> uangBayar;

        while(uangBayar < totalAkhir)
        {
            cout << "Uang kurang, masukkan lagi : Rp ";
            cin >> uangBayar;
        }

        kembalian = uangBayar - totalAkhir;

        statusPembayaran = "Lunas";

        berhasil = true;

        cetakStruk = true;

        cout << "\nPembayaran berhasil." << endl;

    }
    
        void tampilPembayaran() {

        cout << "\n==========================================" << endl;
        cout << "           DATA PEMBAYARAN" << endl;
        cout << "==========================================" << endl;

        cout << "ID Pembayaran     : " << idPembayaran << endl;
        cout << "Tanggal           : " << tanggalPembayaran << endl;
        cout << "Nama Kasir        : " << namaKasir << endl;
        cout << "Kode Pembayaran   : " << kodePembayaran << endl;
        cout << "Metode            : " << metodePembayaran << endl;

        if(metodePembayaran == "Transfer Bank")
        {
            cout << "Bank              : " << namaBank << endl;
            cout << "Referensi         : " << nomorReferensi << endl;
        }

        if(metodePembayaran == "E-Wallet")
        {
            cout << "E-Wallet          : " << namaEWallet << endl;
            cout << "Referensi         : " << nomorReferensi << endl;
        }

        cout << "Subtotal          : Rp " << totalBayar << endl;
        cout << "Pajak             : Rp " << pajak << endl;
        cout << "Admin Fee         : Rp " << adminFee << endl;
        cout << "Diskon            : Rp " << diskon << endl;
        cout << "Cashback          : Rp " << cashback << endl;
        cout << "Total Akhir       : Rp " << totalAkhir << endl;
        cout << "Uang Bayar        : Rp " << uangBayar << endl;
        cout << "Kembalian         : Rp " << kembalian << endl;
        cout << "Status            : " << statusPembayaran << endl;

    }

    void tampilRingkasanPembayaran() {

        cout << "\n==========================================" << endl;
        cout << "      RINGKASAN PEMBAYARAN" << endl;
        cout << "==========================================" << endl;

        cout << "ID Pembayaran     : " << idPembayaran << endl;
        cout << "Kode Pembayaran   : " << kodePembayaran << endl;
        cout << "Nama Kasir        : " << namaKasir << endl;
        cout << "Metode            : " << metodePembayaran << endl;
        cout << "Total Akhir       : Rp " << totalAkhir << endl;
        cout << "Status            : " << statusPembayaran << endl;

    }

    void tampilStrukPembayaran() {

        cout << "\n==========================================" << endl;
        cout << "          STRUK PEMBAYARAN" << endl;
        cout << "==========================================" << endl;

        cout << "ID Pembayaran     : " << idPembayaran << endl;
        cout << "Kode Pembayaran   : " << kodePembayaran << endl;
        cout << "Tanggal           : " << tanggalPembayaran << endl;
        cout << "Kasir             : " << namaKasir << endl;
        cout << "Metode            : " << metodePembayaran << endl;
        cout << "Subtotal          : Rp " << totalBayar << endl;
        cout << "Pajak             : Rp " << pajak << endl;
        cout << "Admin Fee         : Rp " << adminFee << endl;
        cout << "Diskon            : Rp " << diskon << endl;
        cout << "Cashback          : Rp " << cashback << endl;
        cout << "Total Bayar       : Rp " << totalAkhir << endl;
        cout << "Uang Bayar        : Rp " << uangBayar << endl;
        cout << "Kembalian         : Rp " << kembalian << endl;
        cout << "Status            : " << statusPembayaran << endl;
        cout << "==========================================" << endl;

    }

    void cekStatusPembayaran() {

        cout << "\nStatus Pembayaran : "
             << statusPembayaran
             << endl;

    }

    void cekKembalian() {

        cout << "\nKembalian : Rp "
             << kembalian
             << endl;

    }

    void pembayaranBerhasil() {

        statusPembayaran = "Lunas";
        berhasil = true;

        cout << "Pembayaran berhasil." << endl;

    }

    void pembayaranGagal() {

        statusPembayaran = "Gagal";
        berhasil = false;

        cout << "Pembayaran gagal." << endl;

    }

    void batalkanPembayaran() {

        statusPembayaran = "Dibatalkan";
        uangBayar = 0;
        kembalian = 0;
        berhasil = false;

        cout << "Pembayaran berhasil dibatalkan." << endl;

    }
    
        void simulasiPembayaran(int uang) {

        cout << "\n========== SIMULASI PEMBAYARAN ==========" << endl;

        cout << "Total Bayar : Rp " << totalAkhir << endl;
        cout << "Uang Bayar  : Rp " << uang << endl;

        if(uang >= totalAkhir)
        {
            cout << "Kembalian   : Rp "
                 << uang - totalAkhir
                 << endl;
        }
        else
        {
            cout << "Uang masih kurang : Rp "
                 << totalAkhir - uang
                 << endl;
        }

    }

    void validasiPembayaran() {

        if(uangBayar >= totalAkhir)
        {
            cout << "Pembayaran valid." << endl;
        }
        else
        {
            cout << "Pembayaran belum valid." << endl;
        }

    }

    void tampilInformasiPembayaran() {

        cout << "\n========== INFORMASI PEMBAYARAN ==========" << endl;

        cout << "ID Pembayaran : " << idPembayaran << endl;
        cout << "Kode          : " << kodePembayaran << endl;
        cout << "Kasir         : " << namaKasir << endl;
        cout << "Metode        : " << metodePembayaran << endl;
        cout << "Status        : " << statusPembayaran << endl;

        if(metodePembayaran == "Transfer Bank")
        {
            cout << "Bank          : " << namaBank << endl;
            cout << "Referensi     : " << nomorReferensi << endl;
        }

        if(metodePembayaran == "E-Wallet")
        {
            cout << "E-Wallet      : " << namaEWallet << endl;
            cout << "Referensi     : " << nomorReferensi << endl;
        }

    }

    void cetakBuktiPembayaran() {

        if(cetakStruk)
        {
            tampilStrukPembayaran();
        }
        else
        {
            cout << "Struk belum dapat dicetak." << endl;
        }

    }

    void tampilBiayaTambahan() {

        cout << "\n========== BIAYA ==========" << endl;

        cout << "Pajak       : Rp " << pajak << endl;
        cout << "Admin Fee   : Rp " << adminFee << endl;
        cout << "Diskon      : Rp " << diskon << endl;
        cout << "Cashback    : Rp " << cashback << endl;

    }

    void tampilLaporanPembayaran() {

        cout << "\n==========================================" << endl;
        cout << "         LAPORAN PEMBAYARAN" << endl;
        cout << "==========================================" << endl;

        tampilPembayaran();
        tampilBiayaTambahan();

    }

    void tampilStatistikPembayaran() {

        cout << "\n========== STATISTIK PEMBAYARAN ==========" << endl;

        cout << "Status            : " << statusPembayaran << endl;
        cout << "Metode            : " << metodePembayaran << endl;
        cout << "Total Akhir       : Rp " << totalAkhir << endl;
        cout << "Diskon            : Rp " << diskon << endl;
        cout << "Cashback          : Rp " << cashback << endl;

    }

    void tampilDetailBank() {

        cout << "\n========== DETAIL BANK ==========" << endl;

        cout << "Nama Bank         : " << namaBank << endl;
        cout << "No Referensi      : " << nomorReferensi << endl;

    }

    void tampilDetailEWallet() {

        cout << "\n========== DETAIL E-WALLET ==========" << endl;

        cout << "E-Wallet          : " << namaEWallet << endl;
        cout << "No Referensi      : " << nomorReferensi << endl;

    }

    void ubahMetodePembayaran(string metode) {

        metodePembayaran = metode;

        hitungTotalBayar();

        cout << "Metode pembayaran berhasil diubah." << endl;

    }

    void ubahNamaKasir(string nama) {

        namaKasir = nama;

        cout << "Nama kasir berhasil diubah." << endl;

    }

    void tambahDiskon(int nilai) {

        diskon += nilai;

        hitungTotalBayar();

        cout << "Diskon berhasil ditambahkan." << endl;

    }

    void tambahCashback(int nilai) {

        cashback += nilai;

        hitungTotalBayar();

        cout << "Cashback berhasil ditambahkan." << endl;

    }

    void hapusDiskon() {

        diskon = 0;

        hitungTotalBayar();

        cout << "Diskon berhasil dihapus." << endl;

    }

    void hapusCashback() {

        cashback = 0;

        hitungTotalBayar();

        cout << "Cashback berhasil dihapus." << endl;

    }

    void tampilKasir() {

        cout << "\n========== DATA KASIR ==========" << endl;

        cout << "Nama Kasir        : " << namaKasir << endl;
        cout << "Kode Pembayaran   : " << kodePembayaran << endl;

    }
    
        void cekPembayaranBerhasil() {

        if(berhasil)
        {
            cout << "Pembayaran telah berhasil." << endl;
        }
        else
        {
            cout << "Pembayaran belum berhasil." << endl;
        }

    }

    void tampilTotalPembayaran() {

        cout << "\n========== TOTAL PEMBAYARAN ==========" << endl;

        cout << "Subtotal          : Rp " << totalBayar << endl;
        cout << "Pajak             : Rp " << pajak << endl;
        cout << "Admin Fee         : Rp " << adminFee << endl;
        cout << "Diskon            : Rp " << diskon << endl;
        cout << "Cashback          : Rp " << cashback << endl;
        cout << "Total Akhir       : Rp " << totalAkhir << endl;

    }

    void tampilUcapanTerimaKasih() {

        cout << "\n==========================================" << endl;
        cout << "Terima kasih telah melakukan pembayaran." << endl;
        cout << "Semoga pelayanan kami memuaskan." << endl;
        cout << "==========================================" << endl;

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

    string getKodePembayaran() {

        return kodePembayaran;

    }

    string getNomorReferensi() {

        return nomorReferensi;

    }

    string getNamaBank() {

        return namaBank;

    }

    string getNamaEWallet() {

        return namaEWallet;

    }

    string getNamaKasir() {

        return namaKasir;

    }

    string getCatatanPembayaran() {

        return catatanPembayaran;

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

    int getAdminFee() {

        return adminFee;

    }

    int getPajak() {

        return pajak;

    }

    int getDiskon() {

        return diskon;

    }

    int getCashback() {

        return cashback;

    }

    int getTotalAkhir() {

        return totalAkhir;

    }

    bool getStatusBerhasil() {

        return berhasil;

    }

    bool getCetakStruk() {

        return cetakStruk;

    }

    Pesanan getPesanan() {

        return pesanan;

    }

    void setNamaKasir(string nama) {

        namaKasir = nama;

    }

    void setNamaBank(string bank) {

        namaBank = bank;

    }

    void setNamaEWallet(string ewallet) {

        namaEWallet = ewallet;

    }

    void setNomorReferensi(string no) {

        nomorReferensi = no;

    }

    void setKodePembayaran(string kode) {

        kodePembayaran = kode;

    }

    void setDiskon(int nilai) {

        diskon = nilai;

        hitungTotalBayar();

    }

    void setCashback(int nilai) {

        cashback = nilai;

        hitungTotalBayar();

    }

    void setAdminFee(int nilai) {

        adminFee = nilai;

        hitungTotalBayar();

    }

    void setPajak(int nilai) {

        pajak = nilai;

        hitungTotalBayar();

    }

    void setCatatanPembayaran(string catatan) {

        catatanPembayaran = catatan;

    }

    void resetPembayaran() {

        idPembayaran = "";
        tanggalPembayaran = "";
        metodePembayaran = "";
        statusPembayaran = "Belum Lunas";

        kodePembayaran = "";
        nomorReferensi = "";
        namaBank = "";
        namaEWallet = "";

        namaKasir = "Asep";

        catatanPembayaran = "";

        totalBayar = 0;
        uangBayar = 0;
        kembalian = 0;

        adminFee = 2500;
        pajak = 0;
        diskon = 0;
        cashback = 0;
        totalAkhir = 0;

        berhasil = false;
        cetakStruk = false;

        cout << "\nData pembayaran berhasil direset." << endl;

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

        cout << "\n==========================================" << endl;
        cout << "             DETAIL PESANAN" << endl;
        cout << "==========================================" << endl;

        cout << "ID Pesanan          : "
             << pesanan.getIdPesanan() << endl;

        cout << "Tanggal Pesanan     : "
             << pesanan.getTanggalPesanan() << endl;

        cout << "Nama Pelanggan      : "
             << pesanan.getPelanggan().getNama() << endl;

        cout << "Alamat Tujuan       : "
             << pesanan.getAlamatTujuan() << endl;

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

        cout << "Subtotal            : Rp "
             << pesanan.getTotalHarga() << endl;

        cout << "Metode Pengiriman   : "
             << pesanan.getMetodePengiriman() << endl;

        cout << "Ongkir              : Rp "
             << pesanan.getOngkir() << endl;

        cout << "\n==========================================" << endl;
        cout << "            DETAIL PEMBAYARAN" << endl;
        cout << "==========================================" << endl;

        cout << "ID Pembayaran       : "
             << pembayaran.getIdPembayaran() << endl;

        cout << "Kode Pembayaran     : "
             << pembayaran.getKodePembayaran() << endl;

        cout << "Tanggal Pembayaran  : "
             << pembayaran.getTanggalPembayaran() << endl;

        cout << "Nama Kasir          : "
             << pembayaran.getNamaKasir() << endl;

        cout << "Metode Pembayaran   : "
             << pembayaran.getMetodePembayaran() << endl;

        if(pembayaran.getMetodePembayaran() == "Transfer Bank")
        {
            cout << "Nama Bank           : "
                 << pembayaran.getNamaBank() << endl;

            cout << "No Referensi        : "
                 << pembayaran.getNomorReferensi() << endl;
        }

        if(pembayaran.getMetodePembayaran() == "E-Wallet")
        {
            cout << "Nama E-Wallet       : "
                 << pembayaran.getNamaEWallet() << endl;

            cout << "No Referensi        : "
                 << pembayaran.getNomorReferensi() << endl;
        }

        cout << "Subtotal            : Rp "
             << pembayaran.getTotalBayar() << endl;

        cout << "Pajak               : Rp "
             << pembayaran.getPajak() << endl;

        cout << "Admin Fee           : Rp "
             << pembayaran.getAdminFee() << endl;

        cout << "Diskon              : Rp "
             << pembayaran.getDiskon() << endl;

        cout << "Cashback            : Rp "
             << pembayaran.getCashback() << endl;

        cout << "Total Akhir         : Rp "
             << pembayaran.getTotalAkhir() << endl;

        cout << "Uang Bayar          : Rp "
             << pembayaran.getUangBayar() << endl;

        cout << "Kembalian           : Rp "
             << pembayaran.getKembalian() << endl;

        cout << "Status Pembayaran   : "
             << pembayaran.getStatusPembayaran() << endl;

        cout << "==========================================" << endl;

    }
    
        void tampilRingkasan() {

        cout << "\n==========================================" << endl;
        cout << "             RINGKASAN PESANAN" << endl;
        cout << "==========================================" << endl;

        cout << "Pelanggan         : "
             << pesanan.getPelanggan().getNama() << endl;

        cout << "Produk            : "
             << pesanan.getProduk().getNamaProduk() << endl;

        cout << "Jumlah            : "
             << pesanan.getJumlah() << endl;

        cout << "Metode Kirim      : "
             << pesanan.getMetodePengiriman() << endl;

        cout << "Total Bayar       : Rp "
             << pembayaran.getTotalAkhir() << endl;

        cout << "Status Pembayaran : "
             << pembayaran.getStatusPembayaran() << endl;

        cout << "==========================================" << endl;

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

    void tampilStatusLengkap() {

        cout << "\n==========================================" << endl;
        cout << "            STATUS PESANAN" << endl;
        cout << "==========================================" << endl;

        cout << "ID Pesanan         : "
             << pesanan.getIdPesanan() << endl;

        cout << "Status Pesanan     : "
             << pesanan.getStatusPesanan() << endl;

        cout << "Status Pembayaran  : "
             << pembayaran.getStatusPembayaran() << endl;

        cout << "==========================================" << endl;

    }

    void tampilInformasiSingkat() {

        cout << "\n========== INFORMASI ==========" << endl;

        cout << "Nama Pelanggan : "
             << pesanan.getPelanggan().getNama() << endl;

        cout << "Produk         : "
             << pesanan.getProduk().getNamaProduk() << endl;

        cout << "Total Bayar    : Rp "
             << pembayaran.getTotalAkhir() << endl;

        cout << "Kasir          : "
             << pembayaran.getNamaKasir() << endl;

    }

    void resetDetailPesanan() {

        pesanan.resetPesanan();
        pembayaran.resetPembayaran();

        cout << "\nDetail pesanan berhasil direset." << endl;

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

    int totalPengiriman;
    int pengirimanSelesai;
    int pengirimanBatal;

    float rating;

    string shift;
    string jamMasuk;
    string jamPulang;

    string kendaraanCadangan;
    string wilayahCadangan;

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

        totalPengiriman = 0;
        pengirimanSelesai = 0;
        pengirimanBatal = 0;

        rating = 5.0;

        shift = "Pagi";
        jamMasuk = "08.00";
        jamPulang = "17.00";

        kendaraanCadangan = "-";
        wilayahCadangan = "-";

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

        id = idKurir[pilihan - 1];
        nama = namaKurir[pilihan - 1];
        jk = jenisKelamin[pilihan - 1];
        hp = nomorHP[pilihan - 1];
        kendaraanDipilih = kendaraan[pilihan - 1];
        platDipilih = platNomor[pilihan - 1];
        wilayahDipilih = wilayah[pilihan - 1];

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

    void tampilProfilKurir() {

        cout << "\n======================================" << endl;
        cout << "         PROFIL KURIR" << endl;
        cout << "======================================" << endl;

        cout << "ID Kurir        : " << id << endl;
        cout << "Nama Kurir      : " << nama << endl;
        cout << "Jenis Kelamin   : " << jk << endl;
        cout << "Nomor HP        : " << hp << endl;
        cout << "Kendaraan       : " << kendaraanDipilih << endl;
        cout << "Plat Nomor      : " << platDipilih << endl;
        cout << "Wilayah         : " << wilayahDipilih << endl;
        cout << "Status          : " << statusKurir << endl;

    }

    void tampilKontakKurir() {

        cout << "\n======================================" << endl;
        cout << "         KONTAK KURIR" << endl;
        cout << "======================================" << endl;

        cout << "Nama Kurir      : " << nama << endl;
        cout << "Nomor HP        : " << hp << endl;
        cout << "Wilayah         : " << wilayahDipilih << endl;

    }
    
        void tampilKendaraanKurir() {

        cout << "\n======================================" << endl;
        cout << "       KENDARAAN KURIR" << endl;
        cout << "======================================" << endl;

        cout << "Nama Kurir      : " << nama << endl;
        cout << "Kendaraan       : " << kendaraanDipilih << endl;
        cout << "Plat Nomor      : " << platDipilih << endl;
        cout << "Status          : " << statusKurir << endl;

    }

    void tampilWilayahKurir() {

        cout << "\n======================================" << endl;
        cout << "        WILAYAH KURIR" << endl;
        cout << "======================================" << endl;

        cout << "Nama Kurir      : " << nama << endl;
        cout << "Wilayah Tugas   : " << wilayahDipilih << endl;
        cout << "Wilayah Backup  : " << wilayahCadangan << endl;

    }

    void tampilRingkasanKurir() {

        cout << "\n======================================" << endl;
        cout << "       RINGKASAN KURIR" << endl;
        cout << "======================================" << endl;

        cout << "ID Kurir        : " << id << endl;
        cout << "Nama Kurir      : " << nama << endl;
        cout << "Kendaraan       : " << kendaraanDipilih << endl;
        cout << "Wilayah         : " << wilayahDipilih << endl;
        cout << "Status          : " << statusKurir << endl;
        cout << "Rating          : " << rating << endl;

    }

    void tampilStatistikKurir() {

        cout << "\n======================================" << endl;
        cout << "       STATISTIK KURIR" << endl;
        cout << "======================================" << endl;

        cout << "Nama Kurir              : " << nama << endl;
        cout << "Total Pengiriman        : " << totalPengiriman << endl;
        cout << "Pengiriman Selesai      : " << pengirimanSelesai << endl;
        cout << "Pengiriman Batal        : " << pengirimanBatal << endl;
        cout << "Rating                  : " << rating << endl;

    }

    void tampilShiftKerja() {

        cout << "\n======================================" << endl;
        cout << "         SHIFT KERJA" << endl;
        cout << "======================================" << endl;

        cout << "Nama Kurir      : " << nama << endl;
        cout << "Shift           : " << shift << endl;
        cout << "Jam Masuk       : " << jamMasuk << endl;
        cout << "Jam Pulang      : " << jamPulang << endl;

    }

    void tampilRiwayatKurir() {

        cout << "\n======================================" << endl;
        cout << "       RIWAYAT KURIR" << endl;
        cout << "======================================" << endl;

        cout << "Nama Kurir              : " << nama << endl;
        cout << "Total Pengiriman        : " << totalPengiriman << endl;
        cout << "Pengiriman Berhasil     : " << pengirimanSelesai << endl;
        cout << "Pengiriman Batal        : " << pengirimanBatal << endl;

    }

    void tampilRatingKurir() {

        cout << "\n======================================" << endl;
        cout << "        RATING KURIR" << endl;
        cout << "======================================" << endl;

        cout << "Nama Kurir      : " << nama << endl;
        cout << "Rating          : " << rating << " / 5.0" << endl;

    }

    void mulaiBertugas() {

        statusKurir = "Sedang Bertugas";

    }

    void selesaiBertugas() {

        statusKurir = "Selesai Bertugas";
        totalPengiriman++;
        pengirimanSelesai++;

    }

    void batalkanPengiriman() {

        statusKurir = "Pengiriman Dibatalkan";
        totalPengiriman++;
        pengirimanBatal++;

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

        cout << "Status Bertugas : " << statusKurir << endl;

    }

    void tambahPengiriman() {

        totalPengiriman++;

    }

    void tambahPengirimanSelesai() {

        pengirimanSelesai++;

    }

    void tambahPengirimanBatal() {

        pengirimanBatal++;

    }

    void ubahRating(float nilai) {

        if(nilai >= 0 && nilai <= 5)
        {
            rating = nilai;
        }

    }

    void ubahShift(string s) {

        shift = s;

    }

    void ubahJamMasuk(string jam) {

        jamMasuk = jam;

    }

    void ubahJamPulang(string jam) {

        jamPulang = jam;

    }

    void ubahNomorHP(string nomor) {

        hp = nomor;

    }

    void ubahWilayah(string wilayahBaru) {

        wilayahDipilih = wilayahBaru;

    }

    void ubahWilayahCadangan(string wilayahBaru) {

        wilayahCadangan = wilayahBaru;

    }

    void ubahKendaraan(string kendaraanBaru) {

        kendaraanDipilih = kendaraanBaru;

    }

    void ubahKendaraanCadangan(string kendaraanBaru) {

        kendaraanCadangan = kendaraanBaru;

    }

    void laporanKurir() {

        cout << "\n======================================" << endl;
        cout << "         LAPORAN KURIR" << endl;
        cout << "======================================" << endl;

        cout << "Nama Kurir            : " << nama << endl;
        cout << "Status                : " << statusKurir << endl;
        cout << "Wilayah               : " << wilayahDipilih << endl;
        cout << "Total Pengiriman      : " << totalPengiriman << endl;
        cout << "Pengiriman Selesai    : " << pengirimanSelesai << endl;
        cout << "Pengiriman Batal      : " << pengirimanBatal << endl;
        cout << "Rating                : " << rating << endl;

    }

    bool validasiKurir() {

        if(nama == "" || id == "")
        {
            return false;
        }

        return true;

    }

    void resetStatistik() {

        totalPengiriman = 0;
        pengirimanSelesai = 0;
        pengirimanBatal = 0;

        rating = 5.0;

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

        totalPengiriman = 0;
        pengirimanSelesai = 0;
        pengirimanBatal = 0;

        rating = 5.0;

        shift = "Pagi";
        jamMasuk = "08.00";
        jamPulang = "17.00";

        kendaraanCadangan = "-";
        wilayahCadangan = "-";

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

    string getKendaraanCadangan() {

        return kendaraanCadangan;

    }

    string getPlatNomor() {

        return platDipilih;

    }

    string getWilayah() {

        return wilayahDipilih;

    }

    string getWilayahCadangan() {

        return wilayahCadangan;

    }

    string getStatusKurir() {

        return statusKurir;

    }

    string getShift() {

        return shift;

    }

    string getJamMasuk() {

        return jamMasuk;

    }

    string getJamPulang() {

        return jamPulang;

    }

    int getTotalPengiriman() {

        return totalPengiriman;

    }

    int getPengirimanSelesai() {

        return pengirimanSelesai;

    }

    int getPengirimanBatal() {

        return pengirimanBatal;

    }

    float getRating() {

        return rating;

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
        cout << " 1. Register Akun" << endl;
        cout << " 2. Login" << endl;
        cout << " 3. Input Data Admin" << endl;
        cout << " 4. Input Data Pelanggan" << endl;
        cout << " 5. Data Produk" << endl;
        cout << " 6. Data Air Galon" << endl;
        cout << " 7. Buat Pesanan" << endl;
        cout << " 8. Pembayaran" << endl;
        cout << " 9. detail pesanan" << endl;
        cout << " 10. Data Kurir" << endl;
        cout << " 11. Pengiriman" << endl;
        cout << " 12. Transaksi" << endl;
        cout << "==================================================" << endl;
        cout << "0. Keluar" << endl;
        cout << "==================================================" << endl;
        cout << "Pilih  : ";
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
