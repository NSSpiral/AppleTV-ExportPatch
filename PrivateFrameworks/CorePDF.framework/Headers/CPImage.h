/* Runtime dump - CPImage
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPImage : CPGraphicObject
{
    struct CPPDFImage * imageData;
    char renderedBoundsComputed;
}

- (CPImage *)initWithBounds:(struct CGRect)arg0;
- (struct CGRect)bounds;
- (char)isVisible;
- (CPImage *)initWithPDFImage:(struct CPPDFImage *)arg0;
- (long)zOrder;
- (struct CGRect)renderedBounds;
- (void)accept:(id)arg0;
- (void)recomputeRenderedBounds;
- (struct CPPDFImage *)imageData;

@end
