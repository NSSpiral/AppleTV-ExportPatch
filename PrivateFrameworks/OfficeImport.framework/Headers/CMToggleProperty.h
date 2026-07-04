/* Runtime dump - CMToggleProperty
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CMToggleProperty : CMProperty
{
    int wdValue;
}

- (int)value;
- (CMToggleProperty *)initWithCMTogglePropertyValue:(int)arg0;
- (NSString *)cssStringForName:(NSString *)arg0;
- (void)resolveWithBaseProperty:(NSObject *)arg0;
- (int)compareValue:(id)arg0;
- (id)mapBold;
- (id)mapItalic;
- (id)mapStrikeTrough;

@end
