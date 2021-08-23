package com.example.helloworld

import android.content.Context
import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import androidx.recyclerview.widget.LinearLayoutManager
import androidx.recyclerview.widget.RecyclerView
import kotlinx.android.synthetic.main.activity_linear_hor_recycler_view.*

class LinearHorRecyclerViewActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_linear_hor_recycler_view)

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
            ),
            mapOf<String, Any>(
                "album_cover" to R.drawable.song3,
                "song_item_title" to "Speed of Light",
                "song_item_subtitle" to "塞壬唱片-MSR/DJ Okawari/二宮愛 - Speed of Light"
            ),
            mapOf<String, Any>(
                "album_cover" to R.drawable.song4,
                "song_item_title" to "好調好調",
                "song_item_subtitle" to "神前暁 - 凉宫ハルヒの忧郁 OST&RADIO CD-SOS団ラジオ支部 ダイジェスト02"
            ),
            mapOf<String, Any>(
                "album_cover" to R.drawable.song1,
                "song_item_title" to "冒険でしょでしょ?",
                "song_item_subtitle" to "平野綾 - RIOT GIRL"
            ),
            mapOf<String, Any>(
                "album_cover" to R.drawable.song2,
                "song_item_title" to "ハレ晴レユカイ?",
                "song_item_subtitle" to "平野綾/茅原実里/後藤邑子 - ハレ晴レユカイ"
            ),
            mapOf<String, Any>(
                "album_cover" to R.drawable.song3,
                "song_item_title" to "Speed of Light",
                "song_item_subtitle" to "塞壬唱片-MSR/DJ Okawari/二宮愛 - Speed of Light"
            ),
            mapOf<String, Any>(
                "album_cover" to R.drawable.song4,
                "song_item_title" to "好調好調",
                "song_item_subtitle" to "神前暁 - 凉宫ハルヒの忧郁 OST&RADIO CD-SOS団ラジオ支部 ダイジェスト02"
            ),
            mapOf<String, Any>(
                "album_cover" to R.drawable.song1,
                "song_item_title" to "冒険でしょでしょ?",
                "song_item_subtitle" to "平野綾 - RIOT GIRL"
            ),
            mapOf<String, Any>(
                "album_cover" to R.drawable.song2,
                "song_item_title" to "ハレ晴レユカイ?",
                "song_item_subtitle" to "平野綾/茅原実里/後藤邑子 - ハレ晴レユカイ"
            ),
            mapOf<String, Any>(
                "album_cover" to R.drawable.song3,
                "song_item_title" to "Speed of Light",
                "song_item_subtitle" to "塞壬唱片-MSR/DJ Okawari/二宮愛 - Speed of Light"
            ),
            mapOf<String, Any>(
                "album_cover" to R.drawable.song4,
                "song_item_title" to "好調好調",
                "song_item_subtitle" to "神前暁 - 凉宫ハルヒの忧郁 OST&RADIO CD-SOS団ラジオ支部 ダイジェスト02"
            )
        )

        val manager = LinearLayoutManager(this)
        manager.orientation = LinearLayoutManager.HORIZONTAL
        linear_rv_h.layoutManager = manager
        linear_rv_h.adapter = LinearHorAdapter(this, data)
    }

    companion object {
        fun actionStart(context: Context) {
            val intent = Intent(context, LinearHorRecyclerViewActivity::class.java)
            context.startActivity(intent)
        }
    }
}