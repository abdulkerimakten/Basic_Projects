can_hesap = {
    "ad": "Can Hacı",
    "hesapno": "1224241",
    "anahesap": 4000,
    "ekhesap": 2000
    }


kerim_hesap = {
    "ad": "Kerim Akten",
    "hesapno": "2402040",
    "anahesap": 2000,
    "ekhesap": 1000
}

def para_cek(hesap: dict, miktar: int):
    while True:
        kartı_tak = int(input("""kartı takınız lütfen: 
                0 = Takma
                1 = Tak
                2 = ekran açık
                socket: """))
        if kartı_tak == 1:
            print("Kart Aktif. Hoşgeldiniz :):):):)")
            print(10*"*")
            print(f"Merhaba Sayın {hesap['ad']} istediğiniz miktar {miktar} TL.")
            print(10*"*")

            if hesap["anahesap"] >= miktar:
                hesap["anahesap"] = hesap['anahesap'] - miktar 
                print(f"Paranızı alabilirsiniz. Kalan miktar. Ana hesap: {hesap['anahesap']} TL ve ek hesap: {hesap['ekhesap']} TL.")
                print(10*"*")
            
            else:
                print(f"Malesef ana hesabınızda yeterli para yok!!!! ana hesap: {hesap['anahesap']} TL. Ek hesap kontrol ediliyor...")
                toplam = hesap["ekhesap"] + hesap["anahesap"]
                if toplam >= miktar:
                    sorgula = input(f"Ek hesapta {hesap['ekhesap']} TL para var kullanmak istermisin? Y/N: ")
                    if sorgula == "y":
                        miktar -= hesap["anahesap"]
                        hesap["anahesap"] = 0
                        ekhesaptankullanılacak = miktar
                        if ekhesaptankullanılacak < hesap["ekhesap"]:
                            hesap["ekhesap"] -= ekhesaptankullanılacak
                            print(f"Paranız hazırlanıyot. Ek hesapta kalan {hesap['ekhesap']} TL. Ana hesap: {hesap['anahesap']}")
                        elif ekhesaptankullanılacak == hesap["ekhesap"]:
                            hesap["ekhesap"] = 0
                            print(f"Paranız hazırlanıyor. Ek hesapta para tükendi kalan: {hesap['ekhesap']} TL")
                        else:
                            print("Ek hesaptaki para da yetmiyor ÜZGÜNÜZ...")
                        
                
                    else:
                        print(f"""
                        Kartınız iade ediliyor.\n 
                        Mevcut para durumu\n
                        -----> ana hesap: {hesap['anahesap']} TL
                        -----> ek hesap: {hesap['ekhesap']} TL""")
                    
        
                else:
                    print(f"Malesef hesabınızdaki ek hesap + ana hesap toplamı olan {toplam} TL de yeterli değil. Mevcut para durumu  --> ana hesap: {hesap['anahesap']}, ek hesap: {hesap['ekhesap']} TL")
        elif kartı_tak == 2:
            print("Hala ana ekrandasın")
        elif kartı_tak == 0:
            print("Kartsız işlem olmaz güle güle")
            print(10*"*")
            break
        
işlem_hesabı = input("Hesab adı: ")
işlem_parası = int(input("Ne kadar: "))
para_cek(eval(işlem_hesabı), işlem_parası)
