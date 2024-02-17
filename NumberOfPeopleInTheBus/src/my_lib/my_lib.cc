#include <iostream>
#include "my_lib.h"

#include <utility>
#include <vector>

unsigned int number(const std::vector<std::pair<int, int>>& busStops)
{
	unsigned int result {0};
	for ( int i = 0; i < busStops.size(); i++ )
	{
		result += busStops[i].first - busStops[i].second;
	}
	return result;	
}


/*
 
unsigned int number(const std::vector<std::pair<int, int>>& busStops){
  return std::accumulate(busStops.begin(), busStops.end(), 0, [](unsigned int sum, auto i) { return sum + i.first - i.second; });
}


unsigned int number(const std::vector<std::pair<int, int>>& busStops) {
    return std::accumulate(begin(busStops), end(busStops), 0u,
        [](auto a, auto b) { return a + b.first - b.second; });
}

unsigned int number(const std::vector<std::pair<int, int>>& busStops){
  int res = 0;
  for (auto [f,s] : busStops) res += f-s;
  return res;
}


namespace simulation
{
class Person
{
public:
	Person(std::string name) : m_name{name} {}

private:
	std::string m_name;
};

class Passenger : public Person
{
public:
	Passenger(std::string name) : Person{name} {}
};

class Vehicle
{
public:
	Vehicle(int wheelsCount) :
		m_wheelsCount{wheelsCount}
	{
	}

private:
	const int m_wheelsCount;
};

class Bus : public Vehicle
{
public:
	Bus() : 
		Vehicle{16}
	{
	}

	void pickUp(Passenger passenger)
	{
		m_passengers.push_back(passenger);
	}

	void dropOff()
	{
		m_passengers.erase(std::begin(m_passengers));
	}

	auto getPassengersCount() const
	{
		return m_passengers.size();
	}

private:
	std::vector<Passenger> m_passengers;
};
} // namespace simulation


using BusStop = std::pair<int, int>;

auto aboard(const BusStop& stop) { return stop.first; }
auto depart(const BusStop& stop) { return stop.second; }

unsigned int number(const std::vector<BusStop>& stops)
{
	simulation::Bus bus {};

	for(const auto& stop : stops)
	{
		for(auto i = 0; i < aboard(stop); ++i)
		{
			const auto name = std::string{i % 2 == 0 ? "Steve" : "Mary"};
			bus.pickUp(simulation::Passenger{name});
		}
		for(auto i = 0; i < depart(stop); ++i)
		{
			bus.dropOff();
		}
	}

	return bus.getPassengersCount();
}


 * /




