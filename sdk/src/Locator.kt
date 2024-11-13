package com.sawrose.locator

import kotlinx.coroutines.flow.Flow

interface Locator<out T : LocationManager> {
    val location: Flow<T>
}

fun Locator(
    buildAction: LocatorBuilder.() -> Unit = {},
): PlatformLocator = LocatorBuilder().apply(buildAction).build()