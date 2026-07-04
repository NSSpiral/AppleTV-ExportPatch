/* Runtime dump - TSCHMultiDataChartRepElement
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHMultiDataChartRepElement : NSObject
{
    CALayer<TSCHMultiDataElementShapeLayer> * mElementLayer;
    TSCHMultiDataAnimatingFrameLayer * mLabelLayer;
    char mElementUndefined;
}

@property (readonly, nonatomic) CALayer<TSCHMultiDataElementShapeLayer> * elementLayer;
@property (readonly, nonatomic) TSCHMultiDataAnimatingFrameLayer * labelLayer;
@property (nonatomic) char elementUndefined;

+ (CALayer *)elementWithElementLayer:(CALayer<TSCHMultiDataElementShapeLayer> *)arg0;

- (char)elementUndefined;
- (void)setElementUndefined:(char)arg0;
- (TSCHMultiDataChartRepElement *)initWithElementLayer:(CALayer<TSCHMultiDataElementShapeLayer> *)arg0;
- (void)addAnimationForKey:(NSString *)arg0 values:(NSArray *)arg1 keyTimes:(NSArray *)arg2 toAnimationInfo:(NSDictionary *)arg3;
- (CALayer<TSCHMultiDataElementShapeLayer> *)elementLayer;
- (void)dealloc;
- (void)setDelegate:(NSObject *)arg0;
- (TSCHMultiDataChartRepElement *)init;
- (NSObject *)delegate;
- (void)setContentsScale:(float)arg0;
- (void)setOpacity:(float)arg0;
- (TSCHMultiDataChartRepElement *)initWithLayer:(CALayer *)arg0;
- (TSCHMultiDataAnimatingFrameLayer *)labelLayer;

@end
