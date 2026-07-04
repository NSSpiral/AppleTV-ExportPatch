/* Runtime dump - CKRecordZone
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKRecordZone : NSObject <NSSecureCoding, NSCopying>
{
    CKRecordZoneID * _zoneID;
    unsigned int _capabilities;
    int _deviceCount;
    NSData * _currentServerContinuationToken;
    NSData * _clientChangeToken;
    NSData * _protectionData;
    NSString * _protectionEtag;
    NSString * _previousProtectionEtag;
    CKContainerID * _containerID;
    long long _assetQuotaUsage;
    long long _metadataQuotaUsage;
}

@property (retain, nonatomic) CKRecordZoneID * zoneID;
@property (nonatomic) unsigned int capabilities;
@property (nonatomic) int deviceCount;
@property (retain, nonatomic) NSData * currentServerContinuationToken;
@property (retain, nonatomic) NSData * clientChangeToken;
@property (retain, nonatomic) NSData * protectionData;
@property (retain, nonatomic) NSString * protectionEtag;
@property (retain, nonatomic) NSString * previousProtectionEtag;
@property (nonatomic) long long assetQuotaUsage;
@property (nonatomic) long long metadataQuotaUsage;
@property (copy, nonatomic) CKContainerID * containerID;

+ (char)supportsSecureCoding;
+ (CKRecordZone *)defaultRecordZone;

- (void)CKAssignToContainerWithID:(int)arg0;
- (NSString *)_initZoneWithIdentifier:(NSString *)arg0 capabilities:(unsigned int)arg1;
- (CKRecordZone *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (CKRecordZone *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (CKContainerID *)containerID;
- (CKRecordZone *)initWithZoneID:(CKRecordZoneID *)arg0;
- (CKRecordZoneID *)zoneID;
- (void)setContainerID:(CKContainerID *)arg0;
- (void)setZoneID:(CKRecordZoneID *)arg0;
- (NSData *)currentServerContinuationToken;
- (NSString *)CKPropertiesDescription;
- (void)setProtectionData:(NSData *)arg0;
- (NSData *)protectionData;
- (NSString *)protectionEtag;
- (void)setPreviousProtectionEtag:(NSString *)arg0;
- (void)setProtectionEtag:(NSString *)arg0;
- (NSString *)previousProtectionEtag;
- (void)setCurrentServerContinuationToken:(NSData *)arg0;
- (void)setClientChangeToken:(NSData *)arg0;
- (void)setDeviceCount:(int)arg0;
- (void)setAssetQuotaUsage:(long long)arg0;
- (void)setMetadataQuotaUsage:(long long)arg0;
- (NSData *)clientChangeToken;
- (int)deviceCount;
- (long long)assetQuotaUsage;
- (long long)metadataQuotaUsage;
- (void)setCapabilities:(unsigned int)arg0;
- (unsigned int)capabilities;
- (CKRecordZone *)initWithZoneName:(NSString *)arg0;

@end
