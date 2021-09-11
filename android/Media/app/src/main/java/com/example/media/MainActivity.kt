package com.example.media

import android.media.MediaPlayer
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.provider.MediaStore
import android.view.LayoutInflater
import com.example.media.databinding.ActivityMainBinding

class MainActivity : AppCompatActivity() {
    lateinit var binding:ActivityMainBinding
    private val player = MediaPlayer()
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        binding = ActivityMainBinding.inflate(LayoutInflater.from(this))
        setContentView(binding.root)

        ini()

        binding.play.setOnClickListener {
            if(player.isPlaying){
                binding.play.text = "PLAY"
                player.pause()
            }else{
                binding.play.text = "PAUSE"
                player.start()
            }
        }

        binding.stop.setOnClickListener {
            player.reset()
            ini()
        }
    }

    override fun onDestroy() {
        super.onDestroy()
        player.stop()
        player.release()
    }

    private fun ini(){
        val assetManager = assets
        val fd = assetManager.openFd("music.mp3")
        player.setDataSource(fd.fileDescriptor, fd.startOffset, fd.length)
        player.prepare()
    }
}