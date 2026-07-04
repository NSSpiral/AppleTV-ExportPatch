/* Runtime dump - TPPageRep
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPPageRep : TSWPPageRep <TSDMasterDrawableDelegate>
{
    CALayer * _separatorLayer;
    TPMarginAdjustRep * _marginAdjustRep;
}

@property (readonly, nonatomic) TPMarginAdjustRep * marginAdjustRep;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)willBeRemoved;
- (char)directlyManagesLayerContent;
- (NSObject *)hitRep:(struct CGPoint)arg0 passingTest:(id /* block */)arg1;
- (void)drawInLayerContext:(struct CGContext *)arg0;
- (char)childRepIsOnDocSetupCanvas:(id)arg0;
- (char)childRepIsMasterDrawable:(id)arg0;
- (void)p_updateLayoutBordersVisibility;
- (void)p_updateBorderLayers;
- (char)p_headerFooterIsVisibleAndInteractive:(int)arg0;
- (int)p_hitHeaderFooterFragment:(int)arg0 atPoint:(struct CGPoint)arg1;
- (NSObject *)p_hitRep:(struct CGPoint)arg0 passingTest:(id /* block */)arg1;
- (NSObject *)hitMasterRep:(struct CGPoint)arg0;
- (void)showHUDForWPRep:(NSObject *)arg0 withFlags:(unsigned int)arg1;
- (char)p_pageRequiresSeparator;
- (id)bodyReps;
- (TPMarginAdjustRep *)marginAdjustRep;
- (void)dealloc;
- (void)setNeedsDisplay;
- (NSObject *)layerClass;
- (void)setNeedsDisplayInRect:(struct CGRect)arg0;
- (char)masksToBounds;
- (void)drawInContext:(struct CGContext *)arg0;

@end
