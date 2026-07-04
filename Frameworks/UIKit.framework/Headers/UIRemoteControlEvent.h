/* Runtime dump - UIRemoteControlEvent
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIRemoteControlEvent : UIInternalEvent
{
    int _subtype;
}

- (void)dealloc;
- (UIRemoteControlEvent *)_init;
- (void)_setSubtype:(int)arg0;
- (int)type;
- (NSArray *)_windows;
- (int)subtype;
- (void)_sendEventToResponder:(NSObject *)arg0;
- (void)_simpleRemoteActionNotification:(NSNotification *)arg0;

@end
