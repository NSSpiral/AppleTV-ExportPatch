/* Runtime dump - CUIPattern
 * Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIPattern : NSObject
{
    struct CGImage * _patternImage;
    struct CGPattern * _pattern;
    float _alpha;
}

@property (nonatomic) float alpha;

- (void)dealloc;
- (float)alpha;
- (void)setAlpha:(float)arg0;
- (NSString *)description;
- (struct CGPattern *)_newPattern;
- (CUIPattern *)initWithImageRef:(struct CGImage *)arg0;
- (void)setPatternInContext:(struct CGContext *)arg0;
- (struct CGImage *)patternImageRef;
- (struct CGPattern *)pattern;

@end
