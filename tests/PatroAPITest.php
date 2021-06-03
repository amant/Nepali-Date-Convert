<?php

namespace PatroAPI\Test;

use PHPUnit\Framework\TestCase;

/**
 * @covers NepaliCalendar::
 */
class PatroAPITest extends TestCase
{
    private $Cal;

    protected function setUp(): void
    {
        $this->Cal = new \PatroAPI\NepaliCalendar();
    }

    /**
     * @covers NepaliCalendar::_get_day_of_week
     */
    public function testGetDayOfTheWeek(): void
    {
        $this->assertSame($this->Cal->_get_day_of_week(1), 'Sunday');
        $this->assertSame($this->Cal->_get_day_of_week(2), 'Monday');
        $this->assertSame($this->Cal->_get_day_of_week(3), 'Tuesday');
        $this->assertSame($this->Cal->_get_day_of_week(4), 'Wednesday');
        $this->assertSame($this->Cal->_get_day_of_week(5), 'Thursday');
        $this->assertSame($this->Cal->_get_day_of_week(6), 'Friday');
        $this->assertSame($this->Cal->_get_day_of_week(7), 'Saturday');
    }

    /**
     * @covers NepaliCalendar::_get_english_month
     */
    public function testGetEnglishMonth(): void
    {
        $cal = new \PatroAPI\NepaliCalendar();
        $this->assertSame($this->Cal->_get_english_month(1), 'January');
        $this->assertSame($this->Cal->_get_english_month(2), 'February');
        $this->assertSame($this->Cal->_get_english_month(3), 'March');
        $this->assertSame($this->Cal->_get_english_month(4), 'April');
        $this->assertSame($this->Cal->_get_english_month(5), 'May');
        $this->assertSame($this->Cal->_get_english_month(6), 'June');
        $this->assertSame($this->Cal->_get_english_month(7), 'July');
        $this->assertSame($this->Cal->_get_english_month(8), 'August');
        $this->assertSame($this->Cal->_get_english_month(9), 'September');
        $this->assertSame($this->Cal->_get_english_month(10), 'October');
        $this->assertSame($this->Cal->_get_english_month(11), 'November');
        $this->assertSame($this->Cal->_get_english_month(12), 'December');
    }

    /**
     * @covers NepaliCalendar::_get_nepali_month
     */
    public function testGetNepaliMonth(): void
    {
        $cal = new \PatroAPI\NepaliCalendar();
        $this->assertSame($this->Cal->_get_nepali_month(1), "Baishak");
        $this->assertSame($this->Cal->_get_nepali_month(2), "Jestha");
        $this->assertSame($this->Cal->_get_nepali_month(3), "Ashad");
        $this->assertSame($this->Cal->_get_nepali_month(4), "Shrawn");
        $this->assertSame($this->Cal->_get_nepali_month(5), "Bhadra");
        $this->assertSame($this->Cal->_get_nepali_month(6), "Ashwin");
        $this->assertSame($this->Cal->_get_nepali_month(7), "kartik");
        $this->assertSame($this->Cal->_get_nepali_month(8), "Mangshir");
        $this->assertSame($this->Cal->_get_nepali_month(9), "Poush");
        $this->assertSame($this->Cal->_get_nepali_month(10), "Magh");
        $this->assertSame($this->Cal->_get_nepali_month(11), "Falgun");
        $this->assertSame($this->Cal->_get_nepali_month(12), "Chaitra");
    }

    /**
     * @covers NepaliCalendar::_is_leap_year
     */
    public function testIsLeapYear(): void
    {
        $listOfLeapYearsBetween1900And2020 = [1904, 1908, 1912, 1916, 1920, 1924, 1928, 1932, 1936, 1940, 1944, 1948, 1952, 1956, 1960, 1964, 1968, 1972, 1976, 1980, 1984, 1988, 1992, 1996, 2000, 2004, 2008, 2012, 2016, 2020];

        foreach ($listOfLeapYearsBetween1900And2020 as $year) {
            $this->assertTrue($this->Cal->is_leap_year($year));
        }
    }

    protected function tearDown(): void
    {
        $this->Cal = null;
    }
}
