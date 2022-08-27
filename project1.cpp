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
    int HRconnect=40;
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
    vector<int> technicalround2process;
    
    //add-hrconnect-into-the-process
    HRprocess.push_back(HRconnect);
    technicalscreeningprocess.push_back(technicalscreening);
    technicalround1process.push_back(technicalround1);
    technicalround1process.push_back(technicalround1);
    technicalround2process.push_back(technicalround2);
    technicalround2process.push_back(technicalround2);
    technicalround2process.push_back(technicalround2);
    
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
            if(goingintonextroundafterhr!=0){
                // int finalone=goingtoadd+goingintonextroundafterhr;
                // technicalscreeningprocess.push_back(finalone);
            }
            int finalone=goingtoadd+goingintonextroundafterhr;
            technicalscreeningprocess.push_back(finalone);
            
            
            cout<<"technicalscreeingindex else block "<<" "<<technicalscreeningprocess[technicalscreeingindex]<<endl;
        }
        
        int techscreenupdate=technicalscreeningprocess[technicalscreeingindex]-technicalscreeningPannnel;
        int small1=0;
        if(techscreenupdate>=0){
            technicalscreeningprocess.push_back(techscreenupdate);
            cout<<"yes i  am going into this buddy"<<" "<<techscreenupdate<<" "<<technicalscreeningprocess[technicalscreeingindex]<<endl;
            technicalscreeingindex++;
            small1=1;
            techscreenupdate=technicalscreeningPannnel;
        }else{
            techscreenupdate=technicalscreeningprocess[technicalscreeingindex];
            //technicalscreeingindex++;
        }
        
        
        
        cout<<"technical screeing is after doing his/her weekly task is"<<" "<<techscreenupdate<<endl;
        
        cout<<"technical screeing next index"<<" "<<technicalscreeningprocess[technicalscreeingindex]<<endl;
        
        
        
        int goingintonextroundaftertechscreen=probabilityRatio(techscreenupdate);
        
        cout<<"goingintonextroundaftertechscreen "<<" "<<goingintonextroundaftertechscreen<<endl;
        
        
        
        
        
        
        
        //detailed-technical-assessment-round-1
        if(technicalround1process[techround1index]==0){
            technicalround1process.push_back(goingintonextroundaftertechscreen);
            
            cout<<"detailed technicalscreeningprocess  round 1 if bblock"<<" "<<technicalround1process[techround1index]<<endl;
        }else{
            int goingtoadd=technicalround1process[techround1index];
            technicalround1process.pop_back();
            if(goingintonextroundaftertechscreen!=0){
                int finalone=goingtoadd+goingintonextroundaftertechscreen;
                technicalround1process.push_back(finalone);
            }
            
            cout<<"detailed technicalscreeingindex round 1else block "<<" "<<technicalround1process[techround1index]<<endl;
        }
        
        int techround1nupdate=technicalround1process[techround1index]-technicalround1Pannel;
        int small2=0;
        if(techround1nupdate>=0){
            technicalround1process.push_back(techround1nupdate);
            techround1index++;
            small2=1;
            techround1nupdate=technicalround1Pannel;
        }else{
            techround1nupdate=technicalround1process[techround1index];
        }
        
        
        
        cout<<"detailed technical screeing round 1 is after doing his/her weekly task is"<<" "<<techround1nupdate<<endl;
        
        cout<<"detailed technical screeing round 1 next index"<<" "<<technicalround1process[techround1index]<<endl;
        
        
        
        int goingintonextroundafterdetltechscreen1=probabilityRatio(techround1nupdate);
        
        cout<<"goingintonextroundaftertechscreen "<<" "<<goingintonextroundafterdetltechscreen1<<endl;
        
        
        
        
        
        
        
        
        ////detailed-technical-assessment-round-2
        if(technicalround2process[techround2index]==0){
            technicalround2process.push_back(goingintonextroundafterdetltechscreen1);
            
            cout<<"detailed technicalscreeningprocess  round 2 if bblock"<<" "<<technicalround2process[techround2index]<<endl;
        }else{
            int goingtoadd=technicalround2process[techround2index];
            technicalround2process.pop_back();
            int finalone=goingtoadd+goingintonextroundafterdetltechscreen1;
            technicalround2process.push_back(finalone);
            
            cout<<"detailed technicalscreeingindex round 2 else block "<<" "<<technicalround2process[techround2index]<<endl;
        }
        
        int techround2nupdate=technicalround2process[techround2index]-technicalround2Pannel;
        int small3=0;
        if(techround2nupdate>=0){
            technicalround2process.push_back(techround2nupdate);
            techround2index++;
            small3=1;
            techround2nupdate=technicalround2Pannel;
        }else{
            techround2nupdate=technicalround2process[techround2index];
            techround2index++;
        }
        
        
        cout<<" i am testing this only for finding index "<<" "<<technicalround2process[techround2index]<<endl;
        cout<<"detailed technical screeing round 2 is after doing his/her weekly task is"<<" "<<techround2nupdate<<endl;
        
        cout<<"detailed technical screeing round 2 next index"<<" "<<technicalround2process[techround2index]<<endl;
        
        
        
        int goingintonextroundafterdetltechscreen2=probabilityRatio(techround2nupdate);
        
        cout<<"goingintonextroundafterdetltechscreen2 "<<" "<<goingintonextroundafterdetltechscreen2<<endl;
        
        
        //detailed-technical-assessment-1
        
        
        // cout<<"technical one is after doing his/her weekly task is"<<" "<<technicalscreeningprocess.at(hrindex)<<endl;
        
        
        // cout<<"going "<<" "<<goingintonextroundafterhr<<endl;
        
        //int technicalScreeingUpdate=technicalscreeningprocess
        
        if(technicalround1process[techround1index]==0){
            break;
        }
    }
    
    
    
    
}