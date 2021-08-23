package com.example.helloworld

import android.content.Context
import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import androidx.recyclerview.widget.LinearLayoutManager
import androidx.recyclerview.widget.RecyclerView
import kotlinx.android.synthetic.main.activity_chat.*

class ChatActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_chat)

        val data:ArrayList<Msg> = ArrayList()
        data.add(Msg("Ojhdt","我好奇在十五年前，当时在电视上收看《凉宫春日的忧郁》06版时的追番元老",R.drawable.img1, Msg.TYPE_SENT))
        data.add(Msg("Ojhdt","是如何看待这堪称动漫界最大胆尝试的",R.drawable.img1, Msg.TYPE_SENT))
        data.add(Msg("Ojhdt","最挑战观众耐心的桥段",R.drawable.img1, Msg.TYPE_SENT))
        data.add(Msg("Rikka","令我难以相信的是",R.drawable.img3, Msg.TYPE_RECEIVED))
        data.add(Msg("Ojhdt","之后我竟将该桥段",R.drawable.img1, Msg.TYPE_SENT))
        data.add(Msg("Rikka","反反复复地观看数遍",R.drawable.img3, Msg.TYPE_RECEIVED))

        val manager = LinearLayoutManager(this)
        manager.orientation = LinearLayoutManager.VERTICAL
        chat_rv.layoutManager = manager
        chat_rv.adapter = ChatAdapter(this,data)
    }

    companion object {
        fun actionStart(context: Context) {
            val intent = Intent(context, ChatActivity::class.java)
            context.startActivity(intent)
        }
    }
}