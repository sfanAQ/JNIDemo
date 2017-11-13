package com.sfan.jnidemo;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.TextView;

import com.sfan.jni.JNIHelper;

public class MainActivity extends AppCompatActivity {

    static {
        System.loadLibrary("jni-helper");
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        // Example of a call to a native method
        TextView tv = (TextView) findViewById(R.id.sample_text);
        tv.setText(JNIHelper.getMsg());
    }

}
