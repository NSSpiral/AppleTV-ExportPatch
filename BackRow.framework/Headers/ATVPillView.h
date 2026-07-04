/* Runtime dump - ATVPillView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVThreePartHorizontalStretchView.h>

@class BRTextControl;
@interface ATVPillView : ATVThreePartHorizontalStretchView
{
    int _color;
    int _position;
    NSString * _title;
    struct CGColor * _titleColor;
    BRTextControl * _textControl;
    struct ? _insets;
}

@property (nonatomic) int color;
@property (nonatomic) int position;
@property (nonatomic) struct ? insets;
@property (copy, nonatomic) NSString * title;
@property (nonatomic) struct CGColor * titleColor;
@property (retain, nonatomic) BRTextControl * textControl;

- (BRTextControl *)textControl;
- (void)setTextControl:(BRTextControl *)arg0;
- (void)dealloc;
- (ATVPillView *)init;
- (void)setTitle:(NSString *)arg0;
- (NSString *)title;
- (void)setPosition:(int)arg0;
- (int)position;
- (int)color;
- (void)setColor:(int)arg0;
- (struct CGColor *)titleColor;
- (void)setTitleColor:(struct CGColor *)arg0;
- (void).cxx_destruct;
- (struct ?)insets;
- (void)setInsets:(struct ?)arg0;
- (NSDictionary *)_textAttributes;

@end
