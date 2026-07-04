/* Runtime dump - IKJSImpression
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKJSImpression : IKJSObject <IKJSImpression>
{
    <IKJSImpression> * _parentImpression;
    NSString * _metricsData;
    NSMutableArray * _mutableTimestamps;
    NSMutableArray * _mutableChildren;
    long _indexInParent;
}

@property (weak, nonatomic) <IKJSImpression> * parentImpression;
@property (copy, nonatomic) NSString * metricsData;
@property (retain, nonatomic) NSMutableArray * mutableTimestamps;
@property (retain, nonatomic) NSMutableArray * mutableChildren;
@property (nonatomic) long indexInParent;
@property (readonly, nonatomic) NSString * data;
@property (readonly, nonatomic) NSArray * timestamps;
@property (readonly, nonatomic) NSArray * children;
@property (readonly, nonatomic) id parent;
@property (readonly, nonatomic) long index;

- (NSString *)description;
- (NSString *)data;
- (long)index;
- (void).cxx_destruct;
- (void)linkReferences;
- (IKJSImpression *)initWithAppContext:(<IKApplication> *)arg0 data:(NSString *)arg1 index:(unsigned int)arg2;
- (void)addTimestamp:(long long)arg0;
- (<IKJSImpression> *)parentImpression;
- (NSMutableArray *)mutableTimestamps;
- (NSMutableArray *)mutableChildren;
- (NSString *)metricsData;
- (long)indexInParent;
- (void)setMutableTimestamps:(NSMutableArray *)arg0;
- (void)setMutableChildren:(NSMutableArray *)arg0;
- (void)setParentImpression:(<IKJSImpression> *)arg0;
- (NSArray *)timestamps;
- (void)setMetricsData:(NSString *)arg0;
- (void)setIndexInParent:(long)arg0;
- (void)addChild:(OADDrawable *)arg0;
- (GLKShaderBlockNode *)parent;
- (NSArray *)children;

@end
