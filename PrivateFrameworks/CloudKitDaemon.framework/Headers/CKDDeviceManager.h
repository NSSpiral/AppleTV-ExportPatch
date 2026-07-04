/* Runtime dump - CKDDeviceManager
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDDeviceManager : NSObject
{
    NSString * _deviceIdentifier;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _requests;
    NSMutableDictionary * _callbackGroups;
    NSMutableDictionary * _deviceIDs;
}

@property (readonly, nonatomic) NSString * deviceIdentifier;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * queue;
@property (retain, nonatomic) NSMutableDictionary * requests;
@property (retain, nonatomic) NSMutableDictionary * callbackGroups;
@property (retain, nonatomic) NSMutableDictionary * deviceIDs;

+ (CKDDeviceManager *)sharedManager;

- (CKDDeviceManager *)init;
- (void).cxx_destruct;
- (NSObject<OS_dispatch_queue> *)queue;
- (void)setQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (NSString *)deviceIdentifier;
- (void)fetchDeviceIdentifierForContext:(NSObject *)arg0 withCompletionHandler:(id /* block */)arg1;
- (NSMutableDictionary *)requests;
- (void)setRequests:(NSMutableDictionary *)arg0;
- (NSString *)_serviceForContext:(NSObject *)arg0;
- (NSString *)_lookupKeyForContext:(NSObject *)arg0;
- (NSMutableDictionary *)deviceIDs;
- (NSString *)_savedDeviceIdentifierForContext:(NSObject *)arg0;
- (void)_saveDeviceIdentifier:(NSString *)arg0 forContext:(NSObject *)arg1;
- (NSMutableDictionary *)callbackGroups;
- (void)setCallbackGroups:(NSMutableDictionary *)arg0;
- (void)setDeviceIDs:(NSMutableDictionary *)arg0;

@end
