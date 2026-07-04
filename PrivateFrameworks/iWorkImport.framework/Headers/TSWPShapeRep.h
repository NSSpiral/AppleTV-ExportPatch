/* Runtime dump - TSWPShapeRep
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPShapeRep : TSDShapeRep <TSDMagicMoveMatching, TSDContainerRep, TSWPShapeLayoutDelegate>
{
    char _editingContainedRep;
    CALayer * _overflowGlyphLayer;
    struct CGPoint _originalAutosizePositionOffset;
    TSWPRep * _containedRep;
}

@property (readonly, nonatomic) TSWPStorage * textStorageForTexture;
@property (readonly, nonatomic) char isShapeInvisible;
@property (readonly, nonatomic) TSWPRep * containedRep;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) NSObject<TSDContainerInfo> * containerInfo;

+ (float)magicMoveAttributeMatchPercentBetweenOutgoingObject:(NSObject *)arg0 incomingObject:(TSDMagicMoveMatchObject *)arg1 mixingTypeContext:(NSObject *)arg2;
+ (float)p_mmAttributeMatchPercentWithOutgoingTextChunk:(id)arg0 incomingTextChunk:(id)arg1;
+ (TSWPShapeRep *)p_stringByApplyingCapitalizationPropertyFromStorage:(id)arg0 withRange:(struct _NSRange)arg1 toString:(NSString *)arg2;
+ (NSObject *)p_textureSetFromRep:(NSObject *)arg0 range:(struct _NSRange)arg1 includeListLabel:(char)arg2 desiredContentRect:(struct CGRect)arg3;
+ (char)p_listLabelsAreEqualWithOutgoingStorage:(id)arg0 outgoingCharIndex:(int)arg1 incomingStorage:(id)arg2 incomingCharIndex:(int)arg3 shouldMatch:(char *)arg4;
+ (void)p_getOutgoingTextureSet:(id *)arg0 incomingTextureSet:(id *)arg1 withOutgoingRep:(NSObject *)arg2 outgoingChunkRange:(struct _NSRange)arg3 incomingRep:(NSObject *)arg4 incomingChunkRange:(struct _NSRange)arg5 includeListLabels:(char)arg6;
+ (char)p_shouldDisableTextMorphingBetweenOutgoingRep:(NSObject *)arg0 outgoingChunkRange:(struct _NSRange)arg1 incomingRep:(NSObject *)arg2 incomingChunkRange:(struct _NSRange)arg3;
+ (unsigned int)p_longestChunkInOutgoingObjects:(NSArray *)arg0 incomingObjects:(NSArray *)arg1 textDeliveryType:(int)arg2 addOutgoingChunksToArray:(NSArray *)arg3 addIncomingChunksToArray:(NSArray *)arg4;
+ (TSWPShapeRep *)p_potentialMatchesWithChunkLength:(unsigned int)arg0 outgoingTextChunks:(id)arg1 incomingTextChunks:(id)arg2 textureContext:(TSDTextureContext *)arg3 textDeliveryType:(int)arg4;
+ (TSWPShapeRep *)magicMoveAnimationMatchesFromMatches:(id)arg0;
+ (NSArray *)magicMoveTextMatchesBetweenOutgoingObjects:(NSArray *)arg0 andIncomingObjects:(NSArray *)arg1 textureContext:(TSDTextureContext *)arg2 textDeliveryType:(int)arg3 repToOpacityTextRangeDictMap:(NSObject *)arg4;

- (TSWPShapeRep *)initWithLayout:(TSDLayout *)arg0 canvas:(TSDCanvas *)arg1;
- (NSString *)textureForContext:(NSObject *)arg0;
- (NSObject *)hitRep:(struct CGPoint)arg0;
- (id)childReps;
- (void)addAdditionalChildLayersToArray:(NSArray *)arg0;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg0;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg0 withObject:(NSObject *)arg1;
- (void)recursivelyPerformSelector:(SEL)arg0;
- (void)recursivelyPerformSelector:(SEL)arg0 withObject:(NSObject *)arg1;
- (id)hitReps:(struct CGPoint)arg0 withSlop:(struct CGSize)arg1;
- (void)updateChildrenFromLayout;
- (TSWPRep *)containedRep;
- (TSWPStorage *)textStorageForTexture;
- (char)p_hasContentForRange:(struct _NSRange)arg0 labelOnly:(char)arg1;
- (int)stageIndexForStorageRange:(struct _NSRange)arg0;
- (NSObject *)newTextureRenderableForRange:(struct _NSRange)arg0 includeListLabel:(char)arg1 isMagicMove:(char)arg2 desiredContentRect:(struct CGRect)arg3 includeGroupedShadow:(struct CGSize)arg4 groupedShadowOnly:(id)arg5;
- (float)p_textureSetOpacity;
- (void)p_getBoundsRect:(struct CGRect *)arg0 contentRect:(struct CGSize)arg1 transform:(NSObject *)arg2 applyReflection:(struct CGRect *)arg3 applyShadow:(struct CGSize)arg4 forRange:(char)arg5 includeListLabel:(struct CGAffineTransform *)arg6 isMagicMove:(char *)arg7;
- (id)stageChunks;
- (struct CGRect)p_rectForRubyFields:(NSArray *)arg0;
- (void)p_drawRubyInContext:(struct CGContext *)arg0 forRange:(struct _NSRange)arg1;
- (char)isShapeInvisible;
- (void)dealloc;
- (void).cxx_construct;
- (NSObject<TSDContainerInfo> *)containerInfo;

@end
