/* Runtime dump - TSAPdfHyperlinkController
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSAPdfHyperlinkController : NSObject
{
    NSMutableArray * mHyperlinks;
    NSMutableArray * mDestinations;
}

- (NSObject *)p_hyperlinkRegionsForRep:(NSObject *)arg0 context:(struct CGContext *)arg1;
- (void)addHyperlinksForRep:(NSObject *)arg0 context:(struct CGContext *)arg1;
- (struct CGRect)canvasRect;
- (char)ignoreUrl:(NSURL *)arg0;
- (id)p_chopBezierIntoRects:(id)arg0;
- (void)p_combineSimilarElements:(id)arg0;
- (char)isDestination:(NSObject *)arg0;
- (void)p_commitDestinationToPDF:(id)arg0 cgrect:(struct CGRect)arg1 context:(struct CGSize)arg2;
- (void)p_commitUrlToPDF:(id)arg0 cgrect:(struct CGRect)arg1 context:(struct CGSize)arg2;
- (id)p_splitIntoSubshapes:(id)arg0;
- (NSURL *)destinationFromUrl:(NSURL *)arg0;
- (void)addHyperlinkForRect:(struct CGRect)arg0 withUrl:(struct CGSize)arg1 context:(NSObject *)arg2;
- (void)addHyperlinksForContents:(id)arg0 context:(struct CGContext *)arg1;
- (void)commitHyperlinksToPDF:(struct CGContext *)arg0 targetRect:(struct CGRect)arg1;
- (void)dealloc;
- (TSAPdfHyperlinkController *)init;

@end
