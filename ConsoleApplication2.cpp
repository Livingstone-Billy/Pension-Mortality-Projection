#include<iostream>
#include<map>
#include<cmath>
#include<string>
#include<iomanip>

using namespace std;

double To_Query_Container(int key, char gender)
{
	double mortality_at_key{};

	//pension mortality rates according to UK life insurance 1992

	map<int, double> male_basetable;

	male_basetable[50] = 0.001315;
	male_basetable[51] = 0.001519;
	male_basetable[52] = 0.001761;
	male_basetable[53] = 0.002045;
	male_basetable[54] = 0.002379;
	male_basetable[55] = 0.002771;
	male_basetable[56] = 0.003228;
	male_basetable[57] = 0.003759;
	male_basetable[58] = 0.004376;
	male_basetable[59] = 0.005090;
	male_basetable[60] = 0.005914;
	male_basetable[61] = 0.006861;
	male_basetable[62] = 0.007947;
	male_basetable[63] = 0.009189;
	male_basetable[64] = 0.010604;
	male_basetable[65] = 0.012211;
	male_basetable[66] = 0.014032;
	male_basetable[67] = 0.016088;
	male_basetable[68] = 0.018402;
	male_basetable[69] = 0.020998;
	male_basetable[70] = 0.023901;
	male_basetable[71] = 0.027137;
	male_basetable[72] = 0.030732;
	male_basetable[73] = 0.034713;
	male_basetable[74] = 0.039105;
	male_basetable[75] = 0.043935;
	male_basetable[76] = 0.049227;
	male_basetable[77] = 0.055006;
	male_basetable[78] = 0.061292;
	male_basetable[79] = 0.068006;
	male_basetable[80] = 0.075464;
	male_basetable[81] = 0.083379;
	male_basetable[82] = 0.091862;
	male_basetable[83] = 0.100917;
	male_basetable[84] = 0.110544;
	male_basetable[85] = 0.120739;
	male_basetable[86] = 0.131492;
	male_basetable[87] = 0.142786;
	male_basetable[88] = 0.154599;
	male_basetable[89] = 0.166903;
	male_basetable[90] = 0.179664;
	male_basetable[91] = 0.192841;
	male_basetable[92] = 0.206389;
	male_basetable[93] = 0.220257;
	male_basetable[94] = 0.234389;
	male_basetable[95] = 0.248727;
	male_basetable[96] = 0.263206;
	male_basetable[97] = 0.277762;
	male_basetable[98] = 0.292327;
	male_basetable[99] = 0.306832;
	male_basetable[100] = 0.321209;
	male_basetable[101] = 0.335389;
	male_basetable[102] = 0.349305;
	male_basetable[103] = 0.362893;
	male_basetable[104] = 0.376091;
	male_basetable[105] = 0.388838;

	map<int, double> female_basetable;
	
	female_basetable[50] = 0.001271;
	female_basetable[51] = 0.001456;
	female_basetable[52] = 0.001670;
	female_basetable[53] = 0.001917;
	female_basetable[54] = 0.002200;
	female_basetable[55] = 0.002524;
	female_basetable[56] = 0.002894;
	female_basetable[57] = 0.003317;
	female_basetable[58] = 0.003799;
	female_basetable[59] = 0.004345;
	female_basetable[60] = 0.004965;
	female_basetable[61] = 0.005667;
	female_basetable[62] = 0.006458;
	female_basetable[63] = 0.007350;
	female_basetable[64] = 0.008352;
	female_basetable[65] = 0.009476;
	female_basetable[66] = 0.010734;
	female_basetable[67] = 0.012138;
	female_basetable[68] = 0.013703;
	female_basetable[69] = 0.015442;
	female_basetable[70] = 0.017371;
	female_basetable[71] = 0.019505;
	female_basetable[72] = 0.021861;
	female_basetable[73] = 0.024455;
	female_basetable[74] = 0.027306;
	female_basetable[75] = 0.030432;
	female_basetable[76] = 0.033849;
	female_basetable[77] = 0.037577;
	female_basetable[78] = 0.041632;
	female_basetable[79] = 0.046035;
	female_basetable[80] = 0.050800;
	female_basetable[81] = 0.055946;
	female_basetable[82] = 0.061488;
	female_basetable[83] = 0.067441;
	female_basetable[84] = 0.073817;
	female_basetable[85] = 0.080629;
	female_basetable[86] = 0.087885;
	female_basetable[87] = 0.095594;
	female_basetable[88] = 0.103761;
	female_basetable[89] = 0.112386;
	female_basetable[90] = 0.121470;
	female_basetable[91] = 0.131009;
	female_basetable[92] = 0.140996;
	female_basetable[93] = 0.151420;
	female_basetable[94] = 0.162267;
	female_basetable[95] = 0.173519;
	female_basetable[96] = 0.185155;
	female_basetable[97] = 0.197150;
	female_basetable[98] = 0.209477;
	female_basetable[99] = 0.222103;
	female_basetable[100] = 0.234995;
	female_basetable[101] = 0.248115;
	female_basetable[102] = 0.261424;
	female_basetable[103] = 0.274879;
	female_basetable[104] = 0.288437;
	female_basetable[105] = 0.302054;
	

	if (toupper(gender) == 'M')
	{
		mortality_at_key = male_basetable[key];
	}
	else if(toupper(gender) == 'F')
	{
		mortality_at_key = female_basetable[key];
	}
	else {
		cout << "Invalid character! " << gender << endl;
	}

	return mortality_at_key;

}

