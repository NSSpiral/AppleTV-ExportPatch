/* Runtime dump - PLXPCResponderOperatorComposition
 * Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLXPCResponderOperatorComposition : NSObject
{
    NSDictionary * _registration;
    id _operatorBlock;
    PLOperator * _operator;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) NSDictionary * registration;
@property (copy, nonatomic) id operatorBlock;
@property (weak) PLOperator * operator;
@property (retain) NSObject<OS_dispatch_queue> * workQueue;

- (NSString *)description;
- (void).cxx_destruct;
- (NSObject<OS_dispatch_queue> *)workQueue;
- (void)setWorkQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (PLOperator *)operator;
- (id /* block */)operatorBlock;
- (void)setOperatorBlock:(id /* block */)arg0;
- (NSDictionary *)registration;
- (PLXPCResponderOperatorComposition *)initWithOperator:(PLOperator *)arg0 withRegistration:(NSDictionary *)arg1 withBlock:(id /* block */)arg2;
- (void)setOperator:(PLOperator *)arg0;
- (PLXPCResponderOperatorComposition *)initWithWorkQueue:(NSObject<OS_dispatch_queue> *)arg0 withRegistration:(NSDictionary *)arg1 withBlock:(id /* block */)arg2;
- (NSObject *)respondToRequestForClientID:(short)arg0 withProcessName:(NSString *)arg1 withKey:(NSString *)arg2 withPayload:(NSData *)arg3;

@end
