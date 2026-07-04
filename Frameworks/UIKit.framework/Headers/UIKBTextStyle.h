/* Runtime dump - UIKBTextStyle
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBTextStyle : NSObject <NSCopying>
{
    NSString * _fontName;
    float _fontSize;
    float _minFontSize;
    float _kerning;
    float _textOpacity;
    NSString * _textColor;
    NSString * _etchColor;
    float _pathWeight;
    int _selector;
    struct CGPoint _textOffset;
    struct CGPoint _etchOffset;
}

@property (retain, nonatomic) NSString * fontName;
@property (nonatomic) float fontSize;
@property (nonatomic) float minFontSize;
@property (nonatomic) float kerning;
@property (nonatomic) float textOpacity;
@property (retain, nonatomic) NSString * textColor;
@property (retain, nonatomic) NSString * etchColor;
@property (nonatomic) struct CGPoint textOffset;
@property (nonatomic) struct CGPoint etchOffset;
@property (nonatomic) float pathWeight;
@property (nonatomic) int selector;

+ (NSString *)styleWithFontName:(NSString *)arg0 withFontSize:(float)arg1;
+ (UIColor *)styleWithTextColor:(NSString *)arg0;

- (void)dealloc;
- (UIKBTextStyle *)init;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (void)setSelector:(int)arg0;
- (UIKBTextStyle *)copyWithZone:(struct _NSZone *)arg0;
- (void)setTextColor:(NSString *)arg0;
- (int)selector;
- (NSString *)textColor;
- (NSString *)fontName;
- (void)setMinFontSize:(float)arg0;
- (float)minFontSize;
- (void)setFontSize:(float)arg0;
- (void)setTextOffset:(struct CGPoint)arg0;
- (void)setPathWeight:(float)arg0;
- (struct CGPoint)textOffset;
- (void)setFontName:(NSString *)arg0;
- (void)setKerning:(float)arg0;
- (void)setTextOpacity:(float)arg0;
- (float)fontSize;
- (float)kerning;
- (float)textOpacity;
- (NSString *)etchColor;
- (struct CGPoint)etchOffset;
- (float)pathWeight;
- (void)setEtchColor:(NSString *)arg0;
- (void)setEtchOffset:(struct CGPoint)arg0;
- (void)overlayWithStyle:(NSObject *)arg0;

@end
