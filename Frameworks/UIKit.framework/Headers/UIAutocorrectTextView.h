/* Runtime dump - UIAutocorrectTextView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIAutocorrectTextView : UIView
{
    NSString * m_string;
    int m_type;
    int m_edgeType;
    UIFont * m_textFont;
    char m_animating;
    char m_isLongString;
}

@property (nonatomic) char animating;
@property (nonatomic) char isLongString;

- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;
- (char)pointInside:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (char)pointInside:(struct CGPoint)arg0 forEvent:(struct __GSEvent *)arg1;
- (void)setAnimating:(char)arg0;
- (void)setEdgeType:(int)arg0;
- (struct CGRect)_calculateRectForExpandedHitRegion;
- (UIAutocorrectTextView *)initWithFrame:(struct CGRect)arg0 string:(struct CGSize)arg1 type:(NSObject *)arg2 edgeType:(int)arg3;
- (char)animating;
- (char)isLongString;
- (void)setIsLongString:(char)arg0;

@end
