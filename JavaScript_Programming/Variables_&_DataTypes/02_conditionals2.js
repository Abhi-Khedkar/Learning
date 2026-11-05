const marks = 75;

if(marks >= 90)
{
    console.log(`Score: ${marks} - Grade: A`);
}

else if(marks >= 75)
{
    console.log(`Score: ${marks} - Grade: B`);
}
else if(marks >= 50)
{
    console.log(`Score: ${marks} - Grade: C`);
}
else
{
    console.log(`Score: ${marks} - Needs Improvement`);
}