package com.example.qualifier

import android.content.Context
import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.view.LayoutInflater
import com.example.qualifier.databinding.ActivityContentBinding
import java.io.Serializable

class ContentActivity : AppCompatActivity() {
    private lateinit var binding: ActivityContentBinding
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        binding = ActivityContentBinding.inflate(LayoutInflater.from(this))
        setContentView(binding.root)

        val contentfg: ContentFragment =
            supportFragmentManager.findFragmentById(R.id.contentfg) as ContentFragment
        contentfg?.refresh(
            intent.getStringExtra("title")!!,
            intent.getStringExtra("writer")!!,
            intent.getStringExtra("date")!!,
            intent.getStringExtra("content")!!
        )
    }

    companion object {
        fun actionStart(context: Context, data: News) {
            val intent = Intent(context, ContentActivity::class.java)
            intent.putExtra("title", data.title)
            intent.putExtra("content", data.content)
            intent.putExtra("writer", data.writer)
            intent.putExtra("date", data.date)
            intent.putExtra("avatar", data.avatar)
            context.startActivity(intent)
        }
    }
}