package com.locator.sdk

import android.content.Context
import androidx.startup.Initializer

internal lateinit var applicationContext: Context
    private set

public object Locator

public class LocatorInitializer : Initializer<Locator> {
    override fun create(context: Context): Locator {
        applicationContext = context.applicationContext
        return Locator
    }

    override fun dependencies(): List<Class<out Initializer<*>>> =
        emptyList()
}