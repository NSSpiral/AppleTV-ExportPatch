/* Runtime dump - CoreRCManager
 * Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@interface CoreRCManager : NSObject
{
    <CoreRCManagerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _serialQueue;
    NSMutableSet * _busesInternal;
}

@property (readonly, nonatomic) NSSet * buses;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * serialQueue;
@property (readonly, nonatomic) NSMutableSet * busesInternal;

+ (CoreRCManager *)allocWithZone:(struct _NSZone *)arg0;

- (void)dealloc;
- (void)setDelegate:(<CoreRCManagerDelegate> *)arg0;
- (CoreRCManager *)init;
- (<CoreRCManagerDelegate> *)delegate;
- (CoreRCManager *)initWithSerialQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (NSObject<OS_dispatch_queue> *)serialQueue;
- (id)managedBusEquivalentTo:(id)arg0;
- (id)managedDeviceEquivalentTo:(id)arg0;
- (void)addBus:(id)arg0;
- (void)removeBus:(id)arg0;
- (char)setProperty:(NSString *)arg0 forKey:(NSString *)arg1 ofBus:(CoreRCBus *)arg2 error:(id *)arg3;
- (NSString *)propertyForKey:(NSString *)arg0 ofBus:(CoreRCBus *)arg1 error:(id *)arg2;
- (NSObject *)managedBusForDevice:(NSObject *)arg0;
- (char)sendHIDEvent:(NSObject *)arg0 fromDevice:(NSObject *)arg1 toDevice:(NSObject *)arg2 error:(id *)arg3;
- (NSMutableSet *)busesInternal;
- (void)notifyDelegateAddBus:(id)arg0;
- (void)notifyDelegateRemoveBus:(id)arg0;
- (NSSet *)buses;
- (void)notifyDelegateUpdateBus:(id)arg0;

@end
