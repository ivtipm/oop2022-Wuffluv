using NUnit.Framework;
using WindowsFormsApp1;

namespace WindowsFormsApp1
{
    [TestFixture]
    public class EngineTests
    {
        [Test]
        public void SetEngineCapacity_ValidValue_SetsEngineCapacity()
        {
            // Arrange
            var engine = new Engine();

            // Act
            engine.SetEngineCapacity("V8 5.0L");

            // Assert
            Assert.AreEqual("V8 5.0L", engine.GetEngineCapacity());
        }

        [Test]
        public void SetEngineCapacity_InvalidValue_ThrowsArgumentException()
        {
            // Arrange
            var engine = new Engine();

            // Act and Assert
            Assert.Throws<ArgumentException>(() => engine.SetEngineCapacity(""));
        }
    }

    // Повторите этот паттерн для других методов класса Engine
}
