package com.sawrose.locator

import com.sawrose.locator.logs.Logging
import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.flow.callbackFlow

class AppleLocationManagerLocator(
    logging: Logging
): PlatformLocator {
    override val location: Flow<PlatformLocationManager> = callbackFlow {

    }
}