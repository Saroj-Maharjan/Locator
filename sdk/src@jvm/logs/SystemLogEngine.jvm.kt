package com.sawrose.locator.logs

import com.sawrose.locator.jvmNotImplementedException

actual object SystemLogEngine : LogEngine {
    actual override fun verbose(
        throwable: Throwable?,
        tag: String,
        message: String
    ) {
        jvmNotImplementedException()
    }

    actual override fun debug(
        throwable: Throwable?,
        tag: String,
        message: String
    ) {
        jvmNotImplementedException()
    }

    actual override fun info(
        throwable: Throwable?,
        tag: String,
        message: String
    ) {
        jvmNotImplementedException()
    }

    actual override fun warn(
        throwable: Throwable?,
        tag: String,
        message: String
    ) {
        jvmNotImplementedException()
    }

    actual override fun error(
        throwable: Throwable?,
        tag: String,
        message: String
    ) {
        jvmNotImplementedException()
    }

    actual override fun assert(
        throwable: Throwable?,
        tag: String,
        message: String
    ) {
        jvmNotImplementedException()
    }
}