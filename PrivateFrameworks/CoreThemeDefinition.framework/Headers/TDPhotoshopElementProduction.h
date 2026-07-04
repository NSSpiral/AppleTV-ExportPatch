/* Runtime dump - TDPhotoshopElementProduction
 * Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface TDPhotoshopElementProduction : TDElementProduction <TDElementAttributes>
{
    NSMutableAttributedString * log;
    CUIPSDImageRef * psdImageRef;
    NSDate * _cachedImageDate;
    CUIImage * _edgeMetricsMask;
    CUIImage * _textMetricsMask;
    CUIImage * _baselineMetricsMask;
    char _didCheckForMetricsMasks;
}

@property (retain, nonatomic) TDPhotoshopAsset * asset;

+ (unsigned int)sliceRowsPerRendition:(int)arg0;
+ (unsigned int)sliceColumnsPerRendition:(int)arg0;

- (void)dealloc;
- (char)isActive;
- (void)setIsActive:(char)arg0;
- (NSMutableAttributedString *)log;
- (NSNumber *)columnCount;
- (void)setColumnCount:(NSObject *)arg0;
- (void)setRowCount:(unsigned int)arg0;
- (void)copyAttributesInto:(id)arg0;
- (NSDictionary *)copyDataFromAttributes;
- (void)setAttributesFromCopyData:(NSData *)arg0;
- (void)addDrawingLayerIndex:(NSObject *)arg0 themeLayer:(id)arg1 toIndices:(id)arg2 layers:(TSCHMultiDataChartRepMultiDataBuildAnimatedLayers *)arg3 lowestIndex:(int *)arg4;
- (NSObject *)psdImageRefWithDocument:(NSObject *)arg0;
- (void)_loadMetricsMasksWithDocument:(NSObject *)arg0;
- (void)appendToLog:(id)arg0;
- (void)getDrawingLayerIndices:(id *)arg0 themeLayers:(id *)arg1 lowestIndex:(int *)arg2;
- (void)fillIterationKeyAttribute:(NSObject *)arg0 iteration:(int)arg1 rowOrColumn:(int)arg2 document:(NSObject *)arg3;
- (TDRenditionKeySpec *)baseKeySpec;
- (NSData *)dataFromAttributes;
- (void)setAttributesFromData:(NSData *)arg0;
- (CALayer *)_layerMappingForPhotoshopLayer:(int)arg0 drawingLayer:(int)arg1;
- (NSObject *)columnIterationType;
- (NSObject *)rowIterationType;
- (void)setColumnIterationType:(NSObject *)arg0;
- (void)setRowIterationType:(NSObject *)arg0;
- (NSObject *)associatedFileURLWithDocument:(NSObject *)arg0;
- (NSObject *)edgeMetricsMaskWithDocument:(NSObject *)arg0;
- (NSObject *)textMetricsMaskWithDocument:(NSObject *)arg0;
- (NSObject *)baselineMetricsMaskWithDocument:(NSObject *)arg0;
- (char)generateRenditionsWithEntityName:(NSString *)arg0 document:(NSObject *)arg1 errorDescription:(id *)arg2;
- (void)deleteRenditionsInDocument:(NSObject *)arg0 shouldDeleteAssetFiles:(char)arg1;
- (NSString *)relativePath;
- (NSNumber *)rowCount;

@end
