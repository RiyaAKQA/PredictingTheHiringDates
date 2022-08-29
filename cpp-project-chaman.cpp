#include<bits/stdc++.h>
using namespace std;

int probabilityRatio(int n,int ratio){
    float ans = (float)ratio / (float)100;
    int value=(ceil)(n*ans);
    return value;
}

int main(){
    
    cout<<"Enter the no of SSE you want to hire"<<endl;
    int SSE=0;
    cin>>SSE;
    
    int week=0;
    
    //historical-variables
    int hrdata=0;
    int technicalscreeningdata=0;
    int technicalround1data=0;
    int technicalround2data=0;
    int culturefitmentdata=0;
    int offerprocessdata=0;
    int offeraccepteddata=0;
    int joineddata=0;
    
    //please enter the historical data
    cout<<"please enter the historical data of hr Connect"<<endl;
    cin>>hrdata;
    
    cout<<"please enter the historical data of technical screeing Connect"<<endl;
    cin>>technicalscreeningdata;
    
    cout<<"please enter the historical data of Detailed technical round 1 Connect"<<endl;
    cin>>technicalround1data;
    
    cout<<"please enter the historical data of Detailed technical round 2 Connect"<<endl;
    cin>>technicalround2data;
    
    cout<<"please enter the historical data of culturefitment round Connect"<<endl;
    cin>>culturefitmentdata;
    
    cout<<"please enter the historical data of offerprocess Connect"<<endl;
    cin>>offerprocessdata;
    
    cout<<"please enter the historical data of offeraccepteddata Connect"<<endl;
    cin>>offeraccepteddata;
    
    cout<<"please enter the historical data of joineddata Connect"<<endl;
    cin>>joineddata;
    
    
    
    
    float ans = (float)hrdata / (float)joineddata;
    int candidates=(ceil)(ans);
    candidates=SSE*candidates;
    
    //historical data
    int HRconnect=candidates;
    int technicalscreening=0;
    int technicalround1=0;
    int technicalround2=0;
    int culturefitment=0;
    int offerprocess=0;
    
    
    
    
    // int HRpannel=20;
    // int technicalscreeningPannnel=10;
    // int technicalround1Pannel=5;
    // int technicalround2Pannel=5;
    // int culturefitmentpannel=3;
    // int offerprocesspannel=3;
    
    //panel-avaliability
    
    int HRpannel=0;
    int technicalscreeningPannnel=0;
    int technicalround1Pannel=0;
    int technicalround2Pannel=0;
    int culturefitmentpannel=0;
    int offerprocesspannel=0;
    
    cout<<"Enter HR Connect Avaliability in week"<<endl;
    cin>>HRpannel;
    
    cout<<"Enter Technical screeing Connect Avaliability in week"<<endl;
    cin>>technicalscreeningPannnel;
    
    cout<<"Enter Detailed Technical Screeing Round 1 Connect Avaliability in week"<<endl;
    cin>>technicalround1Pannel;
    
    cout<<"Enter Detailed Technical Screeing Round 2 Connect Avaliability in week"<<endl;
    cin>>technicalround2Pannel;
    
    cout<<"Enter Culture Fitment Connect Avaliability in week"<<endl;
    cin>>culturefitmentpannel;
    
    cout<<"Enter Offer Process Connect Avaliability in week"<<endl;
    cin>>offerprocesspannel;
    
    
    //now-make-vector-to-store-the-values-of-remaing-values-of-pannnel-and-remaining-candidates
    vector<int> HRprocess;
    vector<int> technicalscreeningprocess;
    vector<int> technicalround1process;
    vector<int> technicalround2process;
    vector<int> culturefitmentprocess;
    vector<int> offerprocessvector;
    
    //add-hrconnect-into-the-process
    HRprocess.push_back(HRconnect);
    
    technicalscreeningprocess.push_back(technicalscreening);
    
    technicalround1process.push_back(technicalround1);
    technicalround1process.push_back(technicalround1);
    
    technicalround2process.push_back(technicalround2);
    technicalround2process.push_back(technicalround2);
    technicalround2process.push_back(technicalround2);
    
    culturefitmentprocess.push_back(culturefitment);
    culturefitmentprocess.push_back(culturefitment);
    culturefitmentprocess.push_back(culturefitment);
    culturefitmentprocess.push_back(culturefitment);
    
    offerprocessvector.push_back(offerprocess);
    offerprocessvector.push_back(offerprocess);
    offerprocessvector.push_back(offerprocess);
    offerprocessvector.push_back(offerprocess);
    offerprocessvector.push_back(offerprocess);
    
    //indexes-for-iterating-inn-vector
    int hrindex=0;
    int technicalscreeingindex=1;
    int techround1index=2;
    int techround2index=3;
    int culturefitmentindex=4;
    int offerprocessindex=5;
    
    
    int count=1;
    //lets-start-iterating
    while(true){
        
        
        cout<<"************-------------"<<endl;
        //this-is-for-hrconnect
        int hrupdate=HRprocess[hrindex]-HRpannel;
        int small=0;
        if(hrupdate>=0){
            HRprocess.push_back(hrupdate);
            hrindex++;
            small=1;
            hrupdate=HRpannel;
        }
        else{
            hrupdate=HRprocess[hrindex];
            hrindex++;
        }
        
        
        cout<<"Hrupdate is after doing his/her weekly task is"<<" "<<hrupdate<<endl;
        
        int goingintonextroundafterhr=probabilityRatio(hrupdate,technicalscreeningdata);
        
        cout<<"goingintonextroundafterhr"<<" "<<goingintonextroundafterhr<<endl;
        
        
        cout<<"the technical screeing process status is "<<" "<<technicalscreeningprocess[technicalscreeingindex]<<endl;
        
        
        
        
        
        
        
        
        
        //technical-screeing-block-started
        if(technicalscreeningprocess[technicalscreeingindex]==0){
            technicalscreeningprocess.push_back(goingintonextroundafterhr);
            
            cout<<"technicalscreeningprocess enters in if bblock and status is "<<" "<<technicalscreeningprocess[technicalscreeingindex]<<endl;
        }else{
            int goingtoadd=technicalscreeningprocess[technicalscreeingindex];
            technicalscreeningprocess.pop_back();
            
            int finalone=goingtoadd+goingintonextroundafterhr;
            // if(finalone>technicalscreeningPannnel){
            //     technicalscreeningprocess.push_back(finalone);
            // }
            technicalscreeningprocess.push_back(finalone);
            
            
            cout<<"technical screeing  update is "<<" "<<technicalscreeningprocess[technicalscreeingindex];
            
            
            cout<<"technicalscreeingindex enters in else block and status is "<<" "<<technicalscreeningprocess[technicalscreeingindex]<<endl;
        }
        
        int techscreenupdate=technicalscreeningprocess[technicalscreeingindex]-technicalscreeningPannnel;
        
        cout<<"techscreenupdate is"<<" "<<techscreenupdate<<endl;
        int small1=0;
        if(techscreenupdate>=0){
            technicalscreeningprocess.push_back(techscreenupdate);
            cout<<"yes i  am going into this buddy"<<" "<<techscreenupdate<<" "<<technicalscreeningprocess[technicalscreeingindex]<<endl;
            technicalscreeingindex++;
            small1=1;
            techscreenupdate=technicalscreeningPannnel;
        }else{
            techscreenupdate=technicalscreeningprocess[technicalscreeingindex];
            technicalscreeingindex++;
        }
        
        
        cout<<"technical screeing is after doing his/her weekly task is"<<" "<<techscreenupdate<<endl;
        
        cout<<"technical screeing next index"<<" "<<technicalscreeningprocess[technicalscreeingindex]<<endl;
        
        
        
        int goingintonextroundaftertechscreen=probabilityRatio(techscreenupdate,technicalround1data);
        
        cout<<"goingintonextroundaftertechscreen "<<" "<<goingintonextroundaftertechscreen<<endl;
        
        
        
        
        
        
        
        //detailed-technical-assessment-round-1
        if(technicalround1process[techround1index]==0){
            technicalround1process.push_back(goingintonextroundaftertechscreen);
            
            cout<<"detailed technicalscreeningprocess  round 1 if bblock"<<" "<<technicalround1process[techround1index]<<endl;
        }else{
            int goingtoadd=technicalround1process[techround1index];
            // if(goingintonextroundaftertechscreen!=0){
            //     technicalround1process.pop_back();
            //     int finalone=goingtoadd+goingintonextroundaftertechscreen;
            //     technicalround1process.push_back(finalone);
            // }
            technicalround1process.pop_back();
            int finalone=goingtoadd+goingintonextroundaftertechscreen;
            technicalround1process.push_back(finalone);
            
            cout<<"detailed technicalscreeingindex round 1else block "<<" "<<technicalround1process[techround1index]<<endl;
        }
        
        int techround1nupdate=technicalround1process[techround1index]-technicalround1Pannel;
        cout<<"techround1nupdate "<<techround1nupdate<<endl;
        int small2=0;
        if(techround1nupdate>=0){
            cout<<"yes  it is entering into this"<<" "<<technicalround1process[techround1index]<<endl;
            
            technicalround1process.push_back(techround1nupdate);
            techround1index++;
            //technicalround1process[techround1index]=techround1nupdate;
            
            cout<<" hi man"<<" "<<technicalround1process[techround1index]<<endl;
            small2=1;
            techround1nupdate=technicalround1Pannel;
        }else{
            techround1nupdate=technicalround1process[techround1index];
            techround1index++;
        }
        
        
        
        cout<<"detailed technical screeing round 1 is after doing his/her weekly task is"<<" "<<techround1nupdate<<endl;
        
        cout<<"detailed technical screeing round 1 next index"<<" "<<technicalround1process[techround1index]<<endl;
        
        
        
        int goingintonextroundafterdetltechscreen1=probabilityRatio(techround1nupdate,technicalround2data);
        
        cout<<"goingintonextroundaftertechscreen "<<" "<<goingintonextroundafterdetltechscreen1<<endl;
        
        
        
        
        
        
        
        
        //detailed-technical-assessment-round-2
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
        
        cout<<"techround2nupdate"<<" "<<techround2nupdate<<endl;
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
        
        
        
        int goingintonextroundafterdetltechscreen2=probabilityRatio(techround2nupdate,culturefitmentdata);
        
        cout<<"goingintonextroundafterdetltechscreen2 "<<" "<<goingintonextroundafterdetltechscreen2<<endl;
        
        
        
        
        
        //culture-fitment-round
        if(culturefitmentprocess[culturefitmentindex]==0){
            culturefitmentprocess.push_back(goingintonextroundafterdetltechscreen2);
            
            cout<<"culturefitmentprocess enters in if block "<<" "<<culturefitmentprocess[culturefitmentindex]<<endl;
        }else{
            int goingtoadd=culturefitmentprocess[culturefitmentindex];
            culturefitmentprocess.pop_back();
            int finalone=goingtoadd+goingintonextroundafterdetltechscreen2;
            culturefitmentprocess.push_back(finalone);
            
            cout<<"culturefitmentprocess round 2 else block "<<" "<<culturefitmentprocess[culturefitmentindex]<<endl;
        }
        
        int culturefitmentupdate=culturefitmentprocess[culturefitmentindex]-culturefitmentpannel;
        
        
        cout<<"culturefitmentupdate"<<" "<<culturefitmentupdate<<endl;
        int small4=0;
        if(culturefitmentupdate>=0){
            culturefitmentprocess.push_back(culturefitmentupdate);
            culturefitmentindex++;
            small4=1;
            culturefitmentupdate=culturefitmentpannel;
        }else{
            culturefitmentupdate=culturefitmentprocess[culturefitmentindex];
            culturefitmentindex++;
        }
        
        
        
        cout<<" i am testing this only for finding index "<<" "<<culturefitmentprocess[culturefitmentindex]<<endl;
        cout<<"culturefitmentprocess is after doing his/her weekly task is"<<" "<<culturefitmentupdate<<endl;
        
        cout<<"culturefitmentprocess next index"<<" "<<culturefitmentprocess[culturefitmentindex]<<endl;
        
        
        
        int goingintonextroundafterculture=probabilityRatio(culturefitmentupdate,offerprocessdata);
        
        cout<<"goingintonextroundafterculture "<<" "<<goingintonextroundafterculture<<endl;
        
    
        
        
        
        
        
        
        
        //offerprocesspannel
        //offer-process
        if(offerprocessvector[offerprocessindex]==0){
            offerprocessvector.push_back(goingintonextroundafterculture);
            
            cout<<"offer-process enters in if block "<<" "<<offerprocessvector[offerprocessindex]<<endl;
        }else{
            int goingtoadd=offerprocessvector[offerprocessindex];
            offerprocessvector.pop_back();
            int finalone=goingtoadd+goingintonextroundafterculture;
            offerprocessvector.push_back(finalone);
            
            cout<<"offer-process round 2 else block "<<" "<<offerprocessvector[offerprocessindex]<<endl;
        }
        
        int offerprocessupdate=offerprocessvector[offerprocessindex]-offerprocesspannel;
        int small5=0;
        if(offerprocessupdate>=0){
            offerprocessvector.push_back(offerprocessupdate);
            offerprocessindex++;
            small5=1;
            offerprocessupdate=offerprocesspannel;
        }else{
            offerprocessupdate=offerprocessvector[offerprocessindex];
            offerprocessindex++;
        }
        
        
        cout<<" i am testing this only for finding index "<<" "<<offerprocessvector[offerprocessindex]<<endl;
        cout<<"offer-process is after doing his/her weekly task is"<<" "<<offerprocessupdate<<endl;
        
        cout<<"offer-process next index"<<" "<<offerprocessvector[offerprocessindex]<<endl;
        
        
        
        int goingintonextroundafterofferprocess=probabilityRatio(offerprocessupdate,offeraccepteddata);
        
        cout<<"goingintonextroundafterofferprocess "<<" "<<goingintonextroundafterofferprocess<<endl;
        
        
        
        cout<<"*************************"<<" "<<"So my answer is"<<" "<<"**********************************"<<" "<<goingintonextroundafterofferprocess<<endl;
        
        
        
        
        cout<<"******"<<endl;
        cout<<"******"<<endl;
        cout<<"******"<<endl;
        cout<<"******"<<endl;
        cout<<"******"<<endl;
        cout<<"******"<<endl;
        cout<<"******"<<endl;
        cout<<"******"<<endl;
        cout<<"******"<<endl;
        cout<<"******"<<endl;
        
        cout<<"Hr connect"<<" "<<HRprocess[hrindex]<<endl;
        cout<<"technical screeing connect"<<" "<<technicalscreeningprocess[technicalscreeingindex]<<endl;
        cout<<"detailed technical screeing round 1 connect"<<" "<<technicalround1process[techround1index]<<endl;
        cout<<"detailed technical screeing round 2 connect"<<" "<<technicalround2process[techround2index]<<endl;
        cout<<"culturefitment connect"<<" "<<culturefitmentprocess[culturefitmentindex]<<endl;
        cout<<"offer process connect"<<" "<<offerprocessvector[offerprocessindex]<<endl;
        
        
        
        if(offerprocessvector[offerprocessindex]==0 && technicalscreeningprocess[technicalscreeingindex]==0 && technicalround1process[techround1index]==0
        && technicalround2process[techround2index]==0 && culturefitmentprocess[culturefitmentindex]==0 && HRprocess[hrindex]==0){
            cout<<"come inside*******"<<endl;
            break;
        }
        
        
        cout<<"************-------------"<<endl;
        
        // if(offerprocessvector[offerprocessindex]==0){
        //     cout<<"come inside*******"<<endl;
        //     break;
        // }
        // if(count==1){
        //     offerprocessindex++;
        // }
    }
    
    
    
    
}