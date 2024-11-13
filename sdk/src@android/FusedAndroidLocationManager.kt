package com.sawrose.locator

import android.content.Context
import android.location.LocationManager
import androidx.core.content.getSystemService
import com.google.android.gms.location.LocationCallback
import com.google.android.gms.location.LocationResult
import com.google.android.gms.location.LocationServices
import kotlinx.coroutines.channels.BufferOverflow
import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.flow.MutableSharedFlow

class FusedAndroidLocationManager(
    private val context: Context
): PlatformLocationManager {

    private val _locationUpdates = MutableSharedFlow<LocationResult>(
        replay = 1,
        extraBufferCapacity = 0,
        onBufferOverflow = BufferOverflow.DROP_OLDEST,
    )
    internal val locationUpdates: Flow<LocationResult> = _locationUpdates


    private val fusedLocationClient by lazy {
        LocationServices.getFusedLocationProviderClient(context)
    }

    private var locationCallback: LocationCallback? = null

    fun locationEnabled(): Boolean {
        val locationManager = context.getSystemService<LocationManager>()
        checkNotNull(locationManager){ "Location Manager is not found in the device"}
        return locationManager.isProviderEnabled(LocationManager.GPS_PROVIDER) ||
               locationManager.isProviderEnabled(LocationManager.NETWORK_PROVIDER)
    }

    override fun startLocationUpdates() {
        if(locationCallback != null) return _locationUpdates

        fusedLocationClient.requestLocationUpdates(locatio)
    }

    override fun stopLocationUpdates() {
        TODO("Not yet implemented")
    }
}