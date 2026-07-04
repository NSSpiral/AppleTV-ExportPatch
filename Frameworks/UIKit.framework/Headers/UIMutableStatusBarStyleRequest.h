/* Runtime dump - UIMutableStatusBarStyleRequest
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIMutableStatusBarStyleRequest : UIStatusBarStyleRequest

@property (nonatomic) int style;
@property (nonatomic) char legacy;
@property (nonatomic) int legibilityStyle;
@property (retain, nonatomic) UIColor * foregroundColor;
@property (retain, nonatomic) NSNumber * overrideHeight;

- (UIMutableStatusBarStyleRequest *)copyWithZone:(struct _NSZone *)arg0;
- (void)setStyle:(int)arg0;
- (void)setForegroundColor:(UIColor *)arg0;
- (void)setLegibilityStyle:(int)arg0;
- (void)setLegacy:(char)arg0;
- (void)setOverrideHeight:(NSNumber *)arg0;

@end
