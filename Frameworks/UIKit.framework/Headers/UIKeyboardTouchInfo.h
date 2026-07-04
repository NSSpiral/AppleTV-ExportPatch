/* Runtime dump - UIKeyboardTouchInfo
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardTouchInfo : NSObject
{
    UITouch * _touch;
    UIKBTree * _key;
    UIKBTree * _keyplane;
    UIKBTree * _slidOffKey;
    struct CGPoint _initialPoint;
    struct CGPoint _initialDragPoint;
    char _dragged;
    int _stage;
    char _maySuppressUpAction;
    int _initialKeyState;
}

@property (retain, nonatomic) UITouch * touch;
@property (retain, nonatomic) UIKBTree * key;
@property (retain, nonatomic) UIKBTree * keyplane;
@property (retain, nonatomic) UIKBTree * slidOffKey;
@property (nonatomic) struct CGPoint initialPoint;
@property (nonatomic) struct CGPoint initialDragPoint;
@property (nonatomic) char dragged;
@property (nonatomic) int stage;
@property (nonatomic) char maySuppressUpAction;
@property (nonatomic) int initialKeyState;

- (void)dealloc;
- (UIKBTree *)key;
- (UITouch *)touch;
- (void)setTouch:(UITouch *)arg0;
- (void)setKey:(UIKBTree *)arg0;
- (void)setKeyplane:(UIKBTree *)arg0;
- (void)setSlidOffKey:(UIKBTree *)arg0;
- (UIKBTree *)keyplane;
- (UIKBTree *)slidOffKey;
- (struct CGPoint)initialPoint;
- (void)setInitialPoint:(struct CGPoint)arg0;
- (int)stage;
- (void)setStage:(int)arg0;
- (struct CGPoint)initialDragPoint;
- (void)setInitialDragPoint:(struct CGPoint)arg0;
- (char)dragged;
- (void)setDragged:(char)arg0;
- (char)maySuppressUpAction;
- (void)setMaySuppressUpAction:(char)arg0;
- (int)initialKeyState;
- (void)setInitialKeyState:(int)arg0;

@end
