package com.example.helloworld

import android.content.Context
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.ImageView
import android.widget.TextView
import androidx.recyclerview.widget.RecyclerView
import kotlinx.android.synthetic.main.song_item.view.*

class LinearHorAdapter(val context: Context, val data: List<Map<String, Any>>) :
    RecyclerView.Adapter<LinearHorAdapter.ViewHolder>() {
    inner class ViewHolder(view: View) : RecyclerView.ViewHolder(view) {
        val cover = view.findViewById<ImageView>(R.id.album_cover)
        val title = view.findViewById<TextView>(R.id.song_item_title)
        val subtitle = view.findViewById<TextView>(R.id.song_item_subtitle)
    }

    override fun onCreateViewHolder(parent: ViewGroup, viewType: Int): LinearHorAdapter.ViewHolder {
        return ViewHolder(LayoutInflater.from(context).inflate(R.layout.song_item_hor, null))
    }

    override fun onBindViewHolder(holder: LinearHorAdapter.ViewHolder, position: Int) {
        val item = data[position]
        holder.cover.setImageResource(item.get("album_cover") as Int)
        holder.title.text = item["song_item_title"] as CharSequence?
        holder.subtitle.text = item["song_item_subtitle"] as CharSequence?
    }

    override fun getItemCount(): Int {
        return data.size
    }
}