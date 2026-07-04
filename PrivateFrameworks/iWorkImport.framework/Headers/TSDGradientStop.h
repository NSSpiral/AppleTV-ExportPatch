/* Runtime dump - TSDGradientStop
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDGradientStop : NSObject <TSDMixing, NSCopying, NSMutableCopying>
{
    TSUColor * mColor;
    float mFraction;
    float mInflection;
}

@property (readonly, copy, nonatomic) TSUColor * color;
@property (readonly, nonatomic) float fraction;
@property (readonly, nonatomic) float inflection;

+ (UIColor *)gradientStopWithColor:(TSUColor *)arg0 fraction:(float)arg1;
+ (UIColor *)gradientStopWithColor:(TSUColor *)arg0 fraction:(float)arg1 inflection:(float)arg2;

- (float)fraction;
- (void)saveToArchive:(struct GradientArchive_GradientStop *)arg0 archiver:(NSObject *)arg1;
- (TSDGradientStop *)initWithArchive:(struct GradientArchive_GradientStop *)arg0 unarchiver:(struct GradientArchive_GradientStop)arg1;
- (NSObject *)mixedObjectWithFraction:(float)arg0 ofObject:(NSObject *)arg1;
- (int)mixingTypeWithObject:(NSObject *)arg0 context:(NSObject *)arg1;
- (float)inflection;
- (UIColor *)gradientStopWithColor:(TSUColor *)arg0;
- (TSDGradientStop *)initWithGradientStop:(GQDRGradientStop *)arg0;
- (void)p_setFraction:(float)arg0;
- (TSDGradientStop *)initWithColor:(TSUColor *)arg0 fraction:(float)arg1 inflection:(float)arg2;
- (void)p_setColor:(UIColor *)arg0;
- (void)p_setInflection:(float)arg0;
- (TSDGradientStop *)initWithColor:(TSUColor *)arg0 fraction:(float)arg1;
- (id)gradientStopWithInflection:(float)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (TSDGradientStop *)copyWithZone:(struct _NSZone *)arg0;
- (TSUColor *)color;
- (TSDGradientStop *)mutableCopyWithZone:(struct _NSZone *)arg0;

@end
