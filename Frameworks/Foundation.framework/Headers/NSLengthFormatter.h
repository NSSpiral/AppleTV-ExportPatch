/* Runtime dump - NSLengthFormatter
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSLengthFormatter : NSFormatter
{
    void * _formatter;
    char _isForPersonHeight;
    id _reserved;
}

@property (copy) NSNumberFormatter * numberFormatter;
@property int unitStyle;
@property char forPersonHeightUse;

- (void)setNumberFormatter:(NSNumberFormatter *)arg0;
- (NSNumberFormatter *)numberFormatter;
- (void)setUnitStyle:(int)arg0;
- (int)unitStyle;
- (id)unitStringFromValue:(double)arg0 unit:(int)arg1;
- (NSAttributedString *)attributedStringForObjectValue:(id)arg0 withDefaultAttributes:(NSDictionary *)arg1;
- (char)isForPersonHeightUse;
- (int)targetUnitFromMeters:(double)arg0;
- (NSString *)stringFromValue:(double)arg0 unit:(int)arg1;
- (NSString *)stringFromMeters:(double)arg0;
- (void)setForPersonHeightUse:(char)arg0;
- (id)unitStringFromMeters:(double)arg0 usedUnit:(int *)arg1;
- (void)dealloc;
- (NSLengthFormatter *)init;
- (NSString *)stringForObjectValue:(id)arg0;
- (char)getObjectValue:(id *)arg0 forString:(NSString *)arg1 errorDescription:(NSString *)arg2;

@end
