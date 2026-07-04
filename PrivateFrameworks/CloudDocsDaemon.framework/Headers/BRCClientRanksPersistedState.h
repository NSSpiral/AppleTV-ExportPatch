/* Runtime dump - BRCClientRanksPersistedState
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCClientRanksPersistedState : NSObject <NSSecureCoding>
{
    BRCAccountSession * _session;
    unsigned long long _nextItemRowID;
    unsigned long long _nextNotifRank;
    unsigned long long _nextPackageItemRank;
}

@property (readonly, nonatomic) unsigned long long nextItemRowID;
@property (nonatomic) unsigned long long nextNotifRank;
@property (nonatomic) unsigned long long nextPackageItemRank;

+ (char)supportsSecureCoding;
+ (NSObject *)loadFromClientStateInSession:(NSObject *)arg0;

- (BRCClientRanksPersistedState *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (BRCClientRanksPersistedState *)init;
- (NSString *)description;
- (void).cxx_destruct;
- (unsigned long long)nextNotifRank;
- (unsigned long long)allocateNotifRank;
- (unsigned long long)allocateItemRowID;
- (unsigned long long)nextItemRowID;
- (void)setNextNotifRank:(unsigned long long)arg0;
- (unsigned long long)nextPackageItemRank;
- (unsigned long long)allocatePackageItemRank;
- (void)setNextPackageItemRank:(unsigned long long)arg0;

@end
