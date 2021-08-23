package com.example.helloworld

import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import kotlinx.android.synthetic.main.activity_second.*

class SecondActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_second)
        text1.text = intent.getStringExtra("extra_data")
        button1.setOnClickListener {
            val intent = Intent()
            intent.putExtra("data_return", "Back to MainActivity")
            setResult(RESULT_OK, intent)
            finish()
        }
    }
}