//function for grading problem
function gradingStudents(grades) {
    let results =[];
for(let k=0; k<grades.length; k++){
 if(grades[k] < 38){
     results.push(grades[k]);
 } else {       
let roundGrd = grades[k]; 
for(let i=1; i<3; i++){
    if(roundGrd%5 != 0){
        roundGrd += 1;
    }     
}
   if(roundGrd%5 == 0){
       results.push(roundGrd);
   } else {
       results.push(grades[k])
   }   
}
} return results;

}