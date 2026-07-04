/* Runtime dump - NSUnitFormatter
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSUnitFormatter : NSFormatter
{
    NSNumberFormatter * _numberFormatter;
    int _unitStyle;
    struct UAMeasureFormat * _formatter;
    struct UPluralRules * _prules;
    char _modified;
    NSString * _localeID;
}

@property (copy) NSNumberFormatter * numberFormatter;
@property int unitStyle;

- (void)setNumberFormatter:(NSNumberFormatter *)arg0;
- (NSNumberFormatter *)numberFormatter;
- (void)setUnitStyle:(int)arg0;
- (int)unitStyle;
- (NSString *)stringForValue:(double)arg0 unit:(unsigned int)arg1;
- (NSString *)stringForValue1:(double)arg0 unit1:(unsigned int)arg1 value2:(double)arg2 unit2:(unsigned int)arg3;
- (id)unitStringFromValue:(double)arg0 unit:(unsigned int)arg1;
- (void)dealloc;
- (NSUnitFormatter *)init;
- (void)finalize;

@end
