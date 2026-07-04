/* Runtime dump - PT2DGraphAxisStyle
 * Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PT2DGraphAxisStyle : NSObject
{
    char _showsGridlines;
    char _showsHashmarks;
    char _showsTitle;
    UIColor * _color;
    float _lineWidth;
    float _hashmarkInterval;
    NSString * _title;
    UIColor * _gridlineColor;
    UIColor * _titleColor;
    unsigned int _gridlineCount;
}

@property (retain, nonatomic) UIColor * color;
@property (nonatomic) float lineWidth;
@property (nonatomic) float hashmarkInterval;
@property (nonatomic) NSString * title;
@property (retain, nonatomic) UIColor * gridlineColor;
@property (retain, nonatomic) UIColor * titleColor;
@property (nonatomic) unsigned int gridlineCount;
@property (nonatomic) char showsGridlines;
@property (nonatomic) char showsHashmarks;
@property (nonatomic) char showsTitle;

- (PT2DGraphAxisStyle *)init;
- (void)setTitle:(NSString *)arg0;
- (NSString *)title;
- (float)lineWidth;
- (void)setLineWidth:(float)arg0;
- (UIColor *)color;
- (void)setColor:(UIColor *)arg0;
- (UIColor *)titleColor;
- (void)setTitleColor:(UIColor *)arg0;
- (void).cxx_destruct;
- (void)setGridlineCount:(unsigned int)arg0;
- (void)setGridlineColor:(UIColor *)arg0;
- (void)setShowsGridlines:(char)arg0;
- (float)hashmarkInterval;
- (void)setHashmarkInterval:(float)arg0;
- (UIColor *)gridlineColor;
- (unsigned int)gridlineCount;
- (char)showsGridlines;
- (char)showsHashmarks;
- (void)setShowsHashmarks:(char)arg0;
- (char)showsTitle;
- (void)setShowsTitle:(char)arg0;

@end
