/* Runtime dump - ODDLayoutVariablePropertySet
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ODDLayoutVariablePropertySet : OADProperties
{
    int mDirection;
    char mHasDirection;
}

+ (ODDLayoutVariablePropertySet *)defaultProperties;

- (NSString *)description;
- (void)setDirection:(int)arg0;
- (int)direction;
- (ODDLayoutVariablePropertySet *)initWithDefaults;
- (char)hasDirection;

@end
