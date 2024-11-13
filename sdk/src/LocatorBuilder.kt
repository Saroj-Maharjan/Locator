package com.sawrose.locator

import com.sawrose.locator.logs.LoggingBuilder


expect class LocatorBuilder internal constructor(){

    fun logging(init: LoggingBuilder)

    internal fun build(): PlatformLocator

}