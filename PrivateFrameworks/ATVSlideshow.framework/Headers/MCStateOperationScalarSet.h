/* Runtime dump - MCStateOperationScalarSet
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MCStateOperationScalarSet : MCStateOperation
{
    float _scalar;
}

@property (nonatomic) float scalar;

+ (NSObject *)stateOperationForTargetPlugObjectID:(NSObject *)arg0 withStateKey:(NSString *)arg1 andScalar:(float)arg2;

- (NSString *)description;
- (void)setScalar:(float)arg0;
- (float)scalar;
- (void)_copySelfToSnapshot:(NSObject *)arg0;
- (MCStateOperationScalarSet *)initWithImprint:(NSDictionary *)arg0;
- (NSDictionary *)imprint;

@end
