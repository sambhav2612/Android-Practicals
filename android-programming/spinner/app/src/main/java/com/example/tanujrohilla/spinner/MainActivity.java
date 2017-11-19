package com.example.tanujrohilla.spinner;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.AdapterView;
import android.widget.Spinner;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity implements AdapterView.OnItemSelectedListener {

    Spinner s=null;
    TextView t=null;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        s=(Spinner)findViewById(R.id.spinner);
        t=(TextView)findViewById(R.id.t);
        s.setOnItemSelectedListener(this);
    }

    @Override
    public void onItemSelected(AdapterView<?> parent, View view, int position, long id) {
        t.setText("position is"+position+"id is"+id+"text ="+((TextView)view).getText());
        //t.setText(((TextView)view).getText());

    }

    @Override
    public void onNothingSelected(AdapterView<?> parent) {

    }
}
