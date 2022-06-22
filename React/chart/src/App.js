import './App.css';
import {ResponsiveContainer,LineChart,Line,XAxis,YAxis,CartesianGrid,Legend,Tooltip} from "recharts";

const mydata = [
  {
    name:'Python',
    student:13,
    fees:10
  },
  {
    name:'Java',
    student:15,
    fees:12
  },
  {
    name:'JavaScript',
    student:23,
    fees:34
  },
  {
    name:'C++',
    student:25,
    fees:15
  },
]

function App() {
  return (
    <div className="container">
      <h1>Create Charts</h1>
      <ResponsiveContainer width="100%" aspect={3}>
        <LineChart data={mydata} margin={{top:5,right:50,left:20,bottom:5}}>
          <CartesianGrid strokeDasharray="3 3"/>
            <XAxis dataKey="name" interval={'preserveStartEnd'}/>
            <YAxis/>
            <Tooltip itemStyle={{fontFamily:'cursive'}}contentStyle={{backgroundColor:'#75E6DA'}}/>
            <Legend/>
            <Line type="step" dataKey="student" stroke="red" activeDot={{r:5}}/>
            <Line type="monotone" dataKey="fees" stroke="green" activeDot={{r:5}}/>
        </LineChart>
      </ResponsiveContainer>
    </div>
  );
}

export default App;
