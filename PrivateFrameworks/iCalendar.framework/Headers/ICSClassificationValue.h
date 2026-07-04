/* Runtime dump - ICSClassificationValue
 * Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSClassificationValue : ICSPredefinedValue

+ (ICSClassificationValue *)classificationFromCode:(int)arg0;
+ (NSString *)classificationValueFromICSString:(NSString *)arg0;

- (void)_ICSStringWithOptions:(unsigned int)arg0 appendingToString:(NSString *)arg1;

@end
