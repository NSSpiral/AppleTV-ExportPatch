/* Runtime dump - MCStateOperationExpression
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MCStateOperationExpression : MCStateOperation
{
    NSString * _expression;
}

@property (copy) NSString * expression;

+ (NSObject *)stateOperationForTargetPlugObjectID:(NSObject *)arg0 withStateKey:(NSString *)arg1 andExpression:(NSObject *)arg2;

- (NSString *)expression;
- (NSString *)description;
- (void)demolish;
- (void)_copySelfToSnapshot:(NSObject *)arg0;
- (MCStateOperationExpression *)initWithImprint:(NSDictionary *)arg0;
- (NSDictionary *)imprint;
- (void)setExpression:(NSString *)arg0;

@end
