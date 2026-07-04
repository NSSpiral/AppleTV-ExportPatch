/* Runtime dump - EDTableStylesCollection
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDTableStylesCollection : EDCollection
{
    NSString * mDefaultTableStyleName;
    NSString * mDefaultPivotStyleName;
}

- (void)dealloc;
- (NSString *)objectWithName:(NSString *)arg0;
- (NSObject *)defaultTableStyle;
- (NSObject *)defaultPivotStyle;
- (NSString *)defaultTableStyleName;
- (NSString *)defaultPivotStyleName;
- (void)setDefaultTableStyleName:(NSString *)arg0;
- (void)setDefaultPivotStyleName:(NSString *)arg0;

@end
