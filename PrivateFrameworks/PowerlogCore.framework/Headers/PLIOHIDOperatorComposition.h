/* Runtime dump - PLIOHIDOperatorComposition
 * Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLIOHIDOperatorComposition : NSObject
{
    struct __IOHIDEventSystemClient * _eventSystemClient;
    NSArray * _serviceClients;
    NSString * _serviceName;
    id _operatorBlock;
    PLOperator * _operator;
}

@property struct __IOHIDEventSystemClient * eventSystemClient;
@property (retain) NSArray * serviceClients;
@property (retain) NSString * serviceName;
@property (copy, nonatomic) id operatorBlock;
@property (retain) PLOperator * operator;

- (void)dealloc;
- (double)doubleForKey:(NSString *)arg0;
- (void).cxx_destruct;
- (NSString *)dictionaryForKey:(NSString *)arg0;
- (struct __IOHIDEventSystemClient *)eventSystemClient;
- (void)setServiceName:(NSString *)arg0;
- (NSString *)serviceName;
- (PLOperator *)operator;
- (NSArray *)serviceClients;
- (void)setEventSystemClient:(struct __IOHIDEventSystemClient *)arg0;
- (void)setServiceClients:(NSArray *)arg0;
- (id /* block */)operatorBlock;
- (void)setOperatorBlock:(id /* block */)arg0;
- (PLIOHIDOperatorComposition *)initWithOperator:(PLOperator *)arg0 forService:(struct __SCNetworkService *)arg1 withBlock:(id /* block */)arg2;
- (PLIOHIDOperatorComposition *)initWithOperator:(PLOperator *)arg0 forService:(struct __SCNetworkService *)arg1;
- (void)setOperator:(PLOperator *)arg0;

@end
