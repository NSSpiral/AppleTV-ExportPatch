/* Runtime dump - RMHeading
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface RMHeading : NSObject
{
    struct CGPDFNode * _node;
    struct CGPDFPage * _page;
    struct ? _textRange;
}

@property (readonly) struct CGPDFPage * page;
@property struct ? textRange;

- (struct CGRect)bounds;
- (struct CGPDFPage *)page;
- (struct ?)textRange;
- (void)setTextRange:(struct ?)arg0;
- (RMHeading *)initWithNode:(struct CGPDFNode *)arg0 onPage:(struct CGPDFPage *)arg1;

@end
