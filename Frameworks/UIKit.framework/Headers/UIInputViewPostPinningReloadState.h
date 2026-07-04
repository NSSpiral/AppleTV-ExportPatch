/* Runtime dump - UIInputViewPostPinningReloadState
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInputViewPostPinningReloadState : NSObject
{
    UIResponder * _responderPreventedFromSettingInputViews;
}

@property (retain, nonatomic) UIResponder * responderToReload;

+ (NSObject *)stateWithResponder:(UIResponder *)arg0;

- (void)dealloc;
- (void)setResponderToReload:(UIResponder *)arg0;
- (UIResponder *)responderToReload;

@end
