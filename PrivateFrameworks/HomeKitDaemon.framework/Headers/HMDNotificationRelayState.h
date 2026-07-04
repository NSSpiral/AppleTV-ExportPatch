/* Runtime dump - HMDNotificationRelayState
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDNotificationRelayState : NSObject
{
    NSString * _destination;
    NSObject<OS_dispatch_queue> * _responseQueue;
    id _responseHandler;
    NSDictionary * _response;
    NSError * _responseError;
}

@property (retain, nonatomic) NSString * destination;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * responseQueue;
@property (copy, nonatomic) id responseHandler;
@property (retain, nonatomic) NSDictionary * response;
@property (retain, nonatomic) NSError * responseError;

- (NSDictionary *)response;
- (NSString *)destination;
- (void)setDestination:(NSString *)arg0;
- (void).cxx_destruct;
- (void)setResponse:(NSDictionary *)arg0;
- (id /* block */)responseHandler;
- (NSObject<OS_dispatch_queue> *)responseQueue;
- (HMDNotificationRelayState *)initWithDestination:(NSString *)arg0 responseQueue:(NSObject<OS_dispatch_queue> *)arg1 responseHandler:(id /* block */)arg2;
- (void)setResponseQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)setResponseHandler:(id /* block */)arg0;
- (NSError *)responseError;
- (void)setResponseError:(NSError *)arg0;

@end
