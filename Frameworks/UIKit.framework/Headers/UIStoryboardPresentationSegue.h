/* Runtime dump - UIStoryboardPresentationSegue
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStoryboardPresentationSegue : UIStoryboardSegue <UIAdaptivePresentationControllerDelegate>
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
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (int)modalPresentationStyle;
- (void)setModalPresentationStyle:(int)arg0;
- (int)modalTransitionStyle;
- (void)setModalTransitionStyle:(int)arg0;
- (void)_prepare;
- (void)perform;
- (void)setUseDefaultModalPresentationStyle:(char)arg0;
- (void)setUseDefaultModalTransitionStyle:(char)arg0;
- (void)setAnimates:(char)arg0;
- (char)useDefaultModalPresentationStyle;
- (char)useDefaultModalTransitionStyle;
- (char)animates;

@end
