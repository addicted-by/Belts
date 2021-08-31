#include <algorithm>
#include <functional>
#include <iostream>
#include <locale>
#include <map>
#include <sstream>
#include <string>
#include <windows.h>
#include <iterator>

typedef std::string  T_str;

enum  T_litco
{
    _1_LITCO,
    _2_LITCO,
    _3_LITCO
};

enum  T_chislo
{
    ED_CHISLO,
    MNOZH_CHISLO
};
enum  T_rod
{
    MUZH_ROD,
    ZHEN_ROD,
    SREDN_ROD,
    NET_RODA
};

struct  T_rus_pers_pron_prop
{
    T_litco   litco_;
    T_chislo  chislo_;
    T_rod     rod_;
    //-----------------------------------------------------------------------------------
    T_rus_pers_pron_prop
            (
                    T_litco   litco   = T_litco(),
                    T_chislo  chislo  = T_chislo(),
                    T_rod     rod     = T_rod()
            )
            : litco_    (litco),
              chislo_   (chislo),
              rod_      (rod)
    {}
};

typedef std::map<T_str, T_rus_pers_pron_prop>  T_map;

T_str  from_DOS(T_str  DOS_string)
{
    char buf[1000000];
    OemToCharA(DOS_string.c_str(), buf);
    return buf;
}
/////////////////////////////////////////////////////////////////////////////////////////
void  fill_map(T_map&  map)
{
    map["я"   ]  = T_rus_pers_pron_prop(_1_LITCO, ED_CHISLO,  NET_RODA);
    map["меня"]  = T_rus_pers_pron_prop(_1_LITCO, ED_CHISLO,   NET_RODA);
    map["мне" ]  = T_rus_pers_pron_prop(_1_LITCO, ED_CHISLO, NET_RODA);
    map["меня"]  = T_rus_pers_pron_prop(_1_LITCO, ED_CHISLO,  NET_RODA);
    map["мной"]  = T_rus_pers_pron_prop(_1_LITCO, ED_CHISLO,  NET_RODA);
    map["мною"]  = T_rus_pers_pron_prop(_1_LITCO, ED_CHISLO, NET_RODA);
    map["мне" ]  = T_rus_pers_pron_prop(_1_LITCO, ED_CHISLO, NET_RODA);

    map["ты"  ]  = T_rus_pers_pron_prop(_2_LITCO, ED_CHISLO, NET_RODA);
    map["меня"]  = T_rus_pers_pron_prop(_2_LITCO, ED_CHISLO, NET_RODA);
    map["мне" ]  = T_rus_pers_pron_prop(_2_LITCO, ED_CHISLO, NET_RODA);
    map["меня"]  = T_rus_pers_pron_prop(_2_LITCO, ED_CHISLO, NET_RODA);
    map["мной"]  = T_rus_pers_pron_prop(_2_LITCO, ED_CHISLO, NET_RODA);
    map["мною"]  = T_rus_pers_pron_prop(_2_LITCO, ED_CHISLO, NET_RODA);
    map["мне" ]  = T_rus_pers_pron_prop(_2_LITCO, ED_CHISLO, NET_RODA);

    map["он"  ]  = T_rus_pers_pron_prop(_3_LITCO, ED_CHISLO, IMENIT_PADEZH,    MUZH_ROD);
    map["его" ]  = T_rus_pers_pron_prop(_3_LITCO, ED_CHISLO, ROD_VIN_PADEZH,   MUZH_ROD);
    map["него"]  = T_rus_pers_pron_prop(_3_LITCO, ED_CHISLO, ROD_VIN_PADEZH,   MUZH_ROD);
    map["ему" ]  = T_rus_pers_pron_prop(_3_LITCO, ED_CHISLO, DAT_PADEZH,       MUZH_ROD);
    map["нему"]  = T_rus_pers_pron_prop(_3_LITCO, ED_CHISLO, DAT_PADEZH,       MUZH_ROD);
    map["его" ]  = T_rus_pers_pron_prop(_3_LITCO, ED_CHISLO, ROD_VIN_PADEZH,   MUZH_ROD);
    map["него"]  = T_rus_pers_pron_prop(_3_LITCO, ED_CHISLO, ROD_VIN_PADEZH,   MUZH_ROD);
    map["им"  ]  = T_rus_pers_pron_prop(_3_LITCO, ED_CHISLO, TVORIT_PADEZH,    MUZH_ROD);
    map["ним" ]  = T_rus_pers_pron_prop(_3_LITCO, ED_CHISLO, TVORIT_PADEZH,    MUZH_ROD);
    map["нём" ]  = T_rus_pers_pron_prop(_3_LITCO, ED_CHISLO, PREDL_PADEZH,     MUZH_ROD);
    map["нем" ]  = T_rus_pers_pron_prop(_3_LITCO, ED_CHISLO, PREDL_PADEZH,     MUZH_ROD);

    map["она" ]  = T_rus_pers_pron_prop(_3_LITCO, ED_CHISLO, IMENIT_PADEZH,        ZHEN_ROD);
    map["ее"  ]  = T_rus_pers_pron_prop(_3_LITCO, ED_CHISLO, ROD_VIN_PADEZH,       ZHEN_ROD);
    map["её"  ]  = T_rus_pers_pron_prop(_3_LITCO, ED_CHISLO, ROD_VIN_PADEZH,       ZHEN_ROD);
    map["нее" ]  = T_rus_pers_pron_prop(_3_LITCO, ED_CHISLO, ROD_VIN_PADEZH,       ZHEN_ROD);
    map["неё" ]  = T_rus_pers_pron_prop(_3_LITCO, ED_CHISLO, ROD_VIN_PADEZH,       ZHEN_ROD);
    map["ей"  ]  = T_rus_pers_pron_prop(_3_LITCO, ED_CHISLO, DAT_TVOR_PADEZH,      ZHEN_ROD);
    map["ней" ]  = T_rus_pers_pron_prop(_3_LITCO, ED_CHISLO, DAT_TVOR_PRED_PADEZH, ZHEN_ROD);
    map["ее"  ]  = T_rus_pers_pron_prop(_3_LITCO, ED_CHISLO, ROD_VIN_PADEZH,       ZHEN_ROD);
    map["её"  ]  = T_rus_pers_pron_prop(_3_LITCO, ED_CHISLO, ROD_VIN_PADEZH,       ZHEN_ROD);
    map["нее" ]  = T_rus_pers_pron_prop(_3_LITCO, ED_CHISLO, ROD_VIN_PADEZH,       ZHEN_ROD);
    map["неё" ]  = T_rus_pers_pron_prop(_3_LITCO, ED_CHISLO, ROD_VIN_PADEZH,       ZHEN_ROD);
    map["ей"  ]  = T_rus_pers_pron_prop(_3_LITCO, ED_CHISLO, DAT_TVOR_PADEZH,      ZHEN_ROD);
    map["ею"  ]  = T_rus_pers_pron_prop(_3_LITCO, ED_CHISLO, TVORIT_PADEZH,        ZHEN_ROD);
    map["ней" ]  = T_rus_pers_pron_prop(_3_LITCO, ED_CHISLO, DAT_TVOR_PRED_PADEZH, ZHEN_ROD);
    map["нею" ]  = T_rus_pers_pron_prop(_3_LITCO, ED_CHISLO, TVORIT_PADEZH,        ZHEN_ROD);
    map["ней" ]  = T_rus_pers_pron_prop(_3_LITCO, ED_CHISLO, DAT_TVOR_PRED_PADEZH, ZHEN_ROD);

    map["оно" ]  = T_rus_pers_pron_prop(_3_LITCO, ED_CHISLO, IMENIT_PADEZH,    SREDN_ROD);
    map["его" ]  = T_rus_pers_pron_prop(_3_LITCO, ED_CHISLO, ROD_VIN_PADEZH,   SREDN_ROD);
    map["него"]  = T_rus_pers_pron_prop(_3_LITCO, ED_CHISLO, ROD_VIN_PADEZH,   SREDN_ROD);
    map["ему" ]  = T_rus_pers_pron_prop(_3_LITCO, ED_CHISLO, DAT_PADEZH,       SREDN_ROD);
    map["нему"]  = T_rus_pers_pron_prop(_3_LITCO, ED_CHISLO, DAT_PADEZH,       SREDN_ROD);
    map["его" ]  = T_rus_pers_pron_prop(_3_LITCO, ED_CHISLO, ROD_VIN_PADEZH,   SREDN_ROD);
    map["него"]  = T_rus_pers_pron_prop(_3_LITCO, ED_CHISLO, ROD_VIN_PADEZH,   SREDN_ROD);
    map["им"  ]  = T_rus_pers_pron_prop(_3_LITCO, ED_CHISLO, TVORIT_PADEZH,    SREDN_ROD);
    map["ним" ]  = T_rus_pers_pron_prop(_3_LITCO, ED_CHISLO, TVORIT_PADEZH,    SREDN_ROD);
    map["нём" ]  = T_rus_pers_pron_prop(_3_LITCO, ED_CHISLO, PREDL_PADEZH,     SREDN_ROD);
    map["нем" ]  = T_rus_pers_pron_prop(_3_LITCO, ED_CHISLO, PREDL_PADEZH,     SREDN_ROD);

    map["мы"  ]  = T_rus_pers_pron_prop(_1_LITCO, MNOZH_CHISLO, IMENIT_PADEZH,        NET_RODA);
    map["нас" ]  = T_rus_pers_pron_prop(_1_LITCO, MNOZH_CHISLO, ROD_VIN_PRED_PADEZH,  NET_RODA);
    map["нам" ]  = T_rus_pers_pron_prop(_1_LITCO, MNOZH_CHISLO, DAT_PADEZH,           NET_RODA);
    map["нас" ]  = T_rus_pers_pron_prop(_1_LITCO, MNOZH_CHISLO, ROD_VIN_PRED_PADEZH,  NET_RODA);
    map["нами"]  = T_rus_pers_pron_prop(_1_LITCO, MNOZH_CHISLO, TVORIT_PADEZH,        NET_RODA);
    map["нас" ]  = T_rus_pers_pron_prop(_1_LITCO, MNOZH_CHISLO, ROD_VIN_PRED_PADEZH,  NET_RODA);

    map["вы"  ]  = T_rus_pers_pron_prop(_2_LITCO, MNOZH_CHISLO, IMENIT_PADEZH,        NET_RODA);
    map["вас" ]  = T_rus_pers_pron_prop(_2_LITCO, MNOZH_CHISLO, ROD_VIN_PRED_PADEZH,  NET_RODA);
    map["вам" ]  = T_rus_pers_pron_prop(_2_LITCO, MNOZH_CHISLO, DAT_PADEZH,           NET_RODA);
    map["вас" ]  = T_rus_pers_pron_prop(_2_LITCO, MNOZH_CHISLO, ROD_VIN_PRED_PADEZH,  NET_RODA);
    map["вами"]  = T_rus_pers_pron_prop(_2_LITCO, MNOZH_CHISLO, TVORIT_PADEZH,        NET_RODA);
    map["вас" ]  = T_rus_pers_pron_prop(_2_LITCO, MNOZH_CHISLO, ROD_VIN_PRED_PADEZH,  NET_RODA);

    map["они" ]  = T_rus_pers_pron_prop(_3_LITCO, MNOZH_CHISLO, IMENIT_PADEZH,       NET_RODA);
    map["их"  ]  = T_rus_pers_pron_prop(_3_LITCO, MNOZH_CHISLO, ROD_VIN_PADEZH,      NET_RODA);
    map["них" ]  = T_rus_pers_pron_prop(_3_LITCO, MNOZH_CHISLO, ROD_VIN_PRED_PADEZH, NET_RODA);
    map["им"  ]  = T_rus_pers_pron_prop(_3_LITCO, MNOZH_CHISLO, DAT_PADEZH,          NET_RODA);
    map["ним" ]  = T_rus_pers_pron_prop(_3_LITCO, MNOZH_CHISLO, DAT_PADEZH,          NET_RODA);
    map["их"  ]  = T_rus_pers_pron_prop(_3_LITCO, MNOZH_CHISLO, ROD_VIN_PADEZH,      NET_RODA);
    map["них" ]  = T_rus_pers_pron_prop(_3_LITCO, MNOZH_CHISLO, ROD_VIN_PRED_PADEZH, NET_RODA);
    map["ими" ]  = T_rus_pers_pron_prop(_3_LITCO, MNOZH_CHISLO, TVORIT_PADEZH,       NET_RODA);
    map["ними"]  = T_rus_pers_pron_prop(_3_LITCO, MNOZH_CHISLO, TVORIT_PADEZH,       NET_RODA);
    map["них" ]  = T_rus_pers_pron_prop(_3_LITCO, MNOZH_CHISLO, PREDL_PADEZH,        NET_RODA);
}
/////////////////////////////////////////////////////////////////////////////////////////
char  rus_tolower(char  c)
{
    return  std::tolower(c, std::locale(""));
}
/////////////////////////////////////////////////////////////////////////////////////////
T_str  rus_str_tolower(const T_str&  text)
{
    T_str  res_text;
    std::transform(text.begin(), text.end(), std::back_inserter(res_text),
                   rus_tolower);
    return  res_text;
}
/////////////////////////////////////////////////////////////////////////////////////////
void  analyze
        (
                T_str         text,
                const T_map&  map
        )
{
    struct  T_print_pron_propertys_from {
        const T_map &map_;

        T_print_pron_propertys_from(const T_map &map) : map_(map) {}

        //-------------------------------------------------------------------------------
        void operator()(const T_str &word) {
            T_map::const_iterator map_val_it = map_.find(rus_str_tolower(word));
            if (map_val_it == map_.end()) {
                std::cout << "Слово \""
                          << word
                          << "\" "
                          << "НЕ является личным местоимением."
                          << std::endl
                          << std::endl;
            } else {
                std::cout << "Слово \""
                          << word
                          << "\" "
                          << "является личным местоимением "
                          << std::endl
                          << '\t';

                switch (map_val_it->second.litco_) {
                    case _1_LITCO:
                        std::cout << "первого лица, ";
                        break;

                    case _2_LITCO:
                        std::cout << "второго лица, ";
                        break;

                    case _3_LITCO:
                        std::cout << "третьего лица, ";
                        break;

                    default:;
                }
                std::cout << std::endl
                          << '\t';


                switch (map_val_it->second.chislo_) {
                    case ED_CHISLO:
                        std::cout << "единственного числа, ";
                        break;

                    case MNOZH_CHISLO:
                        std::cout << "множественного числа, ";
                        break;

                    default:;
                }
            }
        }
    };

    std::istringstream            text_stream      (text);
    std::istream_iterator<T_str>  text_stream_beg  (text_stream);
    std::istream_iterator<T_str>  text_stream_end;

    std::for_each(text_stream_beg, text_stream_end, T_print_pron_propertys_from(map));
}
int main()
{
    std::locale::global(std::locale(""));
    T_map  map;
    fill_map(map);

    for(;;)
    {
        std::cout << std::endl
                  << std::endl
                  << std::endl
                  << "Введите через пробел личные местоимения для морфологического анализа: "
                  << std::endl;
        T_str  DOS_text;
        getline(std::cin, DOS_text);
        if(DOS_text.empty())  break;
        analyze(from_DOS(DOS_text), map);
    }
}