exam={'Andrew','Kirsty','Emily','Beth'}
project={'Kirsty','Emily','Lan','Stuart'}

print("Student who took both exam and submit project: \n",exam&project)
print("Student only took exam: \n",exam-project)
print("Student only submitted project: \n",project-exam)
print("Student who took either(or both) exam and submit project: \n",exam|project)
print("Student who took either(but not both) exam and submit project: \n",exam^project)