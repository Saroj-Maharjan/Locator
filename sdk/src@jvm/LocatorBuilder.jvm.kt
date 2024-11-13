package com.sawrose.locator

import com.sawrose.locator.logs.LoggingBuilder

actual class LocatorBuilder internal actual constructor() {

    actual fun logging(init: LoggingBuilder){
        jvmNotImplementedException()
    }

    actual fun build(): PlatformLocator =
        jvmNotImplementedException()
}