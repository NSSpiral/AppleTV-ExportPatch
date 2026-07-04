/* Runtime dump - MPStateOperation
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MPStateOperation : MPAction
{
    NSString * _operation;
    NSString * _stateKey;
}

@property (copy, nonatomic) NSString * operation;
@property (copy, nonatomic) NSString * stateKey;

+ (MPStateOperation *)stateOperation;

- (void)dealloc;
- (MPStateOperation *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (MPStateOperation *)init;
- (NSString *)operation;
- (void)setOperation:(NSString *)arg0;
- (MPStateOperation *)copyWithZone:(struct _NSZone *)arg0;
- (void)setAction:(MCAction *)arg0;
- (void)setStateKey:(NSString *)arg0;
- (NSString *)stateKey;

@end
