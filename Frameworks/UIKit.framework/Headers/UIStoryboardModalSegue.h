/* Runtime dump - UIStoryboardModalSegue
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStoryboardModalSegue : UIStoryboardSegue
{
    char _useDefaultModalPresentationStyle;
    char _useDefaultModalTransitionStyle;
    char _animates;
    int _modalPresentationStyle;
    int _modalTransitionStyle;
}

@property (nonatomic) char useDefaultModalPresentationStyle;
@property (nonatomic) char useDefaultModalTransitionStyle;
@property (nonatomic) int modalPresentationStyle;
@property (nonatomic) int modalTransitionStyle;
@property (nonatomic) char animates;

- (int)modalPresentationStyle;
- (void)setModalPresentationStyle:(int)arg0;
- (int)modalTransitionStyle;
- (void)setModalTransitionStyle:(int)arg0;
- (void)perform;
- (void)setUseDefaultModalPresentationStyle:(char)arg0;
- (void)setUseDefaultModalTransitionStyle:(char)arg0;
- (void)setAnimates:(char)arg0;
- (char)useDefaultModalPresentationStyle;
- (char)useDefaultModalTransitionStyle;
- (char)animates;

@end
