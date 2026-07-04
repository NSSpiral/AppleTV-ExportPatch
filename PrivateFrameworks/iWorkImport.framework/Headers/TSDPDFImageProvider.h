/* Runtime dump - TSDPDFImageProvider
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDPDFImageProvider : TSDImageProvider
{
    struct CGPDFDocument * mPDFDocument;
    struct CGSize mNaturalSize;
}

- (struct CGPDFDocument *)CGPDFDocument;
- (void)p_loadIfNecessary;
- (struct CGPDFDocument *)p_load;
- (int)pageAngle;
- (void)dealloc;
- (void)flush;
- (char)isValid;
- (struct CGSize)naturalSize;
- (void)drawImageInContext:(struct CGContext *)arg0 rect:(struct CGRect)arg1;
- (char)hasFlushableContent;

@end
