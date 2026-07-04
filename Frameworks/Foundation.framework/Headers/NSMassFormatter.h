/* Runtime dump - NSMassFormatter
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSMassFormatter : NSFormatter
{
    void * _formatter;
    char _isForPersonMassUse;
    id _reserved;
}

@property (copy) NSNumberFormatter * numberFormatter;
@property int unitStyle;
@property char forPersonMassUse;

- (void)setNumberFormatter:(NSNumberFormatter *)arg0;
- (NSNumberFormatter *)numberFormatter;
- (void)setUnitStyle:(int)arg0;
- (int)unitStyle;
- (id)unitStringFromValue:(double)arg0 unit:(int)arg1;
- (NSAttributedString *)attributedStringForObjectValue:(id)arg0 withDefaultAttributes:(NSDictionary *)arg1;
- (NSString *)stringFromValue:(double)arg0 unit:(int)arg1;
- (NSString *)stringFromKilograms:(double)arg0;
- (int)targetUnitFromKilograms:(double)arg0;
- (id)unitStringFromKilograms:(double)arg0 usedUnit:(int *)arg1;
- (char)isForPersonMassUse;
- (void)setForPersonMassUse:(char)arg0;
- (void)dealloc;
- (NSMassFormatter *)init;
- (NSString *)stringForObjectValue:(id)arg0;
- (char)getObjectValue:(id *)arg0 forString:(NSString *)arg1 errorDescription:(NSString *)arg2;

@end
