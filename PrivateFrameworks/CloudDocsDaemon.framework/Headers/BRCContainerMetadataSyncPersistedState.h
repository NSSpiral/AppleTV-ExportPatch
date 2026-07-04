/* Runtime dump - BRCContainerMetadataSyncPersistedState
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCContainerMetadataSyncPersistedState : NSObject <NSSecureCoding>
{
    BRCAccountSession * _session;
    CKServerChangeToken * _serverChangeToken;
    NSDate * _lastSyncDate;
}

@property (retain, nonatomic) CKServerChangeToken * serverChangeToken;
@property (retain) NSDate * lastSyncDate;

+ (char)supportsSecureCoding;
+ (NSObject *)loadFromClientStateInSession:(NSObject *)arg0;

- (BRCContainerMetadataSyncPersistedState *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (void).cxx_destruct;
- (CKServerChangeToken *)serverChangeToken;
- (void)setServerChangeToken:(CKServerChangeToken *)arg0;
- (void)setLastSyncDate:(NSDate *)arg0;
- (NSDate *)lastSyncDate;

@end
