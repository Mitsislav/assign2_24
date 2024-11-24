## Assignment 2: A String Module

## My name
IOANNIS CHATZIANTONIOU CSD5193

## Make Repository Private and Add TAs as Members
You can make the repo private and add TAs as members by hand or using
the private.py script

### By Hand
1. Go to Project Settings -> General
2. Visibility
3. Change Project Visibility to Private

Also add the TA in your project
1. Go to ProjectSettings -> Members
2. Add Iacovos Kolokasis as a Developer

### Using the Script

The private.py script is written in [Python 3](https://www.python.org/). 
To run private.py script, please have 
**Python 3.4 or higher**, **Git 1.8 or higher** and **python-gitlab** installed.

* Install gitlab lib
```
pip3 install --upgrade python-gitlab --user
```

* Run the script
```
python3 private.py -t <personal token> -p <project_ id>
```
## Submission
* You should submit the source files of each assignment. Do not submit the object or executable file
* Commit all files (not executables or object files!)

```
git add file1.c file2.c file3.c
git commit -m "Commit message"
git push
```

## Μemory Check (assert)

Nai ginetai oi sunartiseis 'ms_copy', 'ms_ncopy', 'ms_concat' , 
'ms_nconcat' na kalesoyn tin 'assert' gia na elenksoyn an h mnimi
proorismou opoy grafetai to apotelesma einai arketa megalh.Ayto ginetai
dioti mporoyn na elegxoyn ton arithmo ton diathesimwn bytes prin
proxorisoyn gia tin antigrafi dedomenwn .

px h synartisi 'ms_copy' mporei na kanei elegxo to mhkos tis sumboloseiras 
destination kai an to megethos tou string destination den einai arketa megalo
gia na xwresi to string source tote mporei na petaksi assert

## Negative value for n (assert)

Nai ginetai oi synartiseis 'ms_ncopy' , 'ms_nconcat' , 'ms_ncompare' na kalesoyn
tin assert gia na elegxoyn an h parametros length (variable n) exei arnitiki timi.
Poly apla giati h assert xrisimopoieitai gia diaforoys elegxoys kata tin ektelesi toy
programmatos . Ama mporei negative value h assert mporei na kanei handle auto to problhma
kai na petaksi runtime kata tin ektelesi tis ekastote synartisis 

## Conclusions about assert

Genika h assert einai poly xrisimi gia na elegxei parametrous kai tyxon problhmata
kata tin ektelesi enos programmatos . Glytwnei xrono apo ton programmatisti gia
debugging kai etsi bohthaei stin omalh syntaksi programmatwn .
