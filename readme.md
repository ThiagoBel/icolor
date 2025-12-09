# icolor

icolor is a **header-only** library for **C++** with support for **24-bit (True Color)**.

## Examples

Text in red
```c++
#include <iostream>
#include "icolor.hpp"

int main()
{
    std::cout << icolor::red() << "COLOR RED" << icolor::finished() << std::endl;
}
```

Text with red color and blue background
```c++
#include <iostream>
#include "icolor.hpp"

int main()
{
    std::cout << icolor::red() <<icolor::bg_azure() << "COLOR RED WITHBACKGROUND BLUE" << icolor::finished() <<std::endl;
}
```

Text with pink background
```c++
#include <iostream>
#include "icolor.hpp"

int main()
{
    std::cout << icolor::coloredText("HELLO, WORLD!", "\033[48;2;255;20;147m") << std::endl;
}
```

Themes
```c++
#include <iostream>
#include "icolor.hpp"

int main()
{
    std::cout << icolor::error() << "Error" << icolor::finished() << std::endl;
    std::cout << icolor::sucess() << "Sucess" << icolor::finished() << std::endl;
    std::cout << icolor::warn() << "Warn" << icolor::finished() << std::endl;
    std::cout << icolor::info() << "Info" << icolor::finished() << std::endl;
    std::cout << icolor::fatal() << "Fatal error" << icolor::finished() << std::endl;
}
```

Say{} / Sayln{}
```c++
#include "icolor.hpp"

int main()
{
    icolor::Sayln{} << "Hello, World!";
    icolor::Say{} << "Hello, World!";


    icolor::Sayln{} << icolor::red() << "Hello, World!" << icolor::finished();
    icolor::Say{} << icolor::red() << "Hello, World!" << icolor::finished();
}
```

rainbow()
```c++
#include "iostream"
#include "icolor.hpp"

int main()
{
    icolor::Sayln{} << icolor::rainbow("Hello, World!");

    std::cout << icolor::rainbow("Hello, World!") << std::endl;
}
```

## Operating Systems

| System | Supported |
| -------- | ---------- |
| Linux | ✓ |
| Windows 10+ | ✓ |
| MacOS | ✓ |

## Colors

| Texts | Backgrounds |
|--------|-------------|
| `black()` | `bg_black()` |
| `red()` | `bg_red()` |
| `green()` | `bg_green()` |
| `yellow()` | `bg_yellow()` |
| `blue()` | `bg_blue()` |
| `magenta()` | `bg_magenta()` |
| `cyan()` | `bg_cyan()` |
| `white()` | `bg_white()` |
| `bright_black()` | `bg_bright_black()` |
| `bright_red()` | `bg_bright_red()` |
| `bright_green()` | `bg_bright_green()` |
| `bright_yellow()` | `bg_bright_yellow()` |
| `bright_blue()` | `bg_bright_blue()` |
| `bright_magenta()` | `bg_bright_magenta()` |
| `bright_cyan()` | `bg_bright_cyan()` |
| `bright_white()` | `bg_bright_white()` |
| `orange()` | `bg_orange()` |
| `pink()` | `bg_pink()` |
| `violet()` | `bg_violet()` |
| `light_cyan()` | `bg_light_cyan()` |
| `teal()` | — |
| `sky_blue()` | — |
| `lime()` | — |
| `olive()` | — |
| `brown()` | — |
| `gold()` | — |
| `salmon()` | — |
| `coral()` | — |
| `purple()` | — |
| `lavender()` | — |
| `cyan_2()` | — |
| `magenta_2()` | — |
| `chartreuse()` | `bg_chartreuse()` |
| `spring_green()` | `bg_spring_green()` |
| `aquamarine()` | `bg_aquamarine()` |
| `deep_sky_blue()` | `bg_deep_sky_blue()` |
| `dodger_blue()` | `bg_dodger_blue()` |
| `royal_blue()` | `bg_royal_blue()` |
| `steel_blue()` | `bg_steel_blue()` |
| `slate_blue()` | `bg_slate_blue()` |
| `midnight_blue()` | `bg_midnight_blue()` |
| `hot_pink()` | `bg_hot_pink()` |
| `deep_pink()` | `bg_deep_pink()` |
| `indian_red()` | `bg_indian_red()` |
| `firebrick()` | `bg_firebrick()` |
| `crimson()` | `bg_crimson()` |
| `dark_orange()` | `bg_dark_orange()` |
| `tomato()` | `bg_tomato()` |
| `light_salmon()` | `bg_light_salmon()` |
| `wheat()` | `bg_wheat()` |
| `khaki()` | `bg_khaki()` |
| `tan()` | `bg_tan()` |
| `plum()` | `bg_plum()` |
| `orchid()` | `bg_orchid()` |
| `thistle()` | `bg_thistle()` |
| `indigo()` | `bg_indigo()` |
| `wine()` | `bg_wine()` |
| `ruby()` | `bg_ruby()` |
| `burgundy()` | `bg_burgundy()` |
| `maroon()` | `bg_maroon()` |
| `mint()` | `bg_mint()` |
| `emerald()` | `bg_emerald()` |
| `azure()` | `bg_azure()` |
| `navy()` | `bg_navy()` |
| `beige()` | `bg_beige()` |
| `ivory()` | `bg_ivory()` |
| `chocolate()` | `bg_chocolate()` |
| `coffee()` | `bg_coffee()` |
| `peach()` | `bg_peach()` |
| `apricot()` | `bg_apricot()` |
| `neon_green()` | `bg_neon_green()` |
| `neon_blue()` | `bg_neon_blue()` |
| `neon_pink()` | `bg_neon_pink()` |
| `gray_0()` | — |
| `gray_1()` | — |
| `gray_2()` | — |
| `gray_3()` | — |
| `gray_4()` | — |
| `gray_5()` | — |
| `gray_6()` | — |
| `gray_7()` | — |
| `gray_8()` | — |
| `gray_9()` | — |
| `gray_10()` | — |
| `gray_11()` | — |
| `gray_12()` | — |
| `gray_13()` | — |
| `gray_14()` | — |
| `gray_15()` | — |
| `gray_16()` | — |
| `gray_17()` | — |
| `gray_18()` | — |
| `gray_19()` | — |
| `gray_20()` | — |
| `gray_21()` | — |
| `gray_22()` | — |
| `gray_23()` | — |
| — | `bg_light_gray()` |
| — | `bg_dark_gray()` |

## Releases
https://github.com/ThiagoBel/icolor/releases