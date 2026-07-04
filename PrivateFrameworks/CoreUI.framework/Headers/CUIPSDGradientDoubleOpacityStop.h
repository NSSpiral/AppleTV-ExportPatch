/* Runtime dump - CUIPSDGradientDoubleOpacityStop
 * Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIPSDGradientDoubleOpacityStop : CUIPSDGradientOpacityStop <NSCoding>
{
    float leadOutOpacity;
}

+ (void)initialize;
+ (NSObject *)doubleOpacityStopWithLocation:(float)arg0 leadInOpacity:(float)arg1 leadOutOpacity:(float)arg2;

- (CUIPSDGradientDoubleOpacityStop *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (CUIPSDGradientDoubleOpacityStop *)copyWithZone:(struct _NSZone *)arg0;
- (float)leadOutOpacity;
- (char)isDoubleStop;
- (CUIPSDGradientDoubleOpacityStop *)initWithLocation:(float)arg0 leadInOpacity:(float)arg1 leadOutOpacity:(float)arg2;
- (float)leadInOpacity;

@end
