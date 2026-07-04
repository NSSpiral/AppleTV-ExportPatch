/* Runtime dump - WKSyntheticClickTapGestureRecognizer
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKSyntheticClickTapGestureRecognizer : UITapGestureRecognizer
{
    id _gestureRecognizedTarget;
    SEL _gestureRecognizedAction;
    id _resetTarget;
    SEL _resetAction;
}

- (void)setState:(int)arg0;
- (void)reset;
- (void)setGestureRecognizedTarget:(NSObject *)arg0 action:(SEL)arg1;
- (void)setResetTarget:(NSObject *)arg0 action:(SEL)arg1;

@end
