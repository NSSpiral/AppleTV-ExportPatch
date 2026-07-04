/* Runtime dump - TNPageRep
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TNPageRep : TSWPPageRep
{
    struct CGRect _shadowPathRect;
    struct CGPath * _shadowPath;
}

- (TNPageRep *)initWithLayout:(TSDLayout *)arg0 canvas:(TSDCanvas *)arg1;
- (char)directlyManagesLayerContent;
- (char)p_headerFooterIsVisibleAndInteractive:(int)arg0;
- (int)p_hitHeaderFooterFragment:(int)arg0 atPoint:(struct CGPoint)arg1;
- (NSObject *)p_repForHeaderLayout:(NSObject *)arg0;
- (NSDictionary *)p_childRepForInfo:(NSDictionary *)arg0;
- (void)dealloc;
- (char)isOpaque;
- (void)drawInContext:(struct CGContext *)arg0;

@end
