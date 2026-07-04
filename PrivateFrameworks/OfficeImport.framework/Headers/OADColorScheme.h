/* Runtime dump - OADColorScheme
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADColorScheme : NSObject <NSCopying>
{
    NSMutableDictionary * mColors;
}

- (void)dealloc;
- (OADColorScheme *)init;
- (char)isEqual:(NSObject *)arg0;
- (OADColorScheme *)copyWithZone:(struct _NSZone *)arg0;
- (void)addColor:(UIColor *)arg0 index:(int)arg1;
- (NSObject *)colorForIndex:(int)arg0;
- (unsigned int)colorCount;
- (void)setColor:(UIColor *)arg0 index:(int)arg1;
- (void)addDefaultColors;

@end
