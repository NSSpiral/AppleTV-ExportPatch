/* Runtime dump - DOMRGBColor
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMRGBColor : DOMObject

@property (readonly) DOMCSSPrimitiveValue * red;
@property (readonly) DOMCSSPrimitiveValue * green;
@property (readonly) DOMCSSPrimitiveValue * blue;
@property (readonly) DOMCSSPrimitiveValue * alpha;

- (void)dealloc;
- (DOMCSSPrimitiveValue *)alpha;
- (struct CGColor *)color;
- (DOMCSSPrimitiveValue *)red;
- (DOMCSSPrimitiveValue *)green;
- (DOMCSSPrimitiveValue *)blue;
- (void)finalize;

@end
