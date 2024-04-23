class Solution:
    def convertTemperature(self, celsius: float) -> List[float]:
        def kelvin(celsius):
            return (celsius + 273.15)
        def fahrenheit(celsius):
            return (celsius * 1.8) + 32.00
        return [kelvin(celsius), fahrenheit(celsius)]