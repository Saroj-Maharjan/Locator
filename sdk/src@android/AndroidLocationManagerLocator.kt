package com.sawrose.locator

import com.sawrose.locator.logs.Logger
import com.sawrose.locator.logs.Logging

import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.flow.callbackFlow

internal class AndroidLocationManagerLocator(
    logging: Logging
) : PlatformLocator {

    private val logger = Logger(logging, tag = "Locator")
    override val location: Flow<PlatformLocationManager> = callbackFlow {
        logger.debug { message = "Checking Permission before starting Location manager" }
    }
}