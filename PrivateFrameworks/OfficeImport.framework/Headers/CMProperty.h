/* Runtime dump - CMProperty
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CMProperty : NSObject
{
    NSString * cachedCssString;
}

- (NSString *)cssStringForName:(NSString *)arg0;
- (NSString *)cssString;
- (int)compareValue:(id)arg0;
- (CMProperty *)initWithCssString:(NSString *)arg0;
- (NSString *)cachedCssStringForName:(NSString *)arg0;

@end