//getting the reduction factor RF(x,t)
double Reduction_Factor(int year_to_project, int age)
{
	double reduction_factor{};

	double duration{ (year_to_project - 1992.0)/20.0 }; //value of t.

	if (age < 60)
	{
		double alpha_when_below_60{ 0.13 }; double factor_when_below_60{ 0.55 };
		reduction_factor = alpha_when_below_60 + (1 - alpha_when_below_60) * pow((1 - factor_when_below_60), duration);
	}
	else if (age >= 60 || age <= 110)
	{
		double alpha_when_above_60 = 1 - 0.87 * (110.0 - age) / 50;
		double factor_when_above_60 = 0.55 * (110.0 - age) / 50 + 0.29 * (age - 60.0) / 50;

		reduction_factor = alpha_when_above_60 + (1 - alpha_when_above_60) * pow((1 - factor_when_above_60), duration);
		//cout << "Alpha " << alpha_when_above_60 << "\nFactor " << factor_when_above_60 << endl;
	}

	else if (age > 110)
	{
		double alpha{ 1 }; double factor{ 0.29 };
		reduction_factor = alpha + 1 - alpha * pow((1 - factor), duration);
	}
	else if(age > 120)
	{
		cout << "Age Cannot exceed 120" << endl;
	}
	else
	{
		cout << "Age cannot be negative" << endl;
	}
	//cout << "Duration " << duration << endl;
	return reduction_factor;
}

double ProjectedMortality(char gender, int age, int year_to_project)
{
	double mortality_at_base_yr{ To_Query_Container(age, gender) };

	double reduction_factor{ Reduction_Factor(year_to_project, age) };

	double projected_mortality{ mortality_at_base_yr * reduction_factor };

	return projected_mortality;
}

void RangeBased_Projection()
{
	cout << "Enter gender to project[M/F]: ";
	char gender;
	cin >> gender;

	/*if (toupper(gender) != 'M' || toupper(gender) != 'F')
	{
		cout << "Enter the correct gender [M/F]: " << gender << " is not a valid character: ";
		cin >> gender;
	}*/
	cout << "Enter start age: ";
	int start_age;
	cin >> start_age;
	cout << "Enter end age: ";
	int end_age;
	cin >> end_age;
	if (end_age < start_age)
	{
		cout << "End age of projection cannot be less than start age\nEnter end_age: ";
		cin >> end_age;
	}
	int count{ end_age - start_age };
	int iteration{};
	int year_to_project{};
	cout << "Enter year to project: ";
	cin >> year_to_project;

	while (iteration <= count)
	{
		cout << start_age<<" -------------------> "<<fixed<<setprecision(6)<< ProjectedMortality(gender, start_age, year_to_project) << endl;
		iteration++;
		start_age++;
	}
}

int main()
{
	cout << "Enter mode of projection[1:Sequence Based 2:Range Based] reply with 1 or 2: ";
	int reply{};
	cin >> reply;

	if (reply == 1)
	{
		cout << "Enter gender[M / F]: ";
		char gender;
		cin >> gender;
		/*if (toupper(gender) != 'M' || toupper(gender) != 'F')
		{
			cout << "Enter the correct gender[M/F]: " << gender << " is not a valid gender: ";
			cin >> gender;
		}*/

		cout << "Enter age to project: ";
		unsigned int age;
		cin >> age;
		if (age > 120)
		{
			cout << "Age cannot be greater than 120\nEnter correct age[<=120]: ";
			cin >> age;
		}

		cout << "Enter year to project to: ";
		unsigned int year;
		cin >> year;

		cout << "Projected mortality is " << fixed << setprecision(6) << ProjectedMortality(gender, age, year) << endl;
		cout << "Reduction factor is " << Reduction_Factor(year, age) << endl;
		cout << "Base mortality is " << To_Query_Container(age, gender) << endl;
	}
	else if(reply == 2)
	{
		RangeBased_Projection();
	}
	else {
		cout << "Not a valid input\nEnter mode of projection[1:Sequence Based 2:Range Based] reply with 1 or 2: ";
		cin >> reply;
	}
}