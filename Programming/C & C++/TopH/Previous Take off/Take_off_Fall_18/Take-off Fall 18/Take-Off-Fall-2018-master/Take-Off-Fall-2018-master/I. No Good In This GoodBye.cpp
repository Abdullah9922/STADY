#include <bits/stdc++.h>
using namespace std;
#define TL 100

char in[11][50];
int len[11], pr, desc;
map<string, int> mp;
string b, d, f;

bool checkCondition(int a, string con, int b){
    /// <, >, <=, >=, ==, !=
    if(con=="<") return a<b;
    if(con==">") return a>b;
    if(con=="<=") return a<=b;
    if(con==">=") return a>=b;
    if(con=="==") return a==b;
    if(con=="!=") return a!=b;
}

int assign(int i, string opr, int b){
    /// =, +=, -=, *=, /=, %=
    if(opr=="=") return b;
    if(opr=="+=") return i+b;
    if(opr=="-=") return i-b;
    if(opr=="*=") return i*b;
    if(opr=="/=") return i/b;
    if(opr=="%=") return i%b;
}

bool run(){
    vector<int> tmp;
    while(pr<=TL){
        /// Checking condition
        int ff=0;
        if(mp.count("c")) ff=checkCondition(mp["i"], b, mp["c"]);
        else ff=checkCondition(mp["i"], b, mp["n"]);
        if(!ff) break;

        /// pushing value of
        if(tmp.size() && tmp.back()>mp[f]) desc=1; /// checking if descending sequence
        tmp.push_back(mp[f]);

        /// assigning new value of 'i'
        if(mp.count("e")){
            mp["i"]=assign(mp["i"], d, mp["e"]);
            if(d=="/=" or d=="%=") assert(mp["e"]!=0);
        }
        else{
            if(d=="/=" or d=="%=") assert(mp["n"]!=0);
            mp["i"]=assign(mp["i"], d, mp["n"]);
        }

        pr++;
    }
    return 1;
}

int get_int(int col, char *s){
    long long val=0;
    int sign=1;
    if(s[col]=='-') sign=-1, col++;
    for(int i=col; s[i]; i++){
        if(s[i]<='9' && s[i]>='0') val*=10, val+=s[i]-'0';
        else break;
    }
    return int(val*sign);
}

bool isCondition(char ch){
    if(ch=='>' or ch=='<' or ch=='=' or ch=='!') return 1;
    return 0;
}

bool isOperator(char ch){
    if(ch=='=' or ch=='+' or ch=='-' or ch=='*' or ch=='/' or ch=='%') return 1;
    return 0;
}

string get_operator(int col, char *s){
    string val;
    for(int i=col; s[i]; i++){
        if(isOperator(s[i])){
            val+=s[i];
            if(s[i]=='=') break;
        }
        else break;
    }
    return val;
}

string get_condition(int col, char *s){
    string val;
    for(int i=col; s[i]; i++){
        if(isCondition(s[i])) val+=s[i];
        else break;
    }
    return val;
}

void tokenize(){
    /// tokenizing
    int i=0;
    char tmp[50];
    strcpy(tmp, in[5]);

    /// value of i(a) - signed integer
    while(tmp[i]!='=') i++; i++;
    mp["i"]=get_int(i, tmp);

    /// tokenizing relational condition 'b'
    while(tmp[i]!='i') i++; i++;
    b=get_condition(i, tmp);

    /// tokenizing 'c' - integer or variable
    while(isCondition(tmp[i])) i++;
    if(!isalpha(tmp[i]) or tmp[i]=='-') mp["c"]=get_int(i, tmp);

    /// tokenizing 'd' - operator
    while(tmp[i]!='i') i++; i++;
    d=get_operator(i, tmp);

    /// tokenizing 'e' - integer or variable
    while(isOperator(tmp[i])){
        i++;
        if(tmp[i]=='=') break;
    }
    while(isCondition(tmp[i])) i++;
    if(!isalpha(tmp[i])) mp["e"]=get_int(i, tmp);

    /// identify 'f' - variable
    for(int i=len[7]-1; ; i--){
        if(in[7][i]=='i' or in[7][i]=='n'){
            f+=in[7][i];
            break;
        }
    }

//    printf("i= %d, n= %d\n", mp["i"], mp["n"]);
//    printf("b= %s d= %s\n", b.c_str(), d.c_str());
//    if(mp.count("c")) printf("c %d\n", mp["c"]);
//    if(mp.count("e")) printf("e %d\n", mp["e"]);
//    cout<<"f= "<<f<<endl;
}

bool CE(){
    bool checker[]={0, 0, 0, 1, 1, 0, 0, 1, 0, 1, 0};
    for(int i=0; i<11; i++){
        if(checker[i]){
            if(in[i][len[i]-1]!=';'){
//            	printf("%s\n", in[i]);
//            	printf("%d line a bash khaise '%c'\n", i, in[i][len[i]-1]);
//            	printf("len %d\n", len[i]);
                return 1;
            }
        }
        else{
            if(in[i][len[i]-1]==';'){
//            	printf("%s\n", in[i]);
//            	printf("%d line a bash khaise '%c'\n", i, in[i][len[i]-1]);
//            	printf("len %d\n", len[i]);
                return 1;
            }
        }
    }
    return 0;
}

bool RE(){
    int ff=0;
    for(int i=0; i<len[4]; i++){
        if(in[4][i]=='&'){
            ff=1;
            break;
        }
    }
    if(!ff) return 1;
    ff=0;
    if(mp.count("c")) ff=checkCondition(mp["i"], b, mp["c"]);
    else ff=checkCondition(mp["i"], b, mp["n"]);
    if(ff && (d=="/=" or d=="%=") && (mp.count("e") ? mp["e"]==0 : mp["n"]==0)){
        return 1;
    }
    return 0;

}

bool TLE() { return pr>TL; }

bool WA() { return desc; }

int main(){
#ifdef VAMP
    clock_t tStart = clock();
        freopen("input.txt", "r", stdin);
//        freopen("output.txt", "w", stdout);
#endif
    int t, n;
    scanf("%d", &t);
    while(t--){
        mp.clear();
        b=d=f=""; pr=desc=0;
        scanf("%d ", &n);
        mp["n"]=n;
        for(int i=0; i<11; i++){
            scanf(" %[^\r\n]", in[i]);
            len[i]=0;
            while(in[i][len[i]]!='\n' && in[i][len[i]]!='\0' && in[i][len[i]]!='\r'){
                // printf("column %d, char '%d'\n", len[i], in[i][len[i]]);
                len[i]++;
            }
            in[i][len[i]]='\0';
            // for(int )
            // printf("%d.%s\nlen %d\n", i, in[i], len[i]);
        }
        tokenize();
        if(CE()) printf("Compilation Error\n");
        else if(RE()) printf("Runtime Error\n");
        else if(run() && TLE()) printf("Time Limit Exceeded\n");
        else if(WA()) printf("Wrong Answer\n");
        else printf("Accepted\n");
        // printf("i %d\n", mp["i"]);
        // printf("c %d\n", mp["c"]);
    }
#ifdef VAMP
    printf("\n>>Time taken: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}
