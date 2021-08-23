package com.example.helloworld

import android.content.Context
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.ImageView
import android.widget.TextView
import androidx.recyclerview.widget.RecyclerView

class LinearAdapter(
    val context: Context,
    private val data: List<Map<String, Any>>,
    private val listener: MyOnClickListener
) :
    RecyclerView.Adapter<LinearAdapter.ViewHolder>() {

    override fun onCreateViewHolder(parent: ViewGroup, viewType: Int): ViewHolder {
        val inflater = LayoutInflater.from(context)
        return ViewHolder(inflater.inflate(R.layout.song_item, null))
    }

    override fun onBindViewHolder(holder: ViewHolder, position: Int) {
        val item = data[position]
        holder.cover.setImageResource(item["album_cover"] as Int)
        holder.title.text = item["song_item_title"] as CharSequence?
        holder.subtitle.text = item["song_item_subtitle"] as CharSequence?
        holder.itemView.setOnClickListener{
            listener.onCLick(position)
        }
    }

    override fun getItemCount(): Int {
        return data.size
    }

    inner class ViewHolder(view: View) : RecyclerView.ViewHolder(view) {
        val cover = view.findViewById<ImageView>(R.id.album_cover)
        val title = view.findViewById<TextView>(R.id.song_item_title)
        val subtitle = view.findViewById<TextView>(R.id.song_item_subtitle)
    }

    interface MyOnClickListener{
        fun onCLick(position: Int)
    }
}
