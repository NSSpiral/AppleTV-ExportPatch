/* Runtime dump - CPShape
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPShape : CPGraphicObject <CPDisposable>
{
    unsigned int pdfObjectID;
    struct CGPath * path;
    char isUprightRectangle;
    int windingRule;
    float lineWidth;
    float miterLimit;
    int lineCap;
    int lineJoin;
    struct CGColor * fillColor;
    struct CGColor * strokeColor;
    id * fillObject;
    id * strokeObject;
    struct CGAffineTransform paintTransform;
    char boundsComputed;
    char renderedBoundsComputed;
}

- (int)lineCap;
- (void)dealloc;
- (struct CGRect)bounds;
- (CPShape *)init;
- (struct CGPath *)path;
- (CPShape *)copyWithZone:(struct _NSZone *)arg0;
- (float)lineWidth;
- (void)setLineWidth:(float)arg0;
- (float)miterLimit;
- (void)setMiterLimit:(float)arg0;
- (NSString *)string;
- (void)setFillColor:(struct CGColor *)arg0;
- (void)setStrokeColor:(struct CGColor *)arg0;
- (char)isVisible;
- (struct CGColor *)fillColor;
- (struct CGColor *)strokeColor;
- (void)setPath:(struct CGPath *)arg0;
- (void)setLineCap:(int)arg0;
- (void)setLineJoin:(int)arg0;
- (NSDictionary *)attributes;
- (CPShape *)initWithPDFShape:(struct CPPDFShape *)arg0;
- (void)addShape:(MKShape *)arg0;
- (long)zOrder;
- (struct CGRect)renderedBounds;
- (void)accept:(id)arg0;
- (void)dispose;
- (unsigned int)pathElementCount;
- (void)recomputeRenderedBounds;
- (void)recomputeBounds;
- (char)isUprightRectangle;
- (char)hasSamePathAs:(id)arg0;
- (char)isStrokeFor:(OABStroke *)arg0;
- (id *)fillObject;
- (struct CGAffineTransform)paintTransform;
- (id *)strokeObject;
- (char)canCombineWith:(id)arg0;
- (void)setFillObject:(id *)arg0;
- (void)setStrokeObject:(id *)arg0;
- (void)setPaintTransform:(struct CGAffineTransform)arg0;
- (unsigned int)pdfObjectID;
- (void)setPdfObjectID:(unsigned int)arg0;
- (struct CGRect)innerBounds;
- (void)makeLineFromVertex:(struct CGPoint)arg0 toVertex:(struct CGPoint)arg1;
- (char)hasFill;
- (char)hasStroke;
- (int)windingRule;
- (void)setWindingRule:(int)arg0;
- (int)lineJoin;
- (void)finalize;

@end
