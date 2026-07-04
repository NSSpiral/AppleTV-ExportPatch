/* Runtime dump - TSCHMultiDataChartRepMultiDataBuildAnimatedLayers
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHMultiDataChartRepMultiDataBuildAnimatedLayers : NSObject
{
    CALayer * legendLayer;
    CALayer * backgroundLayer;
    CALayer * dataSetNameLayer;
    NSArray * elementLayers;
    NSArray * referenceLineLayers;
}

@property (retain, nonatomic) CALayer * legendLayer;
@property (retain, nonatomic) CALayer * backgroundLayer;
@property (copy, nonatomic) NSArray * referenceLineLayers;
@property (retain, nonatomic) CALayer * dataSetNameLayer;
@property (copy, nonatomic) NSArray * elementLayers;

+ (TSCHMultiDataChartRepMultiDataBuildAnimatedLayers *)animatedLayers;

- (CALayer *)backgroundLayer;
- (CALayer *)legendLayer;
- (NSArray *)elementLayers;
- (CALayer *)dataSetNameLayer;
- (NSArray *)referenceLineLayers;
- (id)allBackgroundFadingLayers;
- (id)elementFadingLayers;
- (id)layersRequiringGeometryTransformsBackgroundOnly:(char)arg0;
- (NSString *)layersAlreadyHaveProperTransforms;
- (void)setLegendLayer:(CALayer *)arg0;
- (void)setBackgroundLayer:(CALayer *)arg0;
- (void)setDataSetNameLayer:(CALayer *)arg0;
- (void)setElementLayers:(NSArray *)arg0;
- (void)setReferenceLineLayers:(NSArray *)arg0;
- (void)dealloc;

@end
