/* Runtime dump - IAPClientPort
 * Image: /System/Library/PrivateFrameworks/IAP.framework/IAP
 */

@interface IAPClientPort : NSObject
{
    NSString * _uuid;
    id _sendDataHandler;
    NSObject<OS_dispatch_queue> * _sendDataHandlerQueue;
    NSObject<OS_dispatch_queue> * _clientPortEventQueue;
}

@property (readonly, nonatomic) NSString * uuid;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * sendDataHandlerQueue;
@property (nonatomic) id sendDataHandler;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * clientPortEventQueue;

- (void)dealloc;
- (NSString *)uuid;
- (IAPClientPort *)initWithUUID:(NSString *)arg0 queue:(NSObject *)arg1 sendHandler:(id /* block */)arg2;
- (NSObject<OS_dispatch_queue> *)sendDataHandlerQueue;
- (id /* block */)sendDataHandler;
- (void)setSendDataHandler:(id /* block */)arg0;
- (NSObject<OS_dispatch_queue> *)clientPortEventQueue;

@end
