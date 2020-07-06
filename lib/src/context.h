#ifndef QTGYO_CONTEXT_H
#define QTGYO_CONTEXT_H

#include <QString>

namespace qtgyo {

struct Context
{
   QString context;
   bool debug = false;
   bool warning = false;
   bool info = false;
   bool critical = false;
};

QDebug operator<<(QDebug dbg, const Context& c);

} // namespace qtgyo

#endif // QTGYO_CONTEXT_H
