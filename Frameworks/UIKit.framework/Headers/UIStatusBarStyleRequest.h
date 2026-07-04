/* Runtime dump - UIStatusBarStyleRequest
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBarStyleRequest : NSObject <NSMutableCopying, NSCopying>
{
    int _style;
    char _legacy;
    int _legibilityStyle;
    UIColor * _foregroundColor;
    NSNumber * _overrideHeight;
}

@property (readonly, nonatomic) int style;
@property (readonly, nonatomic) char legacy;
@property (readonly, nonatomic) int legibilityStyle;
@property (readonly, retain, nonatomic) UIColor * foregroundColor;
@property (readonly, retain, nonatomic) NSNumber * overrideHeight;

- (void)dealloc;
- (UIStatusBarStyleRequest *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (char)isTranslucent;
- (UIStatusBarStyleRequest *)copyWithZone:(struct _NSZone *)arg0;
- (int)style;
- (char)isDoubleHeight;
- (UIStatusBarStyleRequest *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (UIColor *)foregroundColor;
- (int)legibilityStyle;
- (NSNumber *)overrideHeight;
- (char)isLegacy;
- (UIStatusBarStyleRequest *)initWithStyle:(int)arg0 legacy:(char)arg1 legibilityStyle:(int)arg2 foregroundColor:(UIColor *)arg3 overrideHeight:(NSNumber *)arg4;
- (UIStatusBarStyleRequest *)initWithStyle:(int)arg0 legacy:(char)arg1 legibilityStyle:(int)arg2 foregroundColor:(UIColor *)arg3;
- (NSObject *)_copyWithZone:(struct _NSZone *)arg0 class:(Class)arg1;

@end
