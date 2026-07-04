/* Runtime dump - UIPDFAnnotationView
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface UIPDFAnnotationView : UIView
{
    UIPDFAnnotation * _annotation;
}

@property (nonatomic) UIPDFAnnotation * annotation;

- (UIPDFAnnotation *)annotation;
- (void)setAnnotation:(UIPDFAnnotation *)arg0;

@end
