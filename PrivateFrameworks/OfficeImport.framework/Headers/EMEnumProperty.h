/* Runtime dump - EMEnumProperty
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EMEnumProperty : CMProperty
{
    int wdValue;
}

+ (EMEnumProperty *)mapUnderlineValue:(int)arg0;
+ (EMEnumProperty *)mapHorizontalAlignmentValue:(int)arg0;
+ (EMEnumProperty *)mapVerticalAlignmentValue:(int)arg0;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (int)value;
- (id)mapUnderline;
- (EMEnumProperty *)initWithEnum:(int)arg0;
- (NSString *)cssStringForName:(NSString *)arg0;
- (id)mapHorizontalAlignment;
- (id)mapVerticalAlignment;

@end
