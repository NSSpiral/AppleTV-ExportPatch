/* Runtime dump - UIBlurEffect
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIBlurEffect : UIVisualEffect
{
    int _style;
}

@property (readonly, nonatomic) int _style;

+ (char)supportsSecureCoding;
+ (NSObject *)effectWithStyle:(int)arg0;

- (UIBlurEffect *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (UIBlurEffect *)copyWithZone:(struct _NSZone *)arg0;
- (int)_style;
- (_UIBackdropViewSettings *)effectSettings;

@end
