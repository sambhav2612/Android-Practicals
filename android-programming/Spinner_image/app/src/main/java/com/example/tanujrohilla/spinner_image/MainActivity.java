package com.example.tanujrohilla.spinner_image;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.AdapterView;
import android.widget.ImageView;
import android.widget.Spinner;
import android.view.View;

public class MainActivity extends AppCompatActivity implements  AdapterView.OnItemSelectedListener {

    Spinner sp=null;
    ImageView tv1=null;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        sp=(Spinner)findViewById(R.id.spinner);
        tv1=(ImageView)findViewById(R.id.imageview);
        sp.setOnItemSelectedListener(this);
    }
    public void onItemSelected(AdapterView<?> parent, View view, int pos, long id) {
        if(pos==0){
            tv1.setImageResource(R.drawable.image1);
        }
        if(pos==1){
            tv1.setImageResource(R.drawable.image2);
        }
        if(pos==2){
            tv1.setImageResource(R.drawable.image3);
        }
    }
    public void onNothingSelected(AdapterView<?> parent) {

    }
}
