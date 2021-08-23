package com.example.helloworld

import android.content.Context
import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import kotlinx.android.synthetic.main.activity_recycle_view.*

class RecyclerViewActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_recycle_view)
        button1.setOnClickListener {
            LinearRecyclerViewActivity.actionStart(this)
        }

        button2.setOnClickListener {
            LinearHorRecyclerViewActivity.actionStart(this)
        }

        button3.setOnClickListener {
            GridRecyclerViewActivity.actionStart(this)
        }

        button4.setOnClickListener {
            ChatActivity.actionStart(this)
        }
    }

    companion object {
        fun actionStart(context: Context) {
            val intent = Intent(context, RecyclerViewActivity::class.java)
            context.startActivity(intent)
        }
    }
}