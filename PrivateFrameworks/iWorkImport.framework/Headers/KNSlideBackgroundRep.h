/* Runtime dump - KNSlideBackgroundRep
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNSlideBackgroundRep : TSDRep <TSDMagicMoveMatching>
{
    CALayer * mBlackBackgroundLayer;
    char mLayerNeedsUpdate;
    char mFillCanApplyToCALayer;
}

@property (readonly) KNSlideBackgroundInfo * slideBackgroundInfo;

+ (NSArray *)magicMoveMatchesBetweenOutgoingObjects:(NSArray *)arg0 andIncomingObjects:(NSArray *)arg1 textureContext:(TSDTextureContext *)arg2;

- (KNSlideBackgroundRep *)initWithLayout:(TSDLayout *)arg0 canvas:(TSDCanvas *)arg1;
- (NSString *)textureForContext:(NSObject *)arg0;
- (char)directlyManagesLayerContent;
- (char)wantsToDistortWithImagerContext;
- (KNSlideBackgroundInfo *)slideBackgroundInfo;
- (void)didUpdateLayer:(id)arg0;
- (CALayer *)additionalLayersUnderLayer;
- (void)dealloc;
- (char)isOpaque;
- (void)drawInContext:(struct CGContext *)arg0;

@end
