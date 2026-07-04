/* Runtime dump - UIPDFUnderlineAnnotation
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface UIPDFUnderlineAnnotation : UIPDFMarkupAnnotation

- (void)drawLayer:(CALayer *)arg0 inContext:(struct CGContext *)arg1;
- (void)drawInContext:(struct CGContext *)arg0;
- (Class)viewClass;
- (char)recognizeGestures;
- (void)drawLayerUpright:(id)arg0 inContext:(struct CGContext *)arg1 selection:(struct _NSRange *)arg2 rectangles:(unsigned int)arg3;
- (void)drawLayerRotated:(id)arg0 inContext:(struct CGContext *)arg1 selection:(struct _NSRange *)arg2 rectangles:(unsigned int)arg3;
- (int)annotationType;

@end
