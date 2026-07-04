/* Runtime dump - UIKBScreenTraits
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBScreenTraits : NSObject
{
    char _knobInput;
    UIScreen * _screen;
    int _orientation;
    float _keyboardWidth;
}

@property (readonly, nonatomic) UIScreen * screen;
@property (readonly, nonatomic) int idiom;
@property (readonly, nonatomic) char knobInput;
@property (nonatomic) int orientation;
@property (nonatomic) float keyboardWidth;

+ (NSObject *)traitsWithScreen:(UIScreen *)arg0 orientation:(int)arg1;

- (int)orientation;
- (UIScreen *)screen;
- (int)idiom;
- (void)setOrientation:(int)arg0;
- (UIKBScreenTraits *)initWithScreen:(UIScreen *)arg0 orientation:(int)arg1;
- (char)knobInput;
- (float)keyboardWidth;
- (void)setKeyboardWidth:(float)arg0;

@end
