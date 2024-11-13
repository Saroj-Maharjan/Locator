package com.sawrose.locator.logs

internal class Logger(
    private val logging: Logging,
    private val tag: String = "Locator",
) {

    inline fun verbose(throwable: Throwable?= null, crossinline init: LogMessage.() -> Unit){
        val message = LogMessage(logging, tag).apply(init).build()
        logging.engine.verbose(throwable, tag, message)
    }

    inline fun debug(throwable: Throwable?= null, crossinline init: LogMessage.() -> Unit){
        val message = LogMessage(logging, tag).apply(init).build()
        logging.engine.debug(throwable, tag, message)
    }

    inline fun info(throwable: Throwable?= null, crossinline init: LogMessage.() -> Unit){
        val message = LogMessage(logging, tag).apply(init).build()
        logging.engine.info(throwable, tag, message)
    }

    inline fun warn(throwable: Throwable?= null, crossinline init: LogMessage.() -> Unit){
        val message = LogMessage(logging, tag).apply(init).build()
        logging.engine.warn(throwable, tag, message)
    }

    inline fun error(throwable: Throwable?= null, crossinline init: LogMessage.() -> Unit){
        val message = LogMessage(logging, tag).apply(init).build()
        logging.engine.error(throwable, tag, message)
    }

    inline fun assert(throwable: Throwable?= null, crossinline init: LogMessage.() -> Unit){
        val message = LogMessage(logging, tag).apply(init).build()
        logging.engine.assert(throwable, tag, message)
    }

}