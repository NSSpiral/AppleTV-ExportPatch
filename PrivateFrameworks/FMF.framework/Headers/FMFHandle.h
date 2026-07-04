/* Runtime dump - FMFHandle
 * Image: /System/Library/PrivateFrameworks/FMF.framework/FMF
 */

@interface FMFHandle : NSObject <NSCopying, NSSecureCoding>
{
    char _pending;
    NSString * _identifier;
    NSString * _serverId;
    NSArray * _aliasServerIds;
    NSArray * _invitationSentToIds;
    NSDictionary * _expiresByGroupId;
    NSString * _hashedDSID;
    NSNumber * _trackingTimestamp;
    NSString * __prettyNameInternal;
}

@property (copy, nonatomic) NSString * identifier;
@property (copy, nonatomic) NSString * serverId;
@property (copy, nonatomic) NSArray * aliasServerIds;
@property (copy, nonatomic) NSArray * invitationSentToIds;
@property (copy, nonatomic) NSDictionary * expiresByGroupId;
@property (copy, nonatomic) NSString * hashedDSID;
@property (nonatomic) char pending;
@property (copy, nonatomic) NSNumber * trackingTimestamp;
@property (copy, nonatomic) NSString * _prettyNameInternal;

+ (char)supportsSecureCoding;
+ (NSObject *)handleWithId:(NSObject *)arg0 serverId:(NSString *)arg1;
+ (NSObject *)handleWithId:(NSObject *)arg0;

- (FMFHandle *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)debugDescription;
- (NSString *)identifier;
- (FMFHandle *)copyWithZone:(struct _NSZone *)arg0;
- (void)setIdentifier:(NSString *)arg0;
- (void).cxx_destruct;
- (void)setPending:(char)arg0;
- (CKDPRecordIdentifier *)recordId;
- (void)setServerId:(NSString *)arg0;
- (NSString *)serverId;
- (void)set_prettyNameInternal:(NSString *)arg0;
- (void)setTrackingTimestamp:(NSNumber *)arg0;
- (NSDictionary *)expiresByGroupId;
- (void)setExpiresByGroupId:(NSDictionary *)arg0;
- (NSNumber *)trackingTimestamp;
- (NSString *)hashedDSID;
- (void)setHashedDSID:(NSString *)arg0;
- (NSString *)prettyName;
- (NSString *)_prettyNameInternal;
- (void)addressBookDidChange;
- (void)setICloudId:(NSObject *)arg0;
- (char)isSharingThroughGroupId:(NSObject *)arg0;
- (int)prettyNameCompare:(NSObject *)arg0;
- (NSArray *)aliasServerIds;
- (void)setAliasServerIds:(NSArray *)arg0;
- (NSArray *)invitationSentToIds;
- (void)setInvitationSentToIds:(NSArray *)arg0;
- (char)isPending;

@end
