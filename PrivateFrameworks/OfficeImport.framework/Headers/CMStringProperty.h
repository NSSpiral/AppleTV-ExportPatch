/* Runtime dump - CMStringProperty
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CMStringProperty : CMProperty
{
    NSString * wdValue;
}

- (void)dealloc;
- (void *)value;
- (CMStringProperty *)initWithString:(NSString *)arg0;
- (NSString *)cssStringForName:(NSString *)arg0;

@end
