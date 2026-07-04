/* Runtime dump - TSTAnimation
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTAnimation : NSObject <NSCopying>
{
    TSTLayout * mLayout;
    int mKind;
    struct TSUColumnRowRect * mCellRanges;
    unsigned int mCellRangeCount;
    unsigned int mStageCount;
    unsigned int mStage;
    char mFinal;
    char mByColumn;
    char mByRow;
    char mByCell;
    char mByContent;
    char mByCellRange;
    char mByMissingCellRange;
    char mReverse;
    char mShowsTableChrome;
    char mShowsOverlayLayers;
    char mExpandBackgroundFill;
    char mDrawsBlackAndWhite;
}

@property (readonly) unsigned int stageCount;
@property (readonly) unsigned int stage;
@property (readonly) char final;
@property char showsTableChrome;
@property char showsOverlayLayers;
@property char expandBackgroundFill;
@property char drawsBlackAndWhite;
@property (readonly) unsigned int cellRangeCount;
@property (readonly) char drawTableName;
@property (readonly) char drawTableBackground;
@property (readonly) char drawCellBackground;
@property (readonly) char drawCellContent;
@property (readonly) char clipStrokes;
@property (readonly) char drawStrokes;
@property (readonly) char enabled;

+ (unsigned int)textureDeliveryStyleFromDeliveryString:(NSString *)arg0;
+ (unsigned int)stageCountForTextureDeliveryStyle:(unsigned int)arg0 masterLayout:(TSTMasterLayout *)arg1;
+ (TSTAnimation *)textureDeliveryStylesLocalized:(char)arg0;
+ (NSObject *)newAnimationWithLayout:(NSObject *)arg0 andCellRange:(struct TSUColumnRowRect)arg1;
+ (NSObject *)newAnimationWithLayout:(NSObject *)arg0 andDeliveryStyle:(unsigned int)arg1;
+ (char)deliveryStyleSupportedForExport:(unsigned int)arg0;

- (char)isHidingContentOfCellID:(struct ?)arg0;
- (char)drawsBlackAndWhite;
- (char)drawTableName;
- (char)drawTableBackground;
- (char)drawCellBackground;
- (char)expandBackgroundFill;
- (char)drawCellContent;
- (char)drawStrokes;
- (unsigned int)cellRangeCount;
- (struct TSUColumnRowRect)cellRangeAtIndex:(NSObject *)arg0;
- (void)addCellRange:(struct TSUColumnRowRect)arg0;
- (void)setStage:(unsigned int)arg0 andFinal:(char)arg1;
- (void)clearCellRanges;
- (char)clipStrokes;
- (unsigned int)stageCount;
- (char)showsTableChrome;
- (void)setShowsTableChrome:(char)arg0;
- (char)showsOverlayLayers;
- (void)setShowsOverlayLayers:(char)arg0;
- (void)setExpandBackgroundFill:(char)arg0;
- (void)setDrawsBlackAndWhite:(char)arg0;
- (void)dealloc;
- (TSTAnimation *)copyWithZone:(struct _NSZone *)arg0;
- (char)enabled;
- (unsigned int)stage;
- (char)final;

@end
