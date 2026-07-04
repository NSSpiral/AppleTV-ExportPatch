/* Runtime dump - UIPDFLinkAnnotation
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface UIPDFLinkAnnotation : UIPDFMarkupAnnotation

- (NSURL *)url;
- (unsigned int)pageNumber;
- (char)recognizeGestures;
- (char)shouldRecognizeTapOrPress:(struct CGPoint)arg0;
- (NSURL *)newBaseURL;
- (unsigned int)getDestination:(struct CGPDFDictionary *)arg0;
- (unsigned int)getNamedDestination:(struct CGPDFDictionary *)arg0;
- (char)quadPoints:(struct CGPDFArray *)arg0 within:(struct CGRect)arg1;
- (struct CGRect)linkRectangle;

@end
