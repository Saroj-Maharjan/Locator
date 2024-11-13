package com.sawrose.locator.logs

typealias LoggingBuilder = Logging.() -> Unit

class Logging {
    enum class Level {
        /** Logs warnings when unexpected failures occur. */
        Warnings,

        /** Same as [Warnings] plus all events. */
        Events,

        /** Same as [INFO] plus hex representation of I/O data. */
        INFO,
    }

    enum class Format {

        /**
         * Outputs logging in compact format (on a single line per log), for example:
         *
         * ```
         * example message(detail1=value1, detail2=value2, ...)
         * ```
         */
        Compact,

        /**
         * Outputs logging in multiline format (spanning multiple lines for log details), for example:
         *
         * ```
         * example message
         *   detail1: value1
         *   detail2: value2
         *   ...
         * ```
         */
        Multiline,
    }

    var identifier: String? = null

    var engine: LogEngine = SystemLogEngine
    var level: Level = Level.Warnings
    var format: Format = Format.Multiline

}