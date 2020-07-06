#include "context.h"

#include <QDebug>


namespace qtgyo {

QDebug operator<<(QDebug dbg, const Context& c)
{
   QDebugStateSaver saver{dbg};
   return dbg.noquote().nospace() << "Context("
                                  << "context=" << c.context
                                  << " debug=" << c.debug
                                  << " warning=" << c.warning
                                  << " info=" << c.info
                                  << " critical=" << c.critical
                                  << ")";
}

} // namespace qtgyo
