/* Runtime dump - TSCHChartDrawableInfo
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartDrawableInfo : TSDDrawableInfo <TSCECalculationEngineRegistration, TSDReducableInfo, TSKCustomFormatContainingInfo, TSPCopying, TSKSearchable, TSKModel, TSSPresetSource, TSCHStyleSwapSupporting, TSDMixing, TSSStyleClient>
{
    TSCHChartInfo * mChart;
    TSPObject<TSCHMediatorProvider> * mMediatorPersistentObject;
    TSCHChunkManager * mChunkManager;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) TSCHChartInfo * chart;
@property (readonly, nonatomic) TSCHChunkManager * chunkManager;
@property (readonly, nonatomic) unsigned int multiDataSetIndex;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (char)needsObjectUUID;
+ (TSCHChartDrawableInfo *)presetKinds;
+ (void)bootstrapPresetsOfKind:(NSString *)arg0 inTheme:(TSSTheme *)arg1 alternate:(int)arg2;

- (char)aspectRatioLocked;
- (TSCHChartDrawableInfo *)initFromUnarchiver:(NSObject *)arg0;
- (void)willModify;
- (TSPObject *)componentRootObject;
- (void)saveToArchiver:(NSObject *)arg0;
- (NSString *)copyWithContext:(NSObject *)arg0;
- (void)registerWithCalculationEngineForDocumentLoad:(id)arg0;
- (void)unregisterFromCalculationEngine:(id)arg0;
- (char)registerLast;
- (id)objectToArchiveInDependencyTracker;
- (NSString *)changeDetailsForCustomFormatListDidUpdateToCustomFormat:(NSString *)arg0;
- (void)upgradeFormatsForCustomFormatListU2_0;
- (NSArray *)referencedStyles;
- (void)replaceReferencedStylesUsingBlock:(id /* block */)arg0;
- (id)applyStyleSwapTuples:(id)arg0;
- (void)setGeometry:(TSDInfoGeometry *)arg0 omitLegendResize:(char)arg1;
- (NSString *)p_copyFor3DAs2DWithContext:(NSObject *)arg0 chartFrame:(struct CGRect)arg1 legendFrame:(struct CGSize)arg2;
- (Class)repClass;
- (id)applyStyleSwapTuple:(id)arg0;
- (NSObject *)styleOwnerFromSwapType:(int)arg0 andIndex:(unsigned int)arg1;
- (unsigned int)multiDataSetIndex;
- (NSObject *)mixedObjectWithFraction:(float)arg0 ofObject:(NSObject *)arg1;
- (int)mixingTypeWithObject:(NSObject *)arg0 context:(NSObject *)arg1;
- (char)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg0;
- (char)hasReferenceLines;
- (Class)layoutClass;
- (id)animationFilters;
- (NSObject *)p_drawableGeometry;
- (void)p_setDrawableGeometry:(NSObject *)arg0 clearObjectPlaceholderFlag:(char)arg1;
- (int)elementKind;
- (NSArray *)childInfos;
- (TSCHChunkManager *)chunkManager;
- (char)hasBackgroundLayerForPieChart;
- (TSCHChartDrawableInfo *)initFromPreUFFArchiveWithUnarchiver:(NSObject *)arg0;
- (unsigned int)textureDeliveryStyleFromDeliveryString:(NSString *)arg0;
- (NSArray *)textureDeliveryStylesLocalized:(char)arg0 animationFilter:(NSString *)arg1;
- (char)isVisibleAtBeginningOfMagicChartBuildForDeliveryStyle:(unsigned int)arg0 animationFilter:(NSString *)arg1;
- (TSCHChartDrawableInfo *)initWithContext:(NSObject *)arg0 chart:(TSCHChartInfo *)arg1;
- (TSCHChartDrawableInfo *)initWithContext:(NSObject *)arg0 chartType:(NSObject *)arg1 legendShowing:(id)arg2 chartBodyFrame:(struct CGRect)arg3 chartAreaFrame:(struct CGRect)arg4 circumscribingFrame:(NSObject *)arg5 legendFrame:(struct CGRect)arg6 stylePreset:(NSSet *)arg7 privateSeriesStyles:(NSArray *)arg8 chartNonStyle:(NSObject *)arg9 legendNonStyle:(NSObject *)arg10 valueAxisNonStyles:(id)arg11 categoryAxisNonStyles:(id)arg12 seriesNonStyles:(id)arg13 refLineNonStylesMap:(NSObject *)arg14 refLineStylesMap:(NSObject *)arg15;
- (TSCHChartDrawableInfo *)initWithContext:(NSObject *)arg0 chartType:(NSObject *)arg1 legendShowing:(id)arg2 chartBodyFrame:(struct CGRect)arg3 stylePreset:(NSSet *)arg4 privateSeriesStyles:(NSArray *)arg5 chartNonStyle:(NSObject *)arg6 legendNonStyle:(NSObject *)arg7 valueAxisNonStyles:(id)arg8 categoryAxisNonStyles:(id)arg9 seriesNonStyles:(id)arg10 refLineNonStylesMap:(NSObject *)arg11 refLineStylesMap:(NSObject *)arg12;
- (TSCHChartDrawableInfo *)initWithContext:(NSObject *)arg0 chartType:(NSObject *)arg1 legendShowing:(id)arg2 chartAreaFrame:(struct CGRect)arg3 stylePreset:(NSSet *)arg4 privateSeriesStyles:(NSArray *)arg5 chartNonStyle:(NSObject *)arg6 legendNonStyle:(NSObject *)arg7 valueAxisNonStyles:(id)arg8 categoryAxisNonStyles:(id)arg9 seriesNonStyles:(id)arg10 refLineNonStylesMap:(NSObject *)arg11 refLineStylesMap:(NSObject *)arg12;
- (TSCHChartDrawableInfo *)initWithContext:(NSObject *)arg0 chartType:(NSObject *)arg1 legendShowing:(id)arg2 circumscribingFrame:(NSObject *)arg3 stylePreset:(NSSet *)arg4 privateSeriesStyles:(NSArray *)arg5 chartNonStyle:(NSObject *)arg6 legendNonStyle:(NSObject *)arg7 valueAxisNonStyles:(id)arg8 categoryAxisNonStyles:(id)arg9 seriesNonStyles:(id)arg10 refLineNonStylesMap:(NSObject *)arg11 refLineStylesMap:(NSObject *)arg12;
- (TSCHChartDrawableInfo *)initWithContext:(NSObject *)arg0 chartType:(NSObject *)arg1 legendShowing:(id)arg2 chartAreaFrame:(struct CGRect)arg3 legendFrame:(struct CGRect)arg4 stylePreset:(NSSet *)arg5 privateSeriesStyles:(NSArray *)arg6 chartNonStyle:(NSObject *)arg7 legendNonStyle:(NSObject *)arg8 valueAxisNonStyles:(id)arg9 categoryAxisNonStyles:(id)arg10 seriesNonStyles:(id)arg11 refLineNonStylesMap:(NSObject *)arg12 refLineStylesMap:(NSObject *)arg13;
- (void)setPersistentMediator:(id)arg0;
- (void)willBeAddedToDocumentRoot:(NSObject *)arg0 dolcContext:(NSObject *)arg1;
- (void)wasAddedToDocumentRoot:(NSObject *)arg0 dolcContext:(NSObject *)arg1;
- (void)willBeRemovedFromDocumentRoot:(NSObject *)arg0;
- (void)wasRemovedFromDocumentRoot:(NSObject *)arg0;
- (id)imageDatasForReducingFileSizeWithAssociatedHints;
- (struct CGSize)targetSizeForImageData:(NSData *)arg0 associatedHint:(id)arg1;
- (TSCHChartDrawableInfo *)initWithContext:(NSObject *)arg0 chartType:(NSObject *)arg1 chartBodyFrame:(struct CGRect)arg2 stylePreset:(NSSet *)arg3 privateSeriesStyles:(NSArray *)arg4;
- (TSCHChartDrawableInfo *)initWithContext:(NSObject *)arg0 chartType:(NSObject *)arg1 chartAreaFrame:(struct CGRect)arg2 stylePreset:(NSSet *)arg3 privateSeriesStyles:(NSArray *)arg4;
- (TSCHChartDrawableInfo *)initWithContext:(NSObject *)arg0 chartType:(NSObject *)arg1 circumscribingFrame:(NSObject *)arg2 stylePreset:(NSSet *)arg3 privateSeriesStyles:(NSArray *)arg4;
- (TSCHChartDrawableInfo *)initWithContext:(NSObject *)arg0 chartType:(NSObject *)arg1 chartAreaFrame:(struct CGRect)arg2 legendFrame:(struct CGRect)arg3 stylePreset:(NSSet *)arg4 privateSeriesStyles:(NSArray *)arg5;
- (struct CGRect)visibleBoundsForPositioning;
- (void)tsaMoveToPosition:(struct CGPoint)arg0 size:(struct CGSize)arg1;
- (void)setInsertionCenterPosition:(struct CGPoint)arg0;
- (unsigned int)chunkCountForTextureDeliveryStyle:(unsigned int)arg0 animationFilter:(NSString *)arg1;
- (char)reverseChunkingIsSupported;
- (char)shouldAddMultiDataBuildWhenAddingToDocument;
- (NSObject *)localizedChunkNameForTextureDeliveryStyle:(unsigned int)arg0 animationFilter:(NSString *)arg1 chunkIndex:(unsigned int)arg2;
- (char)supportsHyperlinks;
- (char)canAspectRatioLockBeChangedByUser;
- (char)canSizeBeChangedIncrementally;
- (NSData *)commandToReplaceImageData:(NSData *)arg0 withReducedImageData:(NSData *)arg1 associatedHint:(id)arg2;
- (char)isEquivalentForSerializationRoundTrip:(id)arg0;
- (void)acceptVisitor:(NSObject *)arg0;
- (void)dealloc;
- (SCNGeometry *)geometry;
- (void)setGeometry:(TSDInfoGeometry *)arg0;
- (TSCHChartInfo *)chart;

@end
