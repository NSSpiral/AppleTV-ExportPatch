/* Runtime dump - PLXPCListenerOperatorComposition
 * Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLXPCListenerOperatorComposition : NSObject
{
    NSDictionary * _registration;
    id _operatorBlock;
    PLOperator * _operator;
}

@property (readonly) NSDictionary * registration;
@property (copy, nonatomic) id operatorBlock;
@property (weak) PLOperator * operator;

- (NSString *)description;
- (void).cxx_destruct;
- (PLOperator *)operator;
- (id /* block */)operatorBlock;
- (void)setOperatorBlock:(id /* block */)arg0;
- (NSDictionary *)registration;
- (PLXPCListenerOperatorComposition *)initWithOperator:(PLOperator *)arg0 withRegistration:(NSDictionary *)arg1 withBlock:(id /* block */)arg2;
- (void)setOperator:(PLOperator *)arg0;
- (void)messageRecievedForClientID:(short)arg0 withProcessName:(NSString *)arg1 withKey:(NSString *)arg2 withPayload:(NSData *)arg3;

@end
