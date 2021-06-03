<?php

namespace PatroAPI\Test;

use PHPUnit\Framework\TestCase;

class PatroAPITest extends TestCase
{
    private $Cal;

    protected function setUp(): void
    {
        $this->Cal = new \PatroAPI\NepaliCalendar();
    }
    
    public function testingTwoDateConversions(): void
    {
        $this->assertSame($this->Cal->eng_to_nep(2008, 11, 23), ['year' => 2065, 'month' => 8, 'date' => 8, 'day' => 'Sunday', 'nmonth' => 'Mangshir', 'num_day' => 1]);
        $this->assertSame($this->Cal->nep_to_eng(2065, 8, 8), ['year' => 2008, 'month' => 11, 'date' => 23, 'day' => 'Sunday', 'emonth' => '', 'num_day' => 1, 'nmonth' => 'November']);
    }

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

    protected function tearDown(): void
    {
        $this->Cal = null;
    }
    
}