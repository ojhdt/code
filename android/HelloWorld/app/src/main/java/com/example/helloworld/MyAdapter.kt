package com.example.helloworld

import android.content.Context
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.BaseAdapter
import android.widget.ImageView
import android.widget.TextView
import org.w3c.dom.Text

class MyAdapter(val context: Context, private val data: List<Map<String, Any>>) : BaseAdapter() {
    private val inflater: LayoutInflater = LayoutInflater.from(context)

    inner class ViewHolder(
        val cover: ImageView,
        val title: TextView,
        val subtitle: TextView
    )

    override fun getCount(): Int {
        return data.size
    }

    override fun getItem(position: Int): Any {
        return data[position]
    }

    override fun getItemId(position: Int): Long {
        return 0
    }

    override fun getView(position: Int, convertView: View?, parent: ViewGroup?): View {
        val view: View
        val holder: ViewHolder
        if (convertView == null) {
            view = inflater.inflate(R.layout.song_item, null)
            holder = ViewHolder(
                view.findViewById<ImageView>(R.id.album_cover),
                view.findViewById<TextView>(R.id.song_item_title),
                view.findViewById<TextView>(R.id.song_item_subtitle)
            )
            view.tag = holder
        } else {
            view = convertView
            holder = view.tag as ViewHolder
        }
//        val view = when (convertView) {
//            null -> inflater.inflate(R.layout.song_item, null)
//            else -> convertView
//        }
//
//        val holder = when (convertView) {
//            null -> ViewHolder(
//                view.findViewById<ImageView>(R.id.album_cover),
//                view.findViewById<TextView>(R.id.song_item_title),
//                view.findViewById<TextView>(R.id.song_item_subtitle)
//            )
//        }
        val item: Map<String, Any> = data[position]
//        val cover = view.findViewById<ImageView>(R.id.album_cover)
//        val title = view.findViewById<TextView>(R.id.song_item_title)
//        val subtitle = view.findViewById<TextView>(R.id.song_item_subtitle)
        holder.cover.setImageResource(item["album_cover"] as Int)
        holder.title.text = item["song_item_title"] as CharSequence?
        holder.subtitle.text = item["song_item_subtitle"] as CharSequence?
        return view
    }
}