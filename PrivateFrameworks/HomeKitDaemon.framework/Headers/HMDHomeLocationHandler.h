/* Runtime dump - HMDHomeLocationHandler
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDHomeLocationHandler : NSObject <HMDLocationDelegate, HMMessageReceiver, NSSecureCoding>
{
    CLLocation * _location;
    NSObject<OS_dispatch_queue> * _workQueue;
    HMMessageDispatcher * _msgDispatcher;
    HMDHome * _home;
    NSDate * _locationUpdateTimestamp;
    int _locationAuthorization;
}

@property (retain, nonatomic) CLLocation * location;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * workQueue;
@property (retain, nonatomic) HMMessageDispatcher * msgDispatcher;
@property (weak, nonatomic) HMDHome * home;
@property (retain, nonatomic) NSDate * locationUpdateTimestamp;
@property (nonatomic) int locationAuthorization;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) NSUUID * messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * messageReceiveQueue;

+ (char)supportsSecureCoding;
+ (char)mergeLocationDataForLocalHome:(id)arg0 withCloudHome:(id)arg1;

- (void)dealloc;
- (HMDHomeLocationHandler *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (HMDHomeLocationHandler *)init;
- (NSString *)description;
- (CLLocation *)location;
- (void).cxx_destruct;
- (NSObject<OS_dispatch_queue> *)workQueue;
- (void)setWorkQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (HMMessageDispatcher *)msgDispatcher;
- (HMDHome *)home;
- (void)setHome:(HMDHome *)arg0;
- (void)setMsgDispatcher:(HMMessageDispatcher *)arg0;
- (void)_registerForMessages;
- (NSUUID *)messageTargetUUID;
- (NSObject<OS_dispatch_queue> *)messageReceiveQueue;
- (void)configure:(id)arg0 queue:(NSObject *)arg1 messageDispatcher:(HMDIDSMessageDispatcher *)arg2;
- (void)accessoryAdded;
- (void)accessoriesReachabilityStateChanged;
- (void)extractHomeLocation:(NSObject *)arg0;
- (void)_handleLocationAuthorization:(int)arg0;
- (void)_handleLocationAuthorizationMessage:(NSString *)arg0;
- (void)didDetermineLocation:(CLLocation *)arg0;
- (NSDate *)locationUpdateTimestamp;
- (void)setLocationUpdateTimestamp:(NSDate *)arg0;
- (void)_handleRetrieveLocation:(NSObject *)arg0;
- (int)locationAuthorization;
- (void)setLocationAuthorization:(int)arg0;
- (void)_evaluateLocationExtraction;
- (char)_canExtractLocation;
- (char)_needToExtractLocation;
- (void)_setNewlocation:(id)arg0;
- (void)_saveToLocalstoreWithLocalChange:(char)arg0;
- (void)_sendLocationUpdate;
- (void)_updateLocation:(NSObject *)arg0;
- (void)setLocation:(CLLocation *)arg0;

@end
