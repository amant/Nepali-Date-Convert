<?php

namespace PatroAPI\Test;

use PHPUnit\Framework\TestCase;
use PatroAPI\NepaliCalendar;

class PatroAPITest extends TestCase
{
    
    public function testingTwoDateConversions(): void
    {
        $cal = new NepaliCalendar();
        $this->assertSame($cal->eng_to_nep(2008, 11, 23), ['year' => 2065, 'month' => 8, 'date' => 8, 'day' => 'Sunday', 'nmonth' => 'Mangshir', 'num_day' => 1]);
        $this->assertSame($cal->nep_to_eng(2065, 8, 8), ['year' => 2008, 'month' => 11, 'date' => 23, 'day' => 'Sunday', 'emonth' => '', 'num_day' => 1, 'nmonth' => 'November']);
    }
    
}