/* Runtime dump - IDSDevice
 * Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface IDSDevice : NSObject
{
    _IDSDevice * _internal;
}

@property (readonly, retain, nonatomic) NSString * uniqueID;
@property (readonly, retain, nonatomic) NSString * modelIdentifier;
@property (readonly, nonatomic) NSString * productName;
@property (readonly, nonatomic) NSString * productVersion;
@property (readonly, nonatomic) NSString * productBuildVersion;
@property (readonly, retain, nonatomic) NSString * name;
@property (readonly, retain, nonatomic) NSString * service;
@property (readonly, retain, nonatomic) NSString * deviceColor;
@property (readonly, retain, nonatomic) NSString * enclosureColor;
@property (readonly, nonatomic) char isDefaultPairedDevice;
@property (readonly, nonatomic) unsigned int pairingProtocolVersion;
@property (readonly, nonatomic) char nearby;
@property (readonly, nonatomic) char connected;
@property (readonly, nonatomic) char locallyPresent;
@property (readonly, retain, nonatomic) NSArray * linkedUserURIs;
@property (retain, nonatomic) NSUUID * nsuuid;
@property (readonly, nonatomic) char supportsTethering;
@property (readonly, nonatomic) char supportsHandoff;
@property (readonly, nonatomic) char supportsiCloudPairing;
@property (readonly, nonatomic) char supportsSMSRelay;
@property (readonly, nonatomic) char supportsMMSRelay;
@property (readonly, nonatomic) char supportsPhoneCalls;
@property (readonly, retain, nonatomic) NSArray * identities;
@property (readonly, retain, nonatomic) NSData * pushToken;
@property (readonly, retain, nonatomic) NSDate * lastActivityDate;

- (NSArray *)identities;
- (_IDSDevice *)_internal;
- (NSDate *)lastActivityDate;
- (void)dealloc;
- (NSString *)description;
- (IDSDevice *)initWithDictionary:(NSDictionary *)arg0;
- (NSString *)name;
- (NSDictionary *)_initWithDictionary:(NSDictionary *)arg0;
- (NSString *)productName;
- (NSString *)productVersion;
- (NSData *)pushToken;
- (NSString *)service;
- (NSString *)modelIdentifier;
- (char)isDefaultPairedDevice;
- (char)isNearby;
- (NSUUID *)nsuuid;
- (char)isDefaultLocalDevice;
- (char)supportsiCloudPairing;
- (void)_setAccount:(NSObject *)arg0;
- (void)_updateNSUUID:(id)arg0;
- (void)_addIdentity:(NSObject *)arg0;
- (NSArray *)linkedUserURIs;
- (char)supportsSMSRelay;
- (char)supportsMMSRelay;
- (char)supportsPhoneCalls;
- (NSString *)enclosureColor;
- (char)locallyPresent;
- (unsigned int)pairingProtocolVersion;
- (char)supportsHandoff;
- (char)supportsTethering;
- (void)closeSocket:(int)arg0;
- (void)setNSUUID:(NSSet *)arg0;
- (int)socketForDomain:(NSString *)arg0;
- (void)openSocketWithOptions:(NSDictionary *)arg0 completionHandler:(id /* block */)arg1 onQueue:(/* block */ id)arg2;
- (void)closeSocketForDomain:(NSString *)arg0;
- (int)openSocketForDomain:(NSString *)arg0 transportType:(int)arg1;
- (void)establishStreamPairWithOptions:(NSDictionary *)arg0 completionHandler:(id /* block */)arg1 onQueue:(/* block */ id)arg2;
- (void)cleanupStreamPairWithInputStream:(NSObject *)arg0 outputStream:(NSOutputStream *)arg1;
- (int)openSocketForDomain:(NSString *)arg0;
- (NSString *)productBuildVersion;
- (char)isConnected;
- (NSString *)deviceColor;
- (NSString *)uniqueID;

@end
