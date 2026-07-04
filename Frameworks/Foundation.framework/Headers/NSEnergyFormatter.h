/* Runtime dump - NSEnergyFormatter
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSEnergyFormatter : NSFormatter
{
    void * _formatter;
    char _isForFoodEnergyUse;
    id _reserved;
}

@property (copy) NSNumberFormatter * numberFormatter;
@property int unitStyle;
@property char forFoodEnergyUse;

- (void)setNumberFormatter:(NSNumberFormatter *)arg0;
- (NSNumberFormatter *)numberFormatter;
- (void)setUnitStyle:(int)arg0;
- (int)unitStyle;
- (id)unitStringFromValue:(double)arg0 unit:(int)arg1;
- (NSAttributedString *)attributedStringForObjectValue:(id)arg0 withDefaultAttributes:(NSDictionary *)arg1;
- (NSString *)stringFromValue:(double)arg0 unit:(int)arg1;
- (char)isForFoodEnergyUse;
- (int)targetUnitFromJoules:(double)arg0;
- (NSString *)stringFromJoules:(double)arg0;
- (id)unitStringFromJoules:(double)arg0 usedUnit:(int *)arg1;
- (void)setForFoodEnergyUse:(char)arg0;
- (void)dealloc;
- (NSEnergyFormatter *)init;
- (NSString *)stringForObjectValue:(id)arg0;
- (char)getObjectValue:(id *)arg0 forString:(NSString *)arg1 errorDescription:(NSString *)arg2;

@end
