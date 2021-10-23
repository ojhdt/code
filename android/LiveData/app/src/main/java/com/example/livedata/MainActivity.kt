package com.example.livedata

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.util.Log
import android.view.LayoutInflater
import androidx.lifecycle.ViewModelProvider
import androidx.lifecycle.ViewModelStoreOwner
import com.example.livedata.databinding.ActivityMainBinding

class MainActivity : AppCompatActivity() {
    lateinit var binding: ActivityMainBinding
    lateinit var viewModal: MainViewModal
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        binding = ActivityMainBinding.inflate(LayoutInflater.from(this))
        viewModal = ViewModelProvider(this)[MainViewModal::class.java]
        viewModal.counter.observe(this) { value -> binding.text.text = value.toString() }
        setContentView(binding.root)

        viewModal.observeLiveData.observe(this) { value -> binding.text.text = value.toString() }

        binding.btn1.setOnClickListener {
            viewModal.add(1)
        }

        binding.btn2.setOnClickListener {
            viewModal.clear()
        }

        binding.btn3.setOnClickListener {
            val value = (0..1000).random()
            Log.d("random", value.toString())
            viewModal.setValue(value)
        }
    }
}