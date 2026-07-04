/* Runtime dump - CDSession
 * Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface CDSession : NSObject
{
    CDDClientConnection * _cddClientConnection;
    NSSet * _deviceList;
    NSMutableDictionary * _cachedAttributes;
    NSMutableDictionary * _cachedBudgets;
    NSObject<OS_dispatch_queue> * _cacheSerializerQ;
    unsigned long long _clientId;
    char _verbose;
    char _enabledCaching;
    int _deviceChangeToken;
    id _deviceHandler;
    char _unlocked;
}

@property (readonly) CDDClientConnection * cddClientConnection;
@property unsigned long long clientId;
@property char unlocked;
@property (retain) NSSet * deviceList;
@property (retain) NSMutableDictionary * cachedAttributes;
@property (retain) NSMutableDictionary * cachedBudgets;
@property (retain) NSObject<OS_dispatch_queue> * cacheSerializerQ;
@property char verbose;
@property char enabledCaching;
@property int deviceChangeToken;
@property (copy) id deviceHandler;

+ (CDSession *)sharedSessionWithClientId:(unsigned long long)arg0;

- (NSArray *)attributeNames;
- (void)dealloc;
- (CDSession *)init;
- (void).cxx_destruct;
- (void)setCachedAttributes:(NSMutableDictionary *)arg0;
- (NSMutableDictionary *)cachedAttributes;
- (CDSession *)initWithClientId:(unsigned long long)arg0;
- (char)deleteClientDataWithError:(id *)arg0;
- (NSString *)registerAttributeWithName:(NSString *)arg0 type:(int)arg1 dataProtectionClass:(NSObject *)arg2 error:(id *)arg3;
- (NSString *)budgetForName:(NSString *)arg0 type:(int)arg1 error:(id *)arg2;
- (NSObject *)representationStringFromAttribute:(NSObject *)arg0 value:(NSObject *)arg1 error:(id *)arg2;
- (CDDClientConnection *)cddClientConnection;
- (CDSession *)initWithClientId:(unsigned long long)arg0 enableCaching:(char)arg1;
- (char)loadDylibs;
- (char)isClassCLocked;
- (void)setUnlocked:(char)arg0;
- (NSObject<OS_dispatch_queue> *)cacheSerializerQ;
- (NSString *)attributeForName:(NSString *)arg0 type:(int)arg1 clientId:(unsigned long long)arg2 error:(id *)arg3;
- (NSMutableDictionary *)cachedBudgets;
- (NSDictionary *)attributeComponentsFromRepresentation:(NSDictionary *)arg0 error:(id *)arg1;
- (id)getDevicesInternal;
- (id /* block */)deviceHandler;
- (char)registerForDeviceChanges;
- (NSString *)registerBudgetWithName:(NSString *)arg0 value:(long long)arg1 type:(int)arg2 error:(id *)arg3;
- (NSString *)attributeFromFullname:(id)arg0 error:(id *)arg1;
- (NSObject *)representationStringFromAttribute:(NSObject *)arg0 value:(NSObject *)arg1 options:(NSDictionary *)arg2 error:(id *)arg3;
- (NSDictionary *)attributeExtendedComponentsFromRepresentation:(NSDictionary *)arg0 error:(id *)arg1;
- (id)getDevices;
- (id)copyDevicesUncached;
- (char)setDevicesChangedHandlerWithError:(id *)arg0 handler:(id /* block */)arg1;
- (NSString *)getDeviceFromDescription:(NSString *)arg0 error:(id *)arg1;
- (char)broadcastSystemDataWithError:(id *)arg0;
- (char)setNonAppBundlIdWithError:(NSError *)arg0 error:(id *)arg1;
- (char)unlocked;
- (void)setCachedBudgets:(NSMutableDictionary *)arg0;
- (void)setCacheSerializerQ:(NSObject<OS_dispatch_queue> *)arg0;
- (char)enabledCaching;
- (void)setEnabledCaching:(char)arg0;
- (int)deviceChangeToken;
- (void)setDeviceChangeToken:(int)arg0;
- (void)setDeviceHandler:(id /* block */)arg0;
- (NSSet *)deviceList;
- (void)setDeviceList:(NSSet *)arg0;
- (NSDictionary *)attributeFromRepresentation:(NSDictionary *)arg0 error:(id *)arg1;
- (NSString *)attributeForName:(NSString *)arg0 type:(int)arg1 error:(id *)arg2;
- (NSError *)attributeNamesWithError:(id *)arg0;
- (NSError *)budgetNamesWithError:(id *)arg0;
- (char)verbose;
- (void)setVerbose:(char)arg0;
- (void)setClientId:(unsigned long long)arg0;
- (unsigned long long)clientId;

@end
