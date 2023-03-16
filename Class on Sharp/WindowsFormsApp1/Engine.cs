/// Автор: Рычков Р.В.

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


namespace WindowsFormsApp1
{
 

    /// <summary>
    /// Двигатель
    /// </summary>
    public class Engine
    {
        /// Объем двигателя
        private string EngineCapacity;
        /// Система питания
        private string PowerSupplySystem;
        /// Тип топлива
        private string Fuel;
        /// Максимальный пробег
        private float Resource;
        /// Тип масла
        private string TypeOil;
        /// Мощность ДВС
        private string PowerDVS;
        /// Расход топлива
        private float Expenditure;
        /// Модель двигателя
        private string ModelEngine;


        public Engine()
        {
            EngineCapacity = ""; /// Объем двигателя
            PowerSupplySystem = ""; /// Система питания
            Fuel = ""; /// Тип топлива
            Resource = 0; /// Максимальный пробег
            TypeOil = ""; /// Тип масла
            PowerDVS = ""; /// Мощность ДВС
            Expenditure = 0; /// Расход топлива
            ModelEngine = ""; /// Модель двигателя
        }

        /// Сеттеры
        public Engine(string EC, string PSS, string F, float R, string TO, string PDVS, float E, string ME)
        {

            // string EC принимает ссылку на строку, т.к. все объекты в C# это ссылки
            SetEngineCapacity(EC); /// Задать объем двигателя
            SetPowerSupplySystem(PSS); /// Задать систему питания
            SetFuel(F); /// Задать тип топлива
            SetResource(R); /// Задать максимальный пробег
            SetTypeOil(TO); /// Задать тип масла
            SetPowerDVS(PDVS); /// Задать мощность ДВС
            SetExpenditure(E); /// Задать расход топлива
            SetModelEngine(ME); /// Задать модель двигателя
        }

        ///Деструктор
        ~Engine() { }

        ///Задать объем двигателя
        public void SetEngineCapacity(string EC)
        {
            if (EC == "") throw new ArgumentException("invalid parameter: EngineCapacity");
            EngineCapacity = EC;
        }

        /// Задать систему питания
        public void SetPowerSupplySystem(string PSS)
        {
            if (PSS == "") throw new ArgumentException("invalid parameter: PowerSupplySystem");
            PowerSupplySystem = PSS;
        }

        /// Задать тип топлива
        public void SetFuel(string F)
        {
            if (F == "") throw new ArgumentException("invalid parameter: Fuel");
            Fuel = F;
        }

        /// Задать максимальный пробег
        public void SetResource(float R)
        {
            if ((R < 0) || (R == 0)) throw new ArgumentException("invalid parameter: Resource");
            Resource = R;
        }

        /// Задать тип масла
        public void SetTypeOil(string TO)
        {
            if (TO == "") throw new ArgumentException("invalid parameter: TypeOil");
            TypeOil = TO;
        }

        /// Задать мощность ДВС
        public void SetPowerDVS(string PDVS)
        {
            if (PDVS == "") throw new ArgumentException("invalid parameter: PowerDVS");
            PowerDVS = PDVS;
        }

        /// Задать расход топлива
        public void SetExpenditure(float E)
        {
            if ((E < 0) || (E == 0)) throw new ArgumentException("invalid parameter: Expenditure");
            Expenditure = E;
        }

        /// Задать модель двигателя
        public void SetModelEngine(string ME)
        {
            if (ME == "") throw new ArgumentException("invalid parameter: ModelEngine");
            ModelEngine = ME;
        }

        /// Получить Объем двигателя
        public string GetEngineCapacity() { return EngineCapacity; }

        /// Получить систему питания
        public string GetPowerSupplySystem() { return PowerSupplySystem; }

        /// Получить тип топлива
        public string GetFuel() { return Fuel; }

        /// Получить максимальный пробег
        public float GetResource() { return Resource; }

        /// Получить тип масла
        public string GetTypeOil() { return TypeOil; }

        ///Получить мощность ДВС
        public string GetPowerDVS() { return PowerDVS; }

        /// Получить расход топлива
        public float GetExpenditure() { return Expenditure; }

        /// Получить модель двигателя
        public string GetModelEngine() { return ModelEngine; }

        //Получение всех данных класса
        override public string ToString()
        {
            return "Model engine: " + ModelEngine +
                "\nEngine Capasity: " + EngineCapacity +
                "\nPower supply system: " + PowerSupplySystem +
                "\nFuel: " + Fuel +
                "\nResource: " + Resource.ToString() +
                "\nType of Oil: " + TypeOil +
                "\nPower DVS: " + PowerDVS +
                "\nExpenditure: " + Expenditure.ToString();
        }

    }

}
