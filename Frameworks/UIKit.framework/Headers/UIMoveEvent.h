/* Runtime dump - UIMoveEvent
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIMoveEvent : UIInternalEvent
{
    int _moveDirection;
    unsigned int _focusHeading;
}

@property (nonatomic) int _moveDirection;
@property (nonatomic) unsigned int _focusHeading;

- (int)type;
- (void)_setMoveDirection:(int)arg0;
- (void)_setFocusHeading:(unsigned int)arg0;
- (unsigned int)_focusHeading;
- (int)_moveDirection;
- (void)_sendEventToResponder:(NSObject *)arg0;

@end
