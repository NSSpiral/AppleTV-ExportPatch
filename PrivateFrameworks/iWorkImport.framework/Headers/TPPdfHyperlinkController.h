/* Runtime dump - TPPdfHyperlinkController
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPPdfHyperlinkController : TSAPdfHyperlinkController
{
    struct CGRect mCanvasRect;
    TSWPStorage * mBodyStorage;
}

+ (NSObject *)footnoteRefNameForIndex:(unsigned int)arg0;
+ (NSObject *)footnoteMarkNameForIndex:(unsigned int)arg0;

- (TPPdfHyperlinkController *)initWithDocumentRoot:(NSObject *)arg0;
- (void)addHyperlinksForRep:(NSObject *)arg0 context:(struct CGContext *)arg1;
- (struct CGRect)canvasRect;
- (char)ignoreUrl:(NSURL *)arg0;
- (char)isDestination:(NSObject *)arg0;
- (NSURL *)destinationFromUrl:(NSURL *)arg0;
- (void)setCanvasRect:(struct CGRect)arg0;
- (void).cxx_construct;

@end
