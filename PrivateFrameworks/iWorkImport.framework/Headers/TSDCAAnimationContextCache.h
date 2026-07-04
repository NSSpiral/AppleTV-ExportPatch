/* Runtime dump - TSDCAAnimationContextCache
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDCAAnimationContextCache : NSObject <TSDCAAnimationContextCacheProtocol>
{
    CAMediaTimingFunction * _timingFunction;
    NSString * _fillMode;
    double _beginTime;
    double _timeOffset;
    double _duration;
}

@property (readonly, nonatomic) CAMediaTimingFunction * timingFunction;
@property (readonly, nonatomic) double beginTime;
@property (readonly, nonatomic) double timeOffset;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) NSString * fillMode;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (TSDCAAnimationContextCache *)initWithAnimation:(NSObject *)arg0;
- (void)verifyCacheWithAnimation:(NSObject *)arg0;
- (double)duration;
- (double)beginTime;
- (double)timeOffset;
- (CAMediaTimingFunction *)timingFunction;
- (NSString *)fillMode;

@end
