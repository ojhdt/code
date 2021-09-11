package com.example.notification

import android.app.Notification
import android.app.NotificationChannel
import android.app.NotificationManager
import android.app.PendingIntent
import android.content.Context
import android.content.Intent
import android.graphics.BitmapFactory
import android.os.Build
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.view.LayoutInflater
import androidx.core.app.NotificationCompat
import com.example.notification.databinding.ActivityMainBinding

class MainActivity : AppCompatActivity() {
    lateinit var binding: ActivityMainBinding
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        binding = ActivityMainBinding.inflate(LayoutInflater.from(this))
        setContentView(binding.root)

        val manager = getSystemService(Context.NOTIFICATION_SERVICE) as NotificationManager
        //通知渠道
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.O) {
            val channal =
                NotificationChannel("normal", "Normal", NotificationManager.IMPORTANCE_DEFAULT)
            manager.createNotificationChannel(channal)
        }
        binding.btn.setOnClickListener {
            val intent = Intent(this, SecondActivity::class.java)
            val notification = NotificationCompat.Builder(this, "normal")
                .setContentTitle("This is notification title")
                .setContentText("This is notification text")
                .setSmallIcon(R.drawable.ic_android_black_24dp)
                .setLargeIcon(
                    BitmapFactory.decodeResource(
                        resources,
                        R.drawable.ic_launcher_foreground
                    )
                ).setContentIntent(PendingIntent.getActivity(this, 0, intent, 0))
                .setAutoCancel(true)
                .build()
            manager.notify(1, notification)
        }

    }
}

