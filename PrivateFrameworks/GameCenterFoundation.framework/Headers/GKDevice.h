/* Runtime dump - GKDevice
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKDevice : NSObject
{
    NSString * _udid;
    NSString * _deviceName;
    NSString * _osVersion;
    NSString * _buildVersion;
    NSString * _gameKitVersion;
    GKEventEmitter<GKLockStatusObserver> * _emitter;
}

@property (readonly, nonatomic) NSString * udid;
@property (readonly, nonatomic) NSString * deviceName;
@property (readonly, nonatomic) NSString * osVersion;
@property (readonly, nonatomic) NSString * buildVersion;
@property (readonly, nonatomic) NSString * gameKitVersion;
@property (retain, nonatomic) GKEventEmitter<GKLockStatusObserver> * emitter;

+ (GKDevice *)currentDevice;

- (void)dealloc;
- (GKDevice *)init;
- (NSString *)buildVersion;
- (NSString *)deviceName;
- (void)_initPlatform;
- (void)setEmitter:(GKEventEmitter<GKLockStatusObserver> *)arg0;
- (void)beginObservingKeyBagStatusWithCallback:(/* block */ id *)arg0;
- (id)_platformUDID;
- (void)stopObservingKeyBagStatus;
- (NSString *)userAgentWithProcessName:(NSString *)arg0 protocolVersion:(NSString *)arg1;
- (NSString *)processNameHeader;
- (NSString *)gameKitVersion;
- (id)storeUserAgent;
- (NSString *)protocolVersionHeader;
- (NSString *)buildVersionHeader;
- (void)addLockStatusObserver:(NSObject *)arg0;
- (void)removeLockStatusObserver:(NSObject *)arg0;
- (GKEventEmitter<GKLockStatusObserver> *)emitter;
- (char)isDevelopmentDevice;
- (NSString *)userAgent;
- (NSString *)osVersion;
- (NSString *)udid;

@end
