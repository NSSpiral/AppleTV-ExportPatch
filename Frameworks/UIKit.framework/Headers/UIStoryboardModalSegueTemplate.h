/* Runtime dump - UIStoryboardModalSegueTemplate
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStoryboardModalSegueTemplate : UIStoryboardSegueTemplate
{
    char _useDefaultModalPresentationStyle;
    char _useDefaultModalTransitionStyle;
    int _modalPresentationStyle;
    int _modalTransitionStyle;
    char _animates;
}

@property (nonatomic) char useDefaultModalPresentationStyle;
@property (nonatomic) char useDefaultModalTransitionStyle;
@property (nonatomic) int modalPresentationStyle;
@property (nonatomic) int modalTransitionStyle;
@property (nonatomic) char animates;

- (UIStoryboardModalSegueTemplate *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (int)modalPresentationStyle;
- (void)setModalPresentationStyle:(int)arg0;
- (int)modalTransitionStyle;
- (void)setModalTransitionStyle:(int)arg0;
- (NSObject *)segueWithDestinationViewController:(BRController *)arg0;
- (NSString *)defaultSegueClassName;
- (void)setUseDefaultModalPresentationStyle:(char)arg0;
- (void)setUseDefaultModalTransitionStyle:(char)arg0;
- (void)setAnimates:(char)arg0;
- (char)useDefaultModalPresentationStyle;
- (char)useDefaultModalTransitionStyle;
- (char)animates;

@end
