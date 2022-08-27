#include<bits/stdc++.h>
using namespace std;

int probabilityRatio(int n){
    int value=(ceil)(n*0.8);
    return value;
}

int main(){
    
    cout<<"Enter the no of SSE you want to hire"<<endl;
    int SSE=0;
    cin>>SSE;
    
    int week=0;
    
    
    //historical data
    int HRconnect=30;
    int technicalscreening=0;
    int technicalround1=0;
    int technicalround2=0;
    
    //panel-avaliability
    int HRpannel=20;
    int technicalscreeningPannnel=10;
    int technicalround1Pannel=5;
    int technicalround2Pannel=5;
    
    //now-make-vector-to-store-the-values-of-remaing-values-of-pannnel-and-remaining-candidates
    vector<int> HRprocess;
    vector<int> technicalscreeningprocess;
    vector<int> technicalround1process;
    vector<int> technicalround2HRprocess;
    
    //add-hrconnect-into-the-process
    HRprocess.push_back(HRconnect);
    technicalscreeningprocess.push_back(technicalscreening);
    technicalround1process.push_back(technicalround1);
    technicalround2HRprocess.push_back(technicalround2);
    
    //indexes-for-iterating-inn-vector
    int hrindex=0;
    int technicalscreeingindex=1;
    int techround1index=2;
    int techround2index=3;
    
    //lets-start-iterating
    while(true){
        
        //this-is-for-hrconnect
        int hrupdate=HRprocess.at(hrindex)-HRpannel;
        int small=0;
        if(hrupdate>=0){
            HRprocess.push_back(hrupdate);
            hrindex++;
            small=1;
            hrupdate=HRpannel;
        }
        else{
            hrupdate=HRprocess.at(hrindex);
        }
        
        
        cout<<"Hrupdate is after doing his/her weekly task is"<<" "<<hrupdate<<endl;
        
        int goingintonextroundafterhr=probabilityRatio(hrupdate);
        
        cout<<"goingintonextroundafterhr"<<" "<<goingintonextroundafterhr<<endl;
        
        
        cout<<"the technical screeing process is "<<" "<<technicalscreeningprocess[technicalscreeingindex]<<endl;
        
        //technical-screeing-block-started
        if(technicalscreeningprocess[technicalscreeingindex]==0){
            technicalscreeningprocess.push_back(goingintonextroundafterhr);
            
            cout<<"technicalscreeningprocess if bblock"<<" "<<technicalscreeningprocess[technicalscreeingindex]<<endl;
        }else{
            int goingtoadd=technicalscreeningprocess[technicalscreeingindex];
            technicalscreeningprocess.pop_back();
            int finalone=goingtoadd+goingintonextroundafterhr;
            technicalscreeningprocess.push_back(finalone);
            
            cout<<"technicalscreeingindex else block "<<" "<<technicalscreeningprocess[technicalscreeingindex]<<endl;
        }
        
        
        //detailed-technical-assessment-1
        
        
        // cout<<"technical one is after doing his/her weekly task is"<<" "<<technicalscreeningprocess.at(hrindex)<<endl;
        
        
        // cout<<"going "<<" "<<goingintonextroundafterhr<<endl;
        
        //int technicalScreeingUpdate=technicalscreeningprocess
        
        
        break;
    }
    
    
    
    
}