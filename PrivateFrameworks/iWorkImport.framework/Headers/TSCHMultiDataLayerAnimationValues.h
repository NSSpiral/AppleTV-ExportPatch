/* Runtime dump - TSCHMultiDataLayerAnimationValues
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHMultiDataLayerAnimationValues : NSObject
{
    CALayer * mLayer;
    NSString * mKey;
    NSArray * mValues;
    NSArray * mKeyTimes;
    char mNeedPresentationLayerValues;
}

@property (readonly, nonatomic) CALayer * layer;
@property (readonly, nonatomic) NSString * key;
@property (readonly, nonatomic) NSArray * values;
@property (readonly, nonatomic) NSArray * keyTimes;
@property (readonly, nonatomic) char needPresentationLayerValues;

+ (CALayer *)animationValuesWithLayer:(CALayer *)arg0 key:(NSString *)arg1 values:(NSArray *)arg2 keyTimes:(NSArray *)arg3 needPresentationLayerValues:(char)arg4;
+ (CALayer *)animationValuesWithLayer:(CALayer *)arg0 key:(NSString *)arg1 values:(NSArray *)arg2 keyTimes:(NSArray *)arg3;
+ (CALayer *)animationValuesWithLayer:(CALayer *)arg0 key:(NSString *)arg1 values:(NSArray *)arg2;

- (TSCHMultiDataLayerAnimationValues *)initWithLayer:(CALayer *)arg0 key:(NSString *)arg1 values:(NSArray *)arg2 keyTimes:(NSArray *)arg3 needPresentationLayerValues:(char)arg4;
- (char)needPresentationLayerValues;
- (void)dealloc;
- (CALayer *)layer;
- (NSString *)description;
- (NSString *)key;
- (NSArray *)values;
- (NSArray *)keyTimes;

@end
