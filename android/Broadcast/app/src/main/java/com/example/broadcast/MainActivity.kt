package com.example.broadcast

import android.content.BroadcastReceiver
import android.content.Context
import android.content.Intent
import android.content.IntentFilter
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.view.LayoutInflater
import android.widget.Toast
import com.example.broadcast.databinding.ActivityMainBinding
import java.io.*

class MainActivity : AppCompatActivity() {
    lateinit var binding: ActivityMainBinding
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        binding = ActivityMainBinding.inflate(LayoutInflater.from(this))
        setContentView(binding.root)

        try {
            var content: StringBuffer = StringBuffer()
            val inputStream = openFileInput("data")
            val reader = BufferedReader(InputStreamReader(inputStream))
            reader.use {
                it.forEachLine {
                    content.append(it)
                }
            }

            if (!content.isEmpty()) {
                binding.tv.text = content
            }
        }catch(e:IOException) {

        }

        binding.btn.setOnClickListener {
            val intent = Intent("com.example.broadcast.MY_BROADCAST")
            intent.setPackage(packageName)
            sendOrderedBroadcast(intent, null)
        }
    }

    override fun onDestroy() {
        super.onDestroy()
        if (!binding.et.text.isEmpty()) {
            val outputStream = openFileOutput("data", MODE_PRIVATE)
            val writer = BufferedWriter(OutputStreamWriter(outputStream))
            writer.use {
                it.write(binding.et.text.toString())
            }
        }
    }
}