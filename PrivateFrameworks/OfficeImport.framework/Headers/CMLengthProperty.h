/* Runtime dump - CMLengthProperty
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CMLengthProperty : CMProperty
{
    double value;
    int unitType;
}

+ (double)convertToPoints:(double)arg0 unit:(int)arg1;
+ (NSString *)cssStringValue:(double)arg0 unit:(int)arg1;

- (int)intValue;
- (NSString *)description;
- (double)value;
- (CMLengthProperty *)initWithNumber:(double)arg0 unit:(int)arg1;
- (int)unitType;
- (NSString *)cssStringForName:(NSString *)arg0;
- (void)addNumber:(double)arg0 unit:(int)arg1;
- (NSString *)cssString;
- (CMLengthProperty *)initWithNumber:(double)arg0;
- (int)compareValue:(id)arg0;

@end
