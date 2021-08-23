package com.example.helloworld

import android.content.Context
import android.content.Intent
import android.graphics.Rect
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.view.View
import android.widget.Toast
import androidx.recyclerview.widget.DividerItemDecoration
import androidx.recyclerview.widget.LinearLayoutManager
import androidx.recyclerview.widget.RecyclerView
import kotlinx.android.synthetic.main.activity_linear_recycler_view.*

class LinearRecyclerViewActivity : AppCompatActivity() {

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_linear_recycler_view)

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
        linear_rv.layoutManager = manager
        linear_rv.adapter = LinearAdapter(this, data, object: LinearAdapter.MyOnClickListener{
            override fun onCLick(position: Int) {
                Toast.makeText(this@LinearRecyclerViewActivity, "${position}", Toast.LENGTH_SHORT).show()
            }
        })
        val divider = DividerItemDecoration(this, DividerItemDecoration.VERTICAL)
        divider.setDrawable(resources.getDrawable(R.drawable.divider))
        linear_rv.addItemDecoration(divider)
    }

//    inner class MyDecoration: RecyclerView.ItemDecoration() {
//        override fun getItemOffsets(
//            outRect: Rect,
//            view: View,
//            parent: RecyclerView,
//            state: RecyclerView.State
//        ) {
//            super.getItemOffsets(outRect, view, parent, state)
//            outRect.set(0,0,0,resources.getDimensionPixelOffset(R.dimen.divideHeight))
//        }
//    }

    companion object{
        fun actionStart(context: Context){
            val intent = Intent(context, LinearRecyclerViewActivity::class.java)
            context.startActivity(intent)
        }
    }
}


