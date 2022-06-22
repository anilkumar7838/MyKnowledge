from django.http import HttpResponse
from django.shortcuts import render
from datetime import datetime
from home.models import Contact
from django.contrib import messages
#credentials
'''
user: admin
pass: admin123
'''
# python database command
'''
> python manage.py shell
 -->  from home.models import Contact
 -->  Contact.objects.all()
 -->  Contact.objects.all()[0]
 -->  Contact.objects.all()[0].name
 #filter
 -->  Contact.objects.filter(name="anil")
 -->  ins=Contact.objects.filter(name="anil")
 -->  ins.phone="34534"
 -->  ins.save()

 -->  Contact.objects.all().first()
 -->  Contact.objects.all().last()

 --> Contact.objects.filter(desc__startswith="this is")








'''


# Create your views here.
def index(request):
    # context = {
    #     'variable1':"Anil Kumar",
    #     'variable2':"Ajay Kumar"
    # }
    return render(request,'index.html')
    # return render(request,'index.html',context)
    # return HttpResponse("this is HomePage")

def about(request):
    # return HttpResponse("this is AboutPage")
    return render(request,'about.html')

def services(request):
    # return HttpResponse("this is Services-Page")
    return render(request,'services.html')

def contact(request):
    # return HttpResponse("this is Contact-Page")
    if request.method=="POST":
        name=request.POST.get('name')
        email=request.POST.get('email')
        phone=request.POST.get('phone')
        desc=request.POST.get('desc')
        contact=Contact(name=name,email=email,phone=phone,desc=desc,date=datetime.today())
        contact.save()
        messages.success(request,'Your message has been sent!')
    return render(request,'contact.html')