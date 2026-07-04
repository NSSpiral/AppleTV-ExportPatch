/* Runtime dump - FBOrderedRequesters
 * Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBOrderedRequesters : NSObject
{
    id _bands;
}

- (void)dealloc;
- (FBOrderedRequesters *)init;
- (NSString *)description;
- (void)removeRequester:(GEOFeatureSpecificSimpleTileRequester *)arg0;
- (id)requesters;
- (id)frontmostRequester;
- (char)containsRequester:(id)arg0 inBand:(int)arg1;
- (void)addRequester:(GEOFeatureSpecificSimpleTileRequester *)arg0 toBand:(int)arg1;
- (void)prioritizeRequester:(id)arg0;

@end
