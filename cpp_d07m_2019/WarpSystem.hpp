/*
** EPITECH PROJECT, 2020
** WarpSystem
** File description:
** WarpSystem
*/

#ifndef WarpSystem_
#define WarpSystem_

#include "Destination.hpp"

namespace WarpSystem {
    class QuantumReactor {
        public:
            QuantumReactor();
            ~QuantumReactor();
            bool isStable ();
            void setStability(bool stability);
        protected:
        private:
            bool _stability;
    };
    class Core {
        public:
            Core(QuantumReactor *coreReactor);
            ~Core();
            QuantumReactor *checkReactor();
        protected:
        private:
        QuantumReactor *_coreReactor;
    };
} // namespace WarpSystem

#endif /* !WarpSystem_ */