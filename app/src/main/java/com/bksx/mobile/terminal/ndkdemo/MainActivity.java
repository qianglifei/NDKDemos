package com.bksx.mobile.terminal.ndkdemo;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.TextView;


public class MainActivity extends AppCompatActivity {
    private static final String TAG = "MainActivity";

    private String[] strings ={"apple","pear","banana"};

    static {
        System.loadLibrary("native-lib");
    }
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        // Example of a call to a native method
        //JNIDynamicLoad jniDynamicLoad = new JNIDynamicLoad();
        /**
         * java与jni基础类型转化
         */
        //JNIBasicType jniBasicType = new JNIBasicType();
        /**
         * java与jni字符串转化
         */
        //JNIString jniString = new JNIString();
        /**
         * java与JNI引用类型转换
         */
        JNIReferenceType jniReferenceType = new JNIReferenceType();
        /**
         * JNI 访问Java 类字段
         */
        JNIAccessField jniAccessField = new JNIAccessField();
        final Animal animal = new Animal("animal");
        final TextView tv = findViewById(R.id.sample_text);

        tv.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
               // tv.setText(jniDynamicLoad.sum(1,4) +"");
          //      tv.setText(jniBasicType.callNativeInt(6) +"");
                //导入头文件
                //调用示例
              //  tv.setText(jniString.callNativeString("你好啊"));
               // tv.setText(jniReferenceType.callNativeStringArray(strings));
                //jniAccessField.accessInstanceField(animal);
                //jniAccessField.accessStaticField(animal);
                JNIAccessField.staticAccessInstanceField();
                tv.setText(JNIAccessField.num +"");
            }
        });

    }

    private native String stringFromJNI();

}
