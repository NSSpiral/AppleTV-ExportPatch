/* Runtime dump - CUIPSDGradientStop
 * Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIPSDGradientStop : NSObject <NSCoding, NSCopying>
{
    float location;
}

+ (void)initialize;

- (CUIPSDGradientStop *)initWithLocation:(float)arg0;
- (CUIPSDGradientStop *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (CUIPSDGradientStop *)copyWithZone:(struct _NSZone *)arg0;
- (float)location;
- (char)isColorStop;
- (char)isOpacityStop;
- (char)isDoubleStop;
- (void)setLocation:(float)arg0;

@end
