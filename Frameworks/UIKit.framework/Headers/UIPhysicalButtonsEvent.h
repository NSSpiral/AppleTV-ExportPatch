/* Runtime dump - UIPhysicalButtonsEvent
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPhysicalButtonsEvent : UIInternalEvent
{
    NSMutableSet * _allPhysicalButtons;
    _UIPhysicalButton * _triggeringPhysicalButton;
}

@property (retain, nonatomic) _UIPhysicalButton * _triggeringPhysicalButton;

- (void)dealloc;
- (UIPhysicalButtonsEvent *)_init;
- (void)_addPhysicalButton:(_UIPhysicalButton *)arg0;
- (NSMutableSet *)_allPhysicalButtons;
- (void)set_triggeringPhysicalButton:(_UIPhysicalButton *)arg0;
- (int)type;
- (void)_removePhysicalButton:(_UIPhysicalButton *)arg0;
- (NSArray *)_windows;
- (_UIPhysicalButton *)_triggeringPhysicalButton;
- (UIWindow *)_gestureRecognizersForWindow:(NSObject *)arg0;
- (NSObject *)_physicalButtonsForGestureRecognizer:(NSObject *)arg0 withPhase:(int)arg1;
- (UIWindow *)_respondersForWindow:(NSObject *)arg0;
- (NSObject *)_physicalButtonsForResponder:(NSObject *)arg0 withPhase:(int)arg1;
- (UIWindow *)_physicalButtonsForWindow:(NSObject *)arg0;
- (NSObject *)_physicalButtonsForResponder:(NSObject *)arg0;
- (NSObject *)_physicalButtonsForGestureRecognizer:(NSObject *)arg0;

@end
