package com.sawrose.locator.core

data class Coordinates(
    @IntRange(180, -180)
    public val latitude: Double,
    @IntRange(180, -180)
    public val longitude: Double,
)