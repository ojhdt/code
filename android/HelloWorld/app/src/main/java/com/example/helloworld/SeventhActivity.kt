package com.example.helloworld

import android.content.Context
import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.view.View
import android.widget.AdapterView
import android.widget.Toast
import kotlinx.android.synthetic.main.activity_seventh.*

class SeventhActivity : AppCompatActivity(), AdapterView.OnItemClickListener {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_seventh)
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
        val adapter = MyAdapter(this, data)
        custom_adapter_listview.adapter = adapter

        custom_adapter_listview.setOnItemClickListener(this)
    }



    companion object{
        fun actionStart(context:Context){
            val intent = Intent(context, SeventhActivity::class.java)
            context.startActivity(intent)
        }
    }

    override fun onItemClick(parent: AdapterView<*>?, view: View?, position: Int, id: Long) {
        Toast.makeText(this, "Item${position} CLicked", Toast.LENGTH_SHORT).show()
    }
}