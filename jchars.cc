#include <iostream>
#include <unordered_map>
#include <string>
#include <utility>

std::unordered_map<std::string, std::pair<std::string, std::string>> characters_lookup = {
	/*{"a", std::pair<std::string, std::string>("あ", "ア")},
	{"e", std::pair<std::string, std::string>("え", "エ")},
	{"i", std::pair<std::string, std::string>("い", "イ")},
	{"o", std::pair<std::string, std::string>("お", "オ")},
	{"u", std::pair<std::string, std::string>("う", "ウ")}*/
{" ", std::pair<std::string, std::string>(" ", " ")},
{"a", std::pair<std::string, std::string>("あ", "オ")},
{"e", std::pair<std::string, std::string>("え", "エ")},
{"i", std::pair<std::string, std::string>("い", "イ")},
{"o", std::pair<std::string, std::string>("お", "オ")},
{"u", std::pair<std::string, std::string>("う", "ウ")},
{"ka", std::pair<std::string, std::string>("か", "カ")},
{"ke", std::pair<std::string, std::string>("け", "ケ")},
{"ki", std::pair<std::string, std::string>("き", "キ")},
{"ko", std::pair<std::string, std::string>("こ", "コ")},
{"ku", std::pair<std::string, std::string>("く", "ク")},
{"sa", std::pair<std::string, std::string>("さ", "サ")},
{"se", std::pair<std::string, std::string>("せ", "セ")},
{"shi", std::pair<std::string, std::string>("し", "シ")},
{"so", std::pair<std::string, std::string>("そ", "ソ")},
{"su", std::pair<std::string, std::string>("す", "ス")},
{"ta", std::pair<std::string, std::string>("た", "タ")},
{"te", std::pair<std::string, std::string>("て", "テ")},
{"chi", std::pair<std::string, std::string>("ち", "チ")},
{"to", std::pair<std::string, std::string>("と", "ト")},
{"tsu", std::pair<std::string, std::string>("つ", "ツ")},
{"na", std::pair<std::string, std::string>("な", "ナ")},
{"ne", std::pair<std::string, std::string>("ね", "ネ")},
{"ni", std::pair<std::string, std::string>("に", "ニ")},
{"no", std::pair<std::string, std::string>("の", "ノ")},
{"nu", std::pair<std::string, std::string>("ぬ", "ヌ")},
{"ha", std::pair<std::string, std::string>("は", "ハ")},
{"he", std::pair<std::string, std::string>("へ", "ヘ")},
{"hi", std::pair<std::string, std::string>("ひ", "ヒ")},
{"ho", std::pair<std::string, std::string>("ほ", "ホ")},
{"fu", std::pair<std::string, std::string>("ふ", "フ")},
{"ma", std::pair<std::string, std::string>("ま", "マ")},
{"me", std::pair<std::string, std::string>("め", "メ")},
{"mi", std::pair<std::string, std::string>("み", "ミ")},
{"mo", std::pair<std::string, std::string>("も", "モ")},
{"mu", std::pair<std::string, std::string>("む", "ム")},
{"ra", std::pair<std::string, std::string>("ら", "ラ")},
{"re", std::pair<std::string, std::string>("れ", "レ")},
{"ri", std::pair<std::string, std::string>("り", "リ")},
{"ro", std::pair<std::string, std::string>("ろ", "ロ")},
{"ru", std::pair<std::string, std::string>("る", "ル")},
{"ya", std::pair<std::string, std::string>("や", "ヤ")},
{"yu", std::pair<std::string, std::string>("ゆ", "ユ")},
{"yo", std::pair<std::string, std::string>("よ", "ヨ")},
{"wa", std::pair<std::string, std::string>("わ", "ワ")},
{"wo", std::pair<std::string, std::string>("を", "ヲ")},
{"ga", std::pair<std::string, std::string>("が", "ガ")},
{"ge", std::pair<std::string, std::string>("げ", "ゲ")},
{"gi", std::pair<std::string, std::string>("ぎ", "ギ")},
{"go", std::pair<std::string, std::string>("ご", "ゴ")},
{"gu", std::pair<std::string, std::string>("ぐ", "グ")},
{"za", std::pair<std::string, std::string>("ざ", "ザ")},
{"ze", std::pair<std::string, std::string>("ぜ", "ゼ")},
{"ji", std::pair<std::string, std::string>("じ", "ジ")},
{"zo", std::pair<std::string, std::string>("ぞ", "ゾ")},
{"zu", std::pair<std::string, std::string>("ず", "ズ")},
{"da", std::pair<std::string, std::string>("だ", "ダ")},
{"de", std::pair<std::string, std::string>("で", "デ")},
{"di", std::pair<std::string, std::string>("ぢ", "ヂ")},
{"do", std::pair<std::string, std::string>("ど", "ド")},
{"dzu", std::pair<std::string, std::string>("づ", "ヅ")},
{"ba", std::pair<std::string, std::string>("ば", "バ")},
{"be", std::pair<std::string, std::string>("べ", "ベ")},
{"bi", std::pair<std::string, std::string>("び", "ビ")},
{"bo", std::pair<std::string, std::string>("ぼ", "ボ")},
{"bu", std::pair<std::string, std::string>("ぶ", "ブ")},
{"pa", std::pair<std::string, std::string>("ぱ", "パ")},
{"pe", std::pair<std::string, std::string>("ぺ", "ペ")},
{"pi", std::pair<std::string, std::string>("ぴ", "ピ")},
{"po", std::pair<std::string, std::string>("ぽ", "ポ")},
{"pu", std::pair<std::string, std::string>("ぷ", "プ")},
{"kya", std::pair<std::string, std::string>("きゃ", "キャ")},
{"kyu", std::pair<std::string, std::string>("きゅ", "キュ")},
{"kyo", std::pair<std::string, std::string>("きょ", "キョ")},
{"sha", std::pair<std::string, std::string>("しゃ", "シャ")},
{"shu", std::pair<std::string, std::string>("しゅ", "シュ")},
{"sho", std::pair<std::string, std::string>("しょ", "ショ")},
{"cha", std::pair<std::string, std::string>("ちゃ", "チャ")},
{"chu", std::pair<std::string, std::string>("ちゅ", "チュ")},
{"cho", std::pair<std::string, std::string>("ちょ", "チョ")},
{"nya", std::pair<std::string, std::string>("にゃ", "ニャ")},
{"nyu", std::pair<std::string, std::string>("にゅ", "ニュ")},
{"nyo", std::pair<std::string, std::string>("にょ", "ニョ")},
{"hya", std::pair<std::string, std::string>("ひゃ", "ヒャ")},
{"hyu", std::pair<std::string, std::string>("ひゅ", "ヒュ")},
{"hyo", std::pair<std::string, std::string>("ひょ", "ヒョ")},
{"mya", std::pair<std::string, std::string>("みゃ", "ミャ")},
{"myu", std::pair<std::string, std::string>("みゅ", "ミュ")},
{"myo", std::pair<std::string, std::string>("みょ", "ミョ")},
{"rya", std::pair<std::string, std::string>("りゃ", "リャ")},
{"ryu", std::pair<std::string, std::string>("りゅ", "リュ")},
{"ryo", std::pair<std::string, std::string>("りょ", "リョ")},
{"gya", std::pair<std::string, std::string>("ぎゃ", "ギャ")},
{"gyu", std::pair<std::string, std::string>("ぎゅ", "ギュ")},
{"gyo", std::pair<std::string, std::string>("ぎょ", "ギョ")},
{"ja", std::pair<std::string, std::string>("じゃ", "ジャ")},
{"ju", std::pair<std::string, std::string>("じゅ", "ジュ")},
{"jo", std::pair<std::string, std::string>("じょ", "ジョ")},
{"bya", std::pair<std::string, std::string>("びゃ", "ビャ")},
{"byu", std::pair<std::string, std::string>("びゅ", "ビュ")},
{"byo", std::pair<std::string, std::string>("びょ", "ビョ")},
{"pya", std::pair<std::string, std::string>("ぴゃ", "ピャ")},
{"pyu", std::pair<std::string, std::string>("ぴゅ", "ピュ")},
{"pyo", std::pair<std::string, std::string>("ぴょ", "ピョ")},
{"kka", std::pair<std::string, std::string>("っか", "ッカ")},
{"kke", std::pair<std::string, std::string>("っけ", "ッケ")},
{"kki", std::pair<std::string, std::string>("っき", "ッキ")},
{"kko", std::pair<std::string, std::string>("っこ", "ッコ")},
{"kku", std::pair<std::string, std::string>("っく", "ック")},
{"ssa", std::pair<std::string, std::string>("っさ", "っさ")},
{"sse", std::pair<std::string, std::string>("っせ", "っせ")},
{"sshi", std::pair<std::string, std::string>("っし", "っし")},
{"sso", std::pair<std::string, std::string>("っそ", "っそ")},
{"ssu", std::pair<std::string, std::string>("っす", "っす")},
{"tta", std::pair<std::string, std::string>("った", "った")},
{"tte", std::pair<std::string, std::string>("って", "って")},
{"tchi", std::pair<std::string, std::string>("っち", "っち")},
{"tto", std::pair<std::string, std::string>("っと", "っと")},
{"ttsu", std::pair<std::string, std::string>("っつ", "っつ")},
{"ppa", std::pair<std::string, std::string>("っぱ", "っぱ")},
{"ppe", std::pair<std::string, std::string>("っぺ", "っぺ")},
{"ppi", std::pair<std::string, std::string>("っぴ", "っぴ")},
{"ppo", std::pair<std::string, std::string>("っぽ", "っぽ")},
{"ppu", std::pair<std::string, std::string>("っぷ", "っぷ")},
{"n", std::pair<std::string, std::string>("ん", "ン")},
{"-", std::pair<std::string, std::string>("ー", "ー")},
{",", std::pair<std::string, std::string>("、", "、")}
};

int main(int argc, char* argv[])
{
	std::string input, buffer, output;
	size_t	    cursor = 0;

	std::getline(std::cin, input);

	std::string opt;
        if (argc == 2)	
                opt = argv[1];
        
	for (size_t i = 0; i < input.length(); ++i)
	{
		buffer += input[cursor];

		#define b(c) \
			if (buffer == c) \
			{ \
                                if (argc == 2 && opt == "-k") \
                                        output += characters_lookup[buffer].second; \
                                else \
                                        output += characters_lookup[buffer].first; \
				buffer = ""; \
			}

			b(" ") else
                        b("-") else
			b("a") else
                        b("e") else
                        b("i") else
                        b("o") else
                        b("u") else
                        b("ka") else
                        b("ke") else
                        b("ki") else
                        b("ko") else
                        b("ku") else
                        b("sa") else
                        b("se") else
                        b("shi") else
                        b("so") else
                        b("su") else
                        b("ta") else
                        b("te") else
                        b("chi") else
                        b("to") else
                        b("tsu") else
                        b("na") else
                        b("ne") else
                        b("ni") else
                        b("no") else
                        b("nu") else
                        b("ha") else
                        b("he") else
                        b("hi") else
                        b("ho") else
                        b("fu") else
                        b("ma") else
                        b("me") else
                        b("mi") else
                        b("mo") else
                        b("mu") else
                        b("ra") else
                        b("re") else
                        b("ri") else
                        b("ro") else
                        b("ru") else
                        b("ya") else
                        b("yu") else
                        b("yo") else
                        b("wa") else
                        b("wo") else
                        b("ga") else
                        b("ge") else
                        b("gi") else
                        b("go") else
                        b("gu") else
                        b("za") else
                        b("ze") else
                        b("ji") else
                        b("zo") else
                        b("zu") else
                        b("da") else
                        b("de") else
                        b("di") else
                        b("do") else
                        b("dzu") else
                        b("ba") else
                        b("be") else
                        b("bi") else
                        b("bo") else
                        b("bu") else
                        b("pa") else
                        b("pe") else
                        b("pi") else
                        b("po") else
                        b("pu") else
                        b("kya") else
                        b("kyu") else
                        b("kyo") else
                        b("sha") else
                        b("shu") else
                        b("sho") else
                        b("cha") else
                        b("chu") else
                        b("cho") else
                        b("nya") else
                        b("nyu") else
                        b("nyo") else
                        b("hya") else
                        b("hyu") else
                        b("hyo") else
                        b("mya") else
                        b("myu") else
                        b("myo") else
                        b("rya") else
                        b("ryu") else
                        b("ryo") else
                        b("gya") else
                        b("gyu") else
                        b("gyo") else
                        b("ja") else
                        b("ju") else
                        b("jo") else
                        b("bya") else
                        b("byu") else
                        b("byo") else
                        b("pya") else
                        b("pyu") else
                        b("pyo") else
                        b("kka") else
                        b("kke") else
                        b("kki") else
                        b("kko") else
                        b("kku") else
                        b("ssa") else
                        b("sse") else
                        b("sshi") else
                        b("sso") else
                        b("ssu") else
                        b("tta") else
                        b("tte") else
                        b("tchi") else
                        b("tto") else
                        b("ttsu") else
                        b("ppa") else
                        b("ppe") else
                        b("ppi") else
                        b("ppo") else
                        b("ppu") else
			b("n") else
			b(",")

		#undef b

		++cursor;
	}

	std::cout << output << std::endl;

	return 0;
}
