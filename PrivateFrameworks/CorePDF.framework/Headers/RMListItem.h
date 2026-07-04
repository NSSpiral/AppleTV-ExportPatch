/* Runtime dump - RMListItem
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface RMListItem : NSObject
{
    struct CGPDFNode * * _paragraphs;
    unsigned int _count;
    unsigned int _pos;
}

@property (readonly) struct CGPDFNode * * paragraphNodes;
@property (readonly) struct CGPDFPage * page;

- (RMListItem *)initWithCount:(unsigned int)arg0;
- (void)dealloc;
- (struct CGRect)bounds;
- (struct CGPDFPage *)page;
- (void)addParagraph:(struct CGPDFNode *)arg0;
- (struct CGPDFNode * *)paragraphNodes;

@end
