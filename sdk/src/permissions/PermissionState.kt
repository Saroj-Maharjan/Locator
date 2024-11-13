package com.sawrose.locator.permissions

import com.sawrose.locator.permissions.exceptions.PermissionDeniedException
import com.sawrose.locator.permissions.exceptions.PermissionDeniedForeverException

/**
 * Describes the state of a permission
 * */
enum class PermissionState {
    /**
     * The permission is not requested yet
     */
    NOT_REQUESTED,
    /**
     * The permission is granted
     * */
    GRANTED,
    /**
     * The permission is denied
     * */
    DENIED,
    /**
     * The permission is denied and the user has checked "Don't ask again"
     *
     * */
    DENIED_FOREVER
}

/**
 * Throws an exception if the permission state is not [PermissionState.GRANTED]
 */
public fun PermissionState.throwOrError() =
    when(this){
        PermissionState.NOT_REQUESTED,
        PermissionState.GRANTED -> Unit
        PermissionState.DENIED -> throw PermissionDeniedException()
        PermissionState.DENIED_FOREVER -> throw PermissionDeniedForeverException()
    }