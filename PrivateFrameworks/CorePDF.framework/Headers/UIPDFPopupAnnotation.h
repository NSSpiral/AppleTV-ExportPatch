/* Runtime dump - UIPDFPopupAnnotation
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface UIPDFPopupAnnotation : UIPDFAnnotation
{
    UIPDFAnnotation * parent;
    struct CGRect _adjustedBounds;
}

@property (nonatomic) UIPDFAnnotation * parent;
@property (nonatomic) struct CGRect adjustedBounds;

- (struct CGRect)bounds;
- (UIPDFPopupAnnotation *)init;
- (Class)viewClass;
- (UIPDFPopupAnnotation *)initWithAnnotationDictionary:(struct CGPDFDictionary *)arg0;
- (char)recognizeGestures;
- (struct CGRect)adjustedBounds;
- (void)setAdjustedBounds:(struct CGRect)arg0;
- (int)annotationType;
- (UIPDFAnnotation *)parent;
- (void)setParent:(UIPDFAnnotation *)arg0;

@end
