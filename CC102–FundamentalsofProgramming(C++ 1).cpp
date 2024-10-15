#include <iostream>

using namespace std;

int main(){
	
	int sugarpriceUSD,ricepricePound,sardinespricePound,coffeepriceUSD,milkpriceUSD;
	int sugarCostUSD , riceCostPound , sardinesCostPound, coffeeCostUSD , milkCostUSD;
	int sugarCostPHP , riceCostPHP , sardinesCostPHP, coffeeCostPHP , milkCostPHP;
	int sugarQty,riceQty,sardinesQty,coffeeQty,milkQty;
	double usdtophp,poundtophp,pPHP;
	
	cout << "Please put the exchange rate for USDDOLLAR:";
	cin >> usdtophp;
	
	cout << "Enter thr Price of the Sugar in USD\n";
	cin  >> sugarpriceUSD;
	sugarCostUSD = sugarQty * sugarpriceUSD;
	sugarCostUSD = sugarpriceUSD * sugarCostPHP;
	cout << "Sugar Cost in PHP:" << sugarCostPHP << endl;
	
	
	cout << "Enter thr Price of the rice in Pound\n";
	cin >> ricepricePound;
	cout << "Enter thr Price of the sardines in Pound\n";
	cin >> sardinespricePound;
	cout << "Enter thr Price of the Coffee in USD\n";
	cin >> coffeepriceUSD;
	cout << "Enter thr Price of the Sugar in USD\n";
	cin >> milkpriceUSD;
	

	cout << "*********************************************************\n";
	cout << "Please Enter the Quantity of the Sugar\n";
	cin >> sugarQty;
	cout << "Please Enter the Quantity of the Rice\n"; 
	cin >> riceQty;
	cout << "Please Enter the Quantity of the Sardines\n";
	cin >> sardinesQty;
	cout << "Please Enter the Quantity of the Coffee\n";
	cin >> coffeeQty;
	cout << "Please Enter the Quantity of the Milk\n";
	cin >> milkQty;
	cout << "*********************************************************/n";
	cout << "Enter the Conversion USD";
	cin >> usdtophp;
	cout << "Enter the Conversion POUND";
	cin >> poundtophp;
	cout << "Enter the Conversion PHP";
	cin >> pPHP;
	
	
	
	
	return 0;
}