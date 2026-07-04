/* Runtime dump - QLPDFThumbnailOperation
 * Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLPDFThumbnailOperation : QLThumbnailOperation
{
    struct CGPDFDocument * _documentRef;
}

- (QLPDFThumbnailOperation *)initWithPDFDocumentRef:(struct CGPDFDocument *)arg0;
- (void)dealloc;
- (void)main;

@end
