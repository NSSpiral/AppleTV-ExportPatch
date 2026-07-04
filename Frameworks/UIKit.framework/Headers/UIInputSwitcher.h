/* Runtime dump - UIInputSwitcher
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInputSwitcher : NSObject
{
    UIDelayedAction * m_switcherDelay;
    int m_state;
    UIInputSwitcherView * m_switcherView;
    NSString * _newMode;
}

+ (UIInputSwitcher *)sharedInstance;
+ (UIInputSwitcher *)activeInstance;

- (void)dealloc;
- (UIInputSwitcher *)init;
- (char)switchMode:(id)arg0 withDelay:(char)arg1;
- (char)handleSwitchCommand:(char)arg0;
- (char)isVisible;
- (void)hideSwitcher;
- (char)handleModifiersChangedEvent:(NSObject *)arg0;
- (void)clearSwitcherTimer;
- (void)clearHideSwitcherTimer;
- (void)cancelSwitcherTimer;
- (void)touchHideSwitcherTimer;
- (void)handleRotate:(id)arg0;
- (void)showSwitcher;
- (void)setNewMode:(NSString *)arg0;
- (NSString *)newMode;
- (void)touchSwitcherTimer;

@end
