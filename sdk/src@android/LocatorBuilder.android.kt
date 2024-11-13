package com.sawrose.locator

import com.sawrose.locator.logs.Logging
import com.sawrose.locator.logs.LoggingBuilder

actual class LocatorBuilder internal actual constructor() {


    private var logging: Logging = Logging()
    actual fun logging(init: LoggingBuilder){
        logging = Logging().apply(init)
    }

    actual fun build(): PlatformLocator {
        return AndroidLocationManagerLocator(
            logging
        )
    }
}