package com.example.helloworld

import android.content.Context
import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import kotlinx.android.synthetic.main.activity_third.*

class ThirdActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_third)

        val text = intent?.getStringExtra("text") ?: "null"
        text1.text = text

        button1.setOnClickListener {
            finish()
        }
    }

    companion object {
        fun actionStart(context:Context, str:String){
            val intent = Intent(context, ThirdActivity::class.java)
            intent.putExtra("text", str)
            context.startActivity(intent)
        }
    }
}