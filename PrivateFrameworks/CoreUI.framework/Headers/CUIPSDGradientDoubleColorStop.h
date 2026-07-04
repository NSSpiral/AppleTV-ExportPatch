/* Runtime dump - CUIPSDGradientDoubleColorStop
 * Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIPSDGradientDoubleColorStop : CUIPSDGradientColorStop <NSCoding>
{
    struct _psdGradientColor leadOutColor;
}

+ (void)initialize;
+ (NSObject *)doubleColorStopWithLocation:(float)arg0 leadInColor:(struct _psdGradientColor)arg1 leadOutColor:(struct _psdGradientColor)arg2;

- (CUIPSDGradientDoubleColorStop *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (CUIPSDGradientDoubleColorStop *)copyWithZone:(struct _NSZone *)arg0;
- (struct _psdGradientColor)leadOutColor;
- (char)isDoubleStop;
- (CUIPSDGradientDoubleColorStop *)initWithLocation:(float)arg0 leadInColor:(struct _psdGradientColor)arg1 leadOutColor:(struct _psdGradientColor)arg2;
- (struct _psdGradientColor)leadInColor;

@end
