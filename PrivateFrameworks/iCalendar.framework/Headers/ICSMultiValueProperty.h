/* Runtime dump - ICSMultiValueProperty
 * Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSMultiValueProperty : ICSProperty

- (ICSMultiValueProperty *)initWithValue:(NSValue *)arg0 type:(unsigned int)arg1;
- (void)setValue:(NSObject *)arg0 type:(unsigned int)arg1;
- (void *)value;
- (NSArray *)values;
- (void)_ICSStringWithOptions:(unsigned int)arg0 appendingToString:(NSString *)arg1;
- (char)isMultiValued;
- (void)_setParsedValues:(NSArray *)arg0 type:(unsigned int)arg1;
- (void)setValues:(NSArray *)arg0 valueType:(unsigned int)arg1;

@end
