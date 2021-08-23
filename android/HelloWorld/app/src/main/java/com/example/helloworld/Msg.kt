package com.example.helloworld

class Msg(val name: String, val content: String, val avatar: Int, val type: Int) {

    companion object {
        const val TYPE_RECEIVED = 1
        const val TYPE_SENT = 0
    }
}