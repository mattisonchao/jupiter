#ifndef JUPITER_H
#define JUPITER_H

#ifdef _WIN32
#define JUPITER_EXPORT_FUNC __declspec(dllexport)
#else
#define JUPITER_EXPORT_FUNC
#endif

#include <string>

namespace jupiter {
    class Greeter {
        public:
        std::string JUPITER_EXPORT_FUNC greeting();
    };
}

#endif
