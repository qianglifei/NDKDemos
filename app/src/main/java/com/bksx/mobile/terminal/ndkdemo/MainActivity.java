package com.bksx.mobile.terminal.ndkdemo;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.TextView;


public class MainActivity extends AppCompatActivity {
    private static final String TAG = "MainActivity";

    private String[] strings ={"apple","pear","banana"};

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        // Example of a call to a native method
        JNIDynamicLoad jniDynamicLoad = new JNIDynamicLoad();
        final TextView tv = findViewById(R.id.sample_text);

        tv.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                tv.setText(jniDynamicLoad.getNativeString());
            }
        });

    }


}
