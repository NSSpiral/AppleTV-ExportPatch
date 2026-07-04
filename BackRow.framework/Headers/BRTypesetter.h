/* Runtime dump - BRTypesetter
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface BRTypesetter : NSObject
{
    NSAttributedString * _resolvedString;
    struct __CTTypesetter * _setter;
    NSMutableArray * _lines;
    struct CGSize _boxSize;
    struct CGSize _shadowOffset;
    struct CGColor * _shadowColor;
    float _shadowBlurAmount;
    float _flushFactor;
    char _renderingAttributesFetched;
    char _truncated;
}

+ (BRTypesetter *)parseTypographicMarkup:(id)arg0;
+ (float)pointSizeForBoxHeight:(float)arg0 fontName:(NSString *)arg1;

- (struct CGSize)typographicBounds;
- (BRTypesetter *)initWithAttributedString:(NSAttributedString *)arg0 textBoxSize:(struct CGSize)arg1;
- (void)drawTextAtPoint:(struct CGPoint)arg0 inContext:(struct CGContext *)arg1;
- (long)numLines;
- (char)isTruncated;
- (id)_boxLines:(char *)arg0;
- (struct __CTLine *)_truncateLine:(struct __CTLine *)arg0 withSetting:(unsigned char)arg1;
- (void)_justifyLines:(id)arg0;
- (void)_updateRenderingAttributes;
- (struct __CTLine *)_truncationToken;
- (void)dealloc;
- (NSObject *)lineAtIndex:(long)arg0;

@end
