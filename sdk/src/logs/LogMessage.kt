package com.sawrose.locator.logs

internal expect val LOG_INDENT: String?

internal class LogMessage(
    private val logging: Logging,
    platformIdentifier: String?,
    private val indent: String? = LOG_INDENT
) {
    private val prefix = logging.identifier ?: platformIdentifier

    var message: String = ""

    private var isFirst = true

    private fun StringBuilder.append(label: String, value: Any) {
        when (logging.format) {
            Logging.Format.Compact -> if (isFirst) append('(') else append(", ")
            Logging.Format.Multiline -> {
                appendLine()
                if (indent != null) append(indent)
            }
        }
        isFirst = false

        append(label)
        when (logging.format) {
            Logging.Format.Compact -> append("=")
            Logging.Format.Multiline -> append(": ")
        }
        append(value)
    }

    fun build(): String = buildString {
        if (!prefix.isNullOrEmpty()) {
            append(prefix)
            append(' ')
        }
        append(message)

        isFirst = true


        if (logging.format == Logging.Format.Compact && !isFirst) append(')')
    }
}