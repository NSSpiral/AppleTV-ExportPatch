/* Runtime dump - VKShieldArtwork
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKShieldArtwork : NSObject
{
    float _scale;
    NSCache * _imageCache;
    NSDictionary * _stringAttributes;
    struct CGColor * _shadowColor;
    struct CGSize _shadowOffset;
    float _shadowRadius;
    float _textCenterOffsetX;
    float _textBaseline;
    struct __CTFont * _nonDigitFont;
    struct CGPoint _center;
    NSMutableDictionary * _textSpecificArtworks;
    struct CGContext * _templateContext;
    id _newContext;
    struct CGImage * _backgroundImage;
    struct ? _resizableInfo;
    char _resizable;
    float _lineHeight;
    float _lineSpacing;
}

@property (readonly, nonatomic) float scale;

- (void)dealloc;
- (float)scale;
- (void).cxx_construct;
- (UIImage *)_initWithBackgroundImage:(struct CGImage *)arg0 contentScale:(float)arg1 resizableInfo:(struct ? *)arg2 font:(struct __CTFont *)arg3 nonDigitFont:(struct __CTFont *)arg4 textColor:(struct CGColor *)arg5 textCenterOffsetX:(float)arg6 textBaseline:(float)arg7 textStrokeWidth:(float)arg8 textStrokeColor:(struct CGColor *)arg9 textShadowOffset:(struct CGSize)arg10 textShadowRadius:(float)arg11 textShadowColor:(struct CGColor *)arg12 lineSpacing:(float)arg13;
- (NSString *)imageWithShieldText:(NSString *)arg0 allowMultiline:(char)arg1;
- (struct CGImage *)newImageWithShieldText:(NSString *)arg0 allowMultiline:(char)arg1 centerPoint:(struct CGPoint *)arg2;
- (VKShieldArtwork *)initWithPackedVariant:(id)arg0 backgroundImage:(struct CGImage *)arg1 scale:(float)arg2 colors:(struct ? *)arg3;
- (VKShieldArtwork *)initWithBackgroundImage:(struct CGImage *)arg0 contentScale:(float)arg1 font:(struct __CTFont *)arg2 nonDigitFont:(struct __CTFont *)arg3 textColor:(struct CGColor *)arg4 textCenterOffsetX:(float)arg5 textBaseline:(float)arg6 textStrokeWidth:(float)arg7 textStrokeColor:(struct CGColor *)arg8 textShadowOffset:(struct CGSize)arg9 textShadowRadius:(float)arg10 textShadowColor:(struct CGColor *)arg11;
- (VKShieldArtwork *)initWithResizableBackgroundImage:(struct CGImage *)arg0 resizableInfo:(struct ? *)arg1 contentScale:(float)arg2 font:(struct __CTFont *)arg3 nonDigitFont:(struct __CTFont *)arg4 textColor:(struct CGColor *)arg5 textCenterOffsetX:(float)arg6 textBaseline:(float)arg7 textStrokeWidth:(float)arg8 textStrokeColor:(struct CGColor *)arg9 textShadowOffset:(struct CGSize)arg10 textShadowRadius:(float)arg11 textShadowColor:(struct CGColor *)arg12 lineSpacing:(float)arg13;
- (void)setTextSpecificArtwork:(UIImage *)arg0 forStrings:(TPFootnotePropertyStrings *)arg1;
- (NSString *)imageWithShieldText:(NSString *)arg0;

@end
