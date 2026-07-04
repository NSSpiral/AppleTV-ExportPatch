/* Runtime dump - HMDResidentCommunicationHandler
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDResidentCommunicationHandler : NSObject <HAPTimerDelegate>
{
    NSString * _residentPeerAddress;
    NSObject<OS_dispatch_queue> * _workQueue;
    NSMutableArray * _pendingReadRequests;
    NSMapTable * _dispatchedReadRequests;
    HAPTimer * _multiReadCoalesceTimer;
    NSUUID * _homeUUID;
    HMDIDSMessageDispatcher * _idsDispatcher;
}

@property (readonly, nonatomic) NSString * residentPeerAddress;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * workQueue;
@property (readonly, nonatomic) NSMutableArray * pendingReadRequests;
@property (readonly, nonatomic) NSMapTable * dispatchedReadRequests;
@property (retain, nonatomic) HAPTimer * multiReadCoalesceTimer;
@property (readonly, nonatomic) NSUUID * homeUUID;
@property (readonly, weak, nonatomic) HMDIDSMessageDispatcher * idsDispatcher;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void)_clearAllGeneratedRequests:(id)arg0 error:(NSError *)arg1;
+ (void)_clearAllPendingRequests:(id)arg0 error:(NSError *)arg1;
+ (void)_processResponseForMultireadRequest:(NSURLRequest *)arg0 overallError:(NSError *)arg1 response:(NSURLResponse *)arg2;
+ (NSSet *)createResponseSubset:(NSSet *)arg0 overallError:(NSError *)arg1 readRequest:(NSURLRequest *)arg2 error:(id *)arg3;

- (void)dealloc;
- (NSString *)description;
- (void).cxx_destruct;
- (NSObject<OS_dispatch_queue> *)workQueue;
- (void)timerDidFire:(HAPTimer *)arg0;
- (NSUUID *)homeUUID;
- (NSMutableArray *)pendingReadRequests;
- (NSMapTable *)dispatchedReadRequests;
- (void)_redispatchMessage:(NSString *)arg0 target:(NSObject *)arg1 responseQueue:(NSObject<OS_dispatch_queue> *)arg2;
- (HMDIDSMessageDispatcher *)idsDispatcher;
- (NSString *)residentPeerAddress;
- (HAPTimer *)multiReadCoalesceTimer;
- (void)setMultiReadCoalesceTimer:(HAPTimer *)arg0;
- (void)_sendMultipleCharacteristicRead;
- (void)_processResponse:(NSURLResponse *)arg0 overallError:(NSError *)arg1 messageIdentifier:(NSUUID *)arg2;
- (HMDResidentCommunicationHandler *)initWithHomeUUID:(NSUUID *)arg0 residentAddress:(NSString *)arg1 idsDispatcher:(HMDIDSMessageDispatcher *)arg2;
- (void)redispatchMessage:(NSString *)arg0 target:(NSObject *)arg1 responseQueue:(NSObject<OS_dispatch_queue> *)arg2;

@end
