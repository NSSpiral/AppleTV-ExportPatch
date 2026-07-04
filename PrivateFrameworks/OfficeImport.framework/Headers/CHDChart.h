/* Runtime dump - CHDChart
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHDChart : OADGraphic <OADDrawableContainer>
{
    EDSheet * mSheet;
    int mStyleId;
    BOOL mAutoTitleDeleted;
    BOOL mPlotVisibleCellsOnly;
    BOOL mMSGraph;
    BOOL mHasSharedXValues;
    BOOL mDirectionChanged;
    BOOL mHasVisibleSeriesNames;
    int mDisplayBlankCellsAs;
    CHDPlotArea * mPlotArea;
    CHDView3D * mView3D;
    CHDTitle * mTitle;
    CHDLegend * mLegend;
    EDWorkbook * mExternalData;
    OADGraphicProperties * mChartAreaGraphicProperties;
    OADGraphicProperties * mBackWallGraphicProperties;
    OADGraphicProperties * mSideWallGraphicProperties;
    OADGraphicProperties * mFloorGraphicProperties;
    CHDDefaultTextProperties * mDefaultTextProperties;
    int mChartDirection;
    struct CGRect mLogicalBounds;
    NSMutableArray * mDrawables;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (CHDChart *)binaryEffects:(char)arg0;

- (NSData *)externalData;
- (void)setExternalData:(NSData *)arg0;
- (BOOL)isBinary;
- (void)dealloc;
- (CHDChart *)init;
- (void)setTitle:(NSString *)arg0;
- (NSString *)title;
- (void)setDirection:(int)arg0;
- (int)direction;
- (void).cxx_construct;
- (void)addChildren:(NSArray *)arg0;
- (void)addChild:(OADDrawable *)arg0;
- (OADStyleMatrix *)styleMatrix;
- (unsigned int)childCount;
- (struct CGRect)logicalBounds;
- (OADDrawable *)childAtIndex:(unsigned int)arg0;
- (EDWorkbook *)workbook;
- (NSObject *)mainType;
- (CHXPlotArea *)plotArea;
- (NSDictionary *)chartAreaGraphicProperties;
- (TSCHLegendModel *)legend;
- (void)setLogicalBounds:(struct CGRect)arg0;
- (void)replaceChild:(OADDrawable *)arg0 with:(OADDrawable *)arg1;
- (void)setParentTextListStyle:(NSObject *)arg0;
- (void)setSideWallGraphicProperties:(NSDictionary *)arg0;
- (void)setBackWallGraphicProperties:(NSDictionary *)arg0;
- (void)setFloorGraphicProperties:(NSDictionary *)arg0;
- (void)setMSGraph:(BOOL)arg0;
- (void)setLegend:(TSCHLegendModel *)arg0;
- (void)setView3D:(id)arg0;
- (void)setSheet:(NSObject *)arg0;
- (void)setStyleId:(int)arg0;
- (unsigned int)defaultFontIndex;
- (int)defaultLabelPosition;
- (UIFont *)defaultThemeFont;
- (UIFont *)defaultTextFont;
- (BOOL)isAutoTitleDeleted;
- (BOOL)isPlotVisibleCellsOnly;
- (int)displayBlankAs;
- (NSDictionary *)backWallGraphicProperties;
- (NSDictionary *)sideWallGraphicProperties;
- (NSDictionary *)floorGraphicProperties;
- (UIFont *)defaultDataLabelFont;
- (UIFont *)defaultSeriesTitleFont;
- (NSArray *)defaultFontWithResources:(NSArray *)arg0;
- (BOOL)isScatterOrBubble;
- (BOOL)hasSharedXValues;
- (void)setHasSharedXValues:(BOOL)arg0;
- (unsigned int)seriesCount;
- (id)processors;
- (NSString *)defaultContentFormat;
- (BOOL)isMSGraph;
- (BOOL)is3D;
- (unsigned int)categoryCount;
- (void)setVisibleSeriesNames:(BOOL)arg0;
- (void)setDirectionChanged:(BOOL)arg0;
- (BOOL)hasVisibleSeriesNames;
- (int)styleId;
- (BOOL)isPie;
- (BOOL)isDirectionChanged;
- (void)setChartAreaGraphicProperties:(NSDictionary *)arg0;
- (void)setPlotArea:(CHXPlotArea *)arg0;
- (void)setAutoTitleDeleted:(BOOL)arg0;
- (void)setPlotVisibleCellsOnly:(BOOL)arg0;
- (void)setDisplayBlankAs:(int)arg0;
- (NSDictionary *)defaultTextProperties;
- (void)setDefaultTextProperties:(NSDictionary *)arg0;
- (id)view3D;
- (NSArray *)children;
- (TNSheet *)sheet;

@end
