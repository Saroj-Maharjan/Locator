package com.sawrose.locator.permissions.exceptions

/** Define an exception that is related to permissions */
public sealed class PermissionException(message: String) : Throwable(message)

/**
 * Permission is missing, and it is required for the operation.
 * */
public class PermissionMissingException(permission: String) : PermissionException(
    "Permission $permission is required for this operation"
)

/**
 * Error while requesting a permission.
 *
 * @param message: The error message
 * @param permission: The permission that failed to request
 * */
public class PermissionRequestException(
    message: String,
    permission: String = "Location"
) : PermissionException(
    "Failed to request $permission permission: due to $message"
)

/**
 * The user has denied the permission.
 *
 * @param permission: The permission that is denied
* */
public class PermissionDeniedException(
    permission: String = "location"
) : PermissionException(
    "Permission $permission is denied"
)

/**
 * The user has denied the permission forever.
 *
 * @param permission: The permission that is denied forever
 * */
public class PermissionDeniedForeverException(
    permission: String = "location"
) : PermissionException(
    "Permission $permission is denied forever"
)

