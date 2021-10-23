package com.example.observable

import androidx.databinding.ObservableField
import androidx.databinding.ObservableInt

class Person {
    var name = ObservableField<String>()
    var num = ObservableInt()
}