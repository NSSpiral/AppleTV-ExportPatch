/* Runtime dump - PLIOKitOperatorComposition
 * Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLIOKitOperatorComposition : NSObject
{
    struct IONotificationPort * _ioNotifyPort;
    unsigned int _notificationRef;
    unsigned int _service;
    NSString * _serviceName;
    id _operatorBlock;
    PLOperator * _operator;
}

@property struct IONotificationPort * ioNotifyPort;
@property unsigned int notificationRef;
@property unsigned int service;
@property (retain) NSString * serviceName;
@property (copy, nonatomic) id operatorBlock;
@property (retain) PLOperator * operator;

+ (PLIOKitOperatorComposition *)snapshotFromIOEntry:(unsigned int)arg0 forKey:(NSString *)arg1;
+ (PLIOKitOperatorComposition *)snapshotFromIOEntry:(unsigned int)arg0;

- (void)dealloc;
- (void).cxx_destruct;
- (NSDictionary *)properties;
- (void)setServiceName:(NSString *)arg0;
- (void)setService:(unsigned int)arg0;
- (unsigned int)service;
- (NSString *)serviceName;
- (PLOperator *)operator;
- (id /* block */)operatorBlock;
- (void)setOperatorBlock:(id /* block */)arg0;
- (struct IONotificationPort *)ioNotifyPort;
- (id)propertiesFromIOEntry:(unsigned int)arg0 forKey:(NSString *)arg1;
- (id)propertiesFromIOEntry:(unsigned int)arg0;
- (void)setIoNotifyPort:(struct IONotificationPort *)arg0;
- (unsigned int)notificationRef;
- (void)setNotificationRef:(unsigned int)arg0;
- (PLIOKitOperatorComposition *)initWithOperator:(PLOperator *)arg0 forService:(struct __SCNetworkService *)arg1 withBlock:(id /* block */)arg2;
- (PLIOKitOperatorComposition *)initWithOperator:(PLOperator *)arg0 forService:(struct __SCNetworkService *)arg1;
- (NSString *)propertiesForKey:(NSString *)arg0;
- (void)setOperator:(PLOperator *)arg0;

@end
