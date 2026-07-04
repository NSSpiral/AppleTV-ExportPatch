/* Runtime dump - TSWPPageRep
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPPageRep : TSDContainerRep

+ (UIImage *)p_overflowKnobImage;

- (void)updateFromLayout;
- (void)addAdditionalChildLayersToArray:(NSArray *)arg0;
- (void)p_updateLayoutBordersVisibility;
- (void)p_updateBorderLayers;
- (char)p_hasValidHeaderFooterForType:(int)arg0;
- (char)p_headerFooterIsVisibleAndInteractive:(int)arg0;
- (int)p_hitHeaderFooterFragment:(int)arg0 atPoint:(struct CGPoint)arg1;
- (NSObject *)p_hitRep:(struct CGPoint)arg0 passingTest:(id /* block */)arg1;
- (void)p_createHeaderFooterBorderLayerIfNecessaryForType:(int)arg0;
- (void)p_createHeaderFooterOverflowIndicatorLayerIfNecessaryForType:(int)arg0 fragment:(int)arg1;
- (char)p_headerFooterBorderVisibleForType:(int)arg0;
- (void)dealloc;

@end
