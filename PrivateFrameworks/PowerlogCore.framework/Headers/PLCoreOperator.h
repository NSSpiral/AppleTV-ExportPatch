/* Runtime dump - PLCoreOperator
 * Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLCoreOperator : NSObject
{
    NSMutableDictionary * _operators;
}

@property (retain) NSMutableDictionary * operators;

+ (NSObject *)registeredOperatorsOfSuperClassType:(Class)arg0;
+ (void)registerOperator:(Class)arg0;
+ (PLCoreOperator *)registeredOperators;

- (void)dealloc;
- (PLCoreOperator *)init;
- (void)log;
- (void).cxx_destruct;
- (NSMutableDictionary *)operators;
- (void)startOperatorsOfSuperClassType:(Class)arg0;
- (void)setOperators:(NSMutableDictionary *)arg0;
- (void)initOperatorDependancies;

@end
