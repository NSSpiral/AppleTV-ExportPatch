/* Runtime dump - WMEnumProperty
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WMEnumProperty : CMProperty
{
    unsigned int wdValue;
}

- (NSString *)description;
- (unsigned int)value;
- (id)mapJustification;
- (id)mapVerticalAlign;
- (id)mapUnderline;
- (id)mapCellTextVAlign;
- (WMEnumProperty *)initWithEnum:(unsigned int)arg0;
- (NSString *)cssStringForName:(NSString *)arg0;

@end
