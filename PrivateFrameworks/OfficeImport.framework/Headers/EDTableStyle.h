/* Runtime dump - EDTableStyle
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDTableStyle : NSObject <NSCopying>
{
    NSString * mName;
    EDKeyedCollection * mTableStyleElements;
}

+ (TSTTableStyle *)tableStyle;

- (void)dealloc;
- (EDTableStyle *)init;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (EDTableStyle *)copyWithZone:(struct _NSZone *)arg0;
- (id)tableStyleElements;

@end
