/* Runtime dump - EDColorReference
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDColorReference : NSObject <NSCopying>
{
    EDResources * mResources;
    int mSystemColorID;
    unsigned int mColorIndex;
    unsigned int mThemeIndex;
    double mTint;
}

+ (NSArray *)colorReferenceWithResources:(NSArray *)arg0;
+ (UIColor *)colorReferenceWithColor:(UIColor *)arg0 resources:(NSArray *)arg1;
+ (NSObject *)colorReferenceWithThemeIndex:(unsigned int)arg0 tint:(double)arg1 resources:(NSArray *)arg2;
+ (UIColor *)colorReferenceWithSystemColorID:(int)arg0 resources:(NSArray *)arg1;
+ (NSObject *)colorReferenceWithColorIndex:(unsigned int)arg0 resources:(NSArray *)arg1;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (BOOL)isValid;
- (EDColorReference *)copyWithZone:(struct _NSZone *)arg0;
- (UIColor *)color;
- (int)systemColorID;
- (EDColorReference *)initWithResources:(NSArray *)arg0;
- (EDColorReference *)initWithColor:(UIColor *)arg0 resources:(NSArray *)arg1;
- (char)isEqualToColorReference:(NSObject *)arg0;
- (unsigned int)themeIndex;
- (double)tint;
- (unsigned int)colorIndex;

@end
