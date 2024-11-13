package com.sawrose.locator.logs

interface LogEngine {
    fun verbose(throwable: Throwable?, tag: String, message: String)
    fun debug(throwable: Throwable?, tag: String, message: String)
    fun info(throwable: Throwable?, tag: String, message: String)
    fun warn(throwable: Throwable?, tag: String, message: String)
    fun error(throwable: Throwable?, tag: String, message: String)
    fun assert(throwable: Throwable?, tag: String, message: String)
}