/* Runtime dump - CUIPSDGradientOpacityStop
 * Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIPSDGradientOpacityStop : CUIPSDGradientStop <NSCoding>
{
    float opacity;
}

+ (void)initialize;
+ (NSObject *)opacityStopWithLocation:(float)arg0 opacity:(float)arg1;

- (CUIPSDGradientOpacityStop *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (CUIPSDGradientOpacityStop *)copyWithZone:(struct _NSZone *)arg0;
- (float)opacity;
- (char)isOpacityStop;
- (float)opacityLocation;
- (CUIPSDGradientOpacityStop *)initWithLocation:(float)arg0 opacity:(float)arg1;

@end
