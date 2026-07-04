/* Runtime dump - TPHeaderRep
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPHeaderRep : TSWPHeaderRep
{
    char _hideKnobs;
}

@property (readonly, nonatomic) TPPaginatedPageInfo * pageInfo;
@property (nonatomic) char hideKnobs;

- (TNPageLayout *)pageLayout;
- (TPPaginatedPageInfo *)pageInfo;
- (char)p_isInDocumentSetup;
- (char)p_isMiddleHeaderRep;
- (char)p_isMiddleFooterRep;
- (char)shouldIgnoreSingleTapAtPoint:(struct CGPoint)arg0 withRecognizer:(NSObject *)arg1;
- (char)p_shouldCreateArrowKnobs;
- (char)hideKnobs;
- (void)setHideKnobs:(char)arg0;

@end
