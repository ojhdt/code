package com.example.helloworld

import android.content.Context
import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.SimpleAdapter
import kotlinx.android.synthetic.main.activity_sixth.*

class SixthActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_sixth)

        val data = listOf<Map<String, Any>>(
            mapOf<String, Any>(
                "album_cover" to R.drawable.song1,
                "song_item_title" to "冒険でしょでしょ?",
                "song_item_subtitle" to "平野綾 - RIOT GIRL"
            ),
            mapOf<String, Any>(
                "album_cover" to R.drawable.song2,
                "song_item_title" to "ハレ晴レユカイ?",
                "song_item_subtitle" to "平野綾/茅原実里/後藤邑子 - ハレ晴レユカイ"
            )
        )
        val adapter = SimpleAdapter(
            this,
            data,
            R.layout.song_item,
            arrayOf("album_cover", "song_item_title", "song_item_subtitle"),
            intArrayOf(
                R.id.album_cover,
                R.id.song_item_title,
                R.id.song_item_subtitle,
            )
        )
        simple_adapter_listview.adapter = adapter
    }

    companion object {
        fun actionStart(context: Context) {
            val intent = Intent(context, SixthActivity::class.java)
            context.startActivity(intent)
        }
    }
}