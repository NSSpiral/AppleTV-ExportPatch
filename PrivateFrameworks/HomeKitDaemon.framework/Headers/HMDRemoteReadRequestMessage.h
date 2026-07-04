/* Runtime dump - HMDRemoteReadRequestMessage
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDRemoteReadRequestMessage : NSObject
{
    HMMessage * _readMessage;
    NSUUID * _accessoryUUID;
    NSObject<OS_dispatch_queue> * _responseQueue;
}

@property (readonly, nonatomic) HMMessage * readMessage;
@property (readonly, nonatomic) NSUUID * accessoryUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * responseQueue;

- (NSString *)description;
- (NSString *)debugDescription;
- (void).cxx_destruct;
- (HMMessage *)readMessage;
- (NSUUID *)accessoryUUID;
- (HMDRemoteReadRequestMessage *)initWithReadMessage:(HMMessage *)arg0 accessoryUUID:(NSUUID *)arg1 responseQueue:(NSObject<OS_dispatch_queue> *)arg2;
- (NSObject<OS_dispatch_queue> *)responseQueue;

@end
