/* Runtime dump - CUIPSDGradientColorStop
 * Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIPSDGradientColorStop : CUIPSDGradientStop <NSCoding>
{
    struct _psdGradientColor gradientColor;
}

+ (void)initialize;
+ (NSObject *)colorStopWithLocation:(float)arg0 gradientColor:(struct _psdGradientColor)arg1;

- (CUIPSDGradientColorStop *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (CUIPSDGradientColorStop *)copyWithZone:(struct _NSZone *)arg0;
- (char)isColorStop;
- (float)colorLocation;
- (struct _psdGradientColor)gradientColor;
- (CUIPSDGradientColorStop *)initWithLocation:(float)arg0 gradientColor:(struct _psdGradientColor)arg1;

@end
