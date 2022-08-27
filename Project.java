package prediction;
import java.util.*;
public class Project {
	public static int percent(int n) {
		return (int) (Math.ceil(n * 0.8));
	}
	
	public static void main(String[] args) {
		
		ArrayList<Integer> HR = new ArrayList();
		ArrayList<Integer> T1 = new ArrayList();
		ArrayList<Integer> T2 = new ArrayList();
		ArrayList<Integer> CF = new ArrayList();
		
		int week=0;
		
		 
		int hr=70;
		int t1=0;
		int t2=0;
		int cf=0;
		
		
//		pannel
		int hrp=20;
		int t1p=10;
		int t2p=5;
		int cfp=5;
		
		ArrayList<Integer>hrl=new ArrayList();
		hrl.add(hr);
		ArrayList<Integer>t1l=new ArrayList();
		t1l.add(t1);
		ArrayList<Integer>t2l=new ArrayList();
		t2l.add(t2);
		
		ArrayList<Integer>cfl=new ArrayList();
		cfl.add(cf);
		
		boolean T1Started = false;
		boolean T2Started = false;
		boolean CFStarted = false;
		
		while(true) {
			
			int hrupdate=hrl.get(week)-hrp;
			
//			System.out.println(hrl.get(week));
			
			int phrp = percent(hrp);
			
			if(hrupdate>=0) {
				hrl.add(hrupdate);
				HR.add(hrp);
			}
			else {
				if(hrl.get(week) > 0) {
					phrp = percent(hrl.get(week));
					HR.add(hrl.get(week));
				}
				else {
					phrp = 0;
					HR.add(0);
				}
				hrl.add(0);
			}
			
//		adding elements in t1l
			
//			t1l.add(phrp);
			if(!T1Started && phrp > 0) T1Started = true;
			
			
			
			int t1update=t1l.get(week)-t1p;
			
			int pt1p=percent(t1p);
			
			if(t1update>=0) {
				t1l.add(percent(t1update) + phrp);
				T1.add(t1p);
			} else {
				if(t1l.get(week) > 0) {
					pt1p=percent(t1l.get(week));
					T1.add(t1l.get(week));
				}
				else {
					pt1p=0;
					T1.add(0);
				}
				if(!T1Started) t1l.add(0);
				else t1l.add(phrp);
			}
			
			
//			adding elements in t2l
			
//			t2l.add(pt1p);
			if(!T2Started && pt1p > 0) T2Started = true;
			
			int t2update=t2l.get(week)-t2p;
			
			int pt2p = percent(t2p);
			
			if(t2update>=0) {
				t2l.add(percent(t2update)+pt1p);
				T2.add(t2p);
			}
			else {
				if(t2l.get(week) > 0) {
					pt2p = percent(t2l.get(week));
					T2.add(t2l.get(week));
				}
				else {
					pt2p=0;
					T2.add(0);
				}
				if(!T2Started) t2l.add(0);
				else t2l.add(pt1p);
			}
//			adding elements in cfl
			
			cfl.add(pt2p);
			
			int cfupdate=cfl.get(week)-cfp;
//			System.out.println(cfupdate);
			
			int pcfp=percent(cfp);
			
			if(cfupdate>=0) {
				cfl.add(percent(cfupdate));
				CF.add(cfp);
			} else {
				if(hrl.get(week) == 0 && t1l.get(week) == 0 && t2l.get(week) == 0 && cfl.get(week) == 0) {
					CF.add(cfl.get(week));
					break;
				}
				else {
					cfl.add(cfl.get(week));
					CF.add(0);
				}
			}
			
//			if(week == 5 ) break;
			
			week++;
			
		}
		
		System.out.println(week+1);
		
		System.out.println("HR: " + HR);
		System.out.println("T1: " + T1);
		System.out.println("T2: " + T2);
//		System.out.println("CF: " + CF);
		
		
	}
}







