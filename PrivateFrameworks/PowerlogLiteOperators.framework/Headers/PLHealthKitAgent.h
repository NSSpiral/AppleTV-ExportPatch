/* Runtime dump - PLHealthKitAgent
 * Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLHealthKitAgent : PLAgent
{
    PLXPCListenerOperatorComposition * _queryHandler;
}

@property (retain) PLXPCListenerOperatorComposition * queryHandler;

+ (void)load;
+ (NSArray *)entryEventPointDefinitions;

- (void).cxx_destruct;
- (void)initOperatorDependancies;
- (PLXPCListenerOperatorComposition *)queryHandler;
- (void)setQueryHandler:(PLXPCListenerOperatorComposition *)arg0;

@end
