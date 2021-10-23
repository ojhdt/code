package com.example.observable

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.view.View
import android.widget.Button
import androidx.databinding.DataBindingUtil
import com.example.observable.databinding.ActivityMainBinding

class MainActivity : AppCompatActivity() {
    var person = Person().apply {
        name.set("Name")
        num.set(10)
    }
    lateinit var btn:Button
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)
        btn = findViewById(R.id.button)
        val binding = DataBindingUtil.setContentView<ActivityMainBinding>(this,R.layout.activity_main)
        binding.person = person
    }

    fun clickBtn(view: android.view.View) {
        person.name.set("Hello")
        person.num.set(person.num.get() + 1)
    }
}