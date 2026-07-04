/* Runtime dump - TSDCAKeyframeAnimationContextCache
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDCAKeyframeAnimationContextCache : TSDCAPropertyAnimationContextCache
{
    char _isObjectTypeCGColor;
    NSArray * _values;
    NSArray * _keyTimes;
    NSArray * _timingFunctions;
}

@property (readonly, nonatomic) NSArray * values;
@property (readonly, nonatomic) NSArray * keyTimes;
@property (readonly, nonatomic) NSArray * timingFunctions;
@property (readonly, nonatomic) char isObjectTypeCGColor;

- (TSDCAKeyframeAnimationContextCache *)initWithAnimation:(NSObject *)arg0;
- (void)verifyCacheWithAnimation:(NSObject *)arg0;
- (char)isObjectTypeCGColor;
- (NSArray *)values;
- (NSArray *)keyTimes;
- (NSArray *)timingFunctions;

@end
