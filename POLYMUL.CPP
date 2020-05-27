#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<alloc.h>

//Self referencial structure for single link list
typedef struct lklist{
	 int pow,coff;
	 struct lklist*next;

} node;
void main(){

	node *ptr=NULL,*loc=NULL,*result=NULL;
		clrscr();//=NULL;//,*result=NULL; //starting pointer to point first node of linklist





	void insert_in(node*);
	void show_result(node*);
	node* polyadd(node*,node*,node*);
	node*polymul(node*,node*,node*);

		ptr=(node*)malloc(sizeof(node));
		loc=(node*)malloc(sizeof(node));
	       result=(node*)malloc(sizeof(node));
	       //	result1=(node*)malloc(sizeof(node));


	      //	printf("\n \nThe first Polynomial:->");
		//show_result(ptr);
	       //	printf("\n\n  The second Polynomial:->");
		//show_result(loc);

	       printf("\n Enter all the expression for first Polynomial:->");

	       insert_in(ptr);
	       printf("\n Enter Second Polynomial in three expression:-");

		insert_in(loc);
		polymul(ptr,loc,result);
		printf("\n \n Multiplied  Polynomial:->");
		show_result(result);

  getchar();
}
//ptr for one input and loc for second input and result for saving the answer
node* polyadd(node*p1,node*p2,node*result){
//node*result=(node*)malloc(sizeof(node));
//result->coff=0;
//result->pow=0;
//result->next=NULL;
//node*temp=result;
       //while ptr ka next and loc ka nextpresent rhe th


   while(p1!=NULL&&p2!=NULL){
       //checking if power are equal
	if(p1->pow==p2->pow){
		//storing the sum in result coff
		if(p2->coff + p1->coff!=0){
		result->coff=p2->coff + p1->coff;
		}
		//storing the power in result power
		result->pow=p1->pow;
		//moving to the next of ptr and loc
		p1=p1->next;

		p2=p2->next;
	}
	//if power of  one polynomial is greaterthan other
       else  if(p1->pow >p2->pow){
		result->pow=p1->pow;
		result->coff=p1->coff;
		p1=p1->next;

	}
       else {
		result->pow=p2->pow;
		result->coff=p2->coff;
		p2=p2->next;

	}
	//moving to the next of result node till NULL(for all expression in result )
	//otherwise it deote only first of the expression

	result->next=(node*)malloc(sizeof(node));
	result=result->next;
	result->next=NULL;


}
	while(p1!=NULL||p2!=NULL){
       // Any of the unmatched power will be pointed in bothe pointer
	if(p1){
		result->pow=p1->pow;
		result->coff=p1->coff;
		p1=p1->next;
	}
	if(p2){
		result->pow=p2->pow;
		result->coff=p2->coff;
		p2=p2->next;
	}
	//to store the data in othernode which is not matched
	result->next=(node*)malloc(sizeof(node));
	result=result->next;
	result->next=NULL;
}
return result;
}
node* polymul(node *p1,node*p2,node*p3){
	node *temp=p1;
	node*temp2=p2;
	node*temp3=p3;
	node*temp4;

     //	/*temp=p2;
	//node*head=(node*)malloc(sizeof(node));
       //	ptr->next=NULL;
       //	node*result=(node*)malloc(sizeof(node));
       //	result->next=NULL;
	//result->coff=0;
       //	result->pow=0;
       //	node*temp2=ptr;


	while(temp!=NULL){
	temp2=p2;

		while(temp2!=NULL){


			       temp3->coff= temp->coff*temp2->coff;
		      temp3-> pow=temp->pow+temp2->pow;
		      temp2=temp2->next;
		  /* while(temp3->next){
		      temp3=temp3->next; }
		    */	 temp3->next=(node*)malloc(sizeof(node));
		    temp3=temp3->next;
		      temp3->next=NULL;
		      }
		      temp=temp->next;
		   //   temp->next=NULL;
		      }
		      node* result=temp3;
		      node*result1=temp3->next;
		      //temp4=temp3;
		     while(result){
			{

		      {
		      polyadd(result,result1,temp4);
		     // show_result(temp4);
		     // if(temp3->pow=temp3->next->pow){
		    //  temp4->coff=temp3->coff+temp3->next->next->coff;
		    //	temp3=temp3->next;*/
		      // temp3=temp3->next;
		      result1=result1->next;
		      result1->next=NULL;
//		       polyadd(temp3,temp3->next,temp4);
			}
			result=result->next;
			result=result->next;
			}
		     }
				   /*		       if(temp4->pow==temp4->pow)
					temp4->coff=temp3->coff+temp3->next->coff;
					temp4=temp4->next;
				     */
			  return temp4;

		      }





      //      */


void insert_in(node*temp){

	int count=1,expnum;
	printf("\n Enter number of Expression in a polynomial");
	scanf("%d",&expnum);
	while(count<=expnum){


		printf("\n Enter cofficient");
		scanf("%d",&temp->coff);
		printf("\n Enter Power");
		scanf("%d",&temp->pow);
		//to store other expressive expression after first one
		temp->next=(node*)malloc(sizeof(node));
		temp=temp->next;
		temp->next=NULL;
		count++;
		}
}
 void show_result(node*temp){
	while(temp->next!=NULL){
		printf("%dx^%d",temp->coff,temp->pow);
			temp=temp->next;
			if(temp->next!=NULL)
				printf("+");
				}
				}