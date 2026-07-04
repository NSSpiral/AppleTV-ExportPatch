/* Runtime dump - CRRecentContact
 * Image: /System/Library/PrivateFrameworks/CoreRecents.framework/CoreRecents
 */

@interface CRRecentContact : NSObject <NSSecureCoding>
{
    NSMutableArray * _recentDates;
    NSString * _recentsDomain;
    NSString * _displayName;
    NSString * _kind;
    NSString * _address;
    NSString * _lastSendingAddress;
    NSString * _originalSource;
    NSDictionary * _metadata;
    NSNumber * _weight;
    NSNumber * _decayedWeight;
    NSArray * _members;
    unsigned int _groupKind;
    NSString * _groupName;
    NSString * _rawAddress;
    long long _contactID;
    long long _recentID;
}

@property (nonatomic) long long contactID;
@property (copy, nonatomic) NSString * recentsDomain;
@property (copy, nonatomic) NSString * displayName;
@property (copy, nonatomic) NSString * kind;
@property (copy, nonatomic) NSString * address;
@property (copy, nonatomic) NSString * lastSendingAddress;
@property (copy, nonatomic) NSString * originalSource;
@property (copy, nonatomic) NSArray * recentDates;
@property (copy, nonatomic) NSDictionary * metadata;
@property (retain, nonatomic) NSNumber * weight;
@property (retain, nonatomic) NSNumber * decayedWeight;
@property (copy, nonatomic) NSArray * members;
@property (readonly, nonatomic) unsigned int countOfRecents;
@property (readonly, copy, nonatomic) NSDate * mostRecentDate;
@property (readonly, copy, nonatomic) NSDate * leastRecentDate;
@property (readonly, nonatomic) char group;
@property (nonatomic) unsigned int groupKind;
@property (nonatomic) long long recentID;
@property (copy, nonatomic) NSString * groupName;
@property (copy, nonatomic) NSString * rawAddress;

+ (char)supportsSecureCoding;

- (int)matchedIdentifier;
- (void *)existingPerson;
- (NSString *)_addressBookContext;
- (void)_setAddressBookContext:(NSObject *)arg0;
- (void *)person;
- (int)property;
- (NSString *)lastSendingAddress;
- (unsigned int)countOfRecents;
- (void)dealloc;
- (CRRecentContact *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setGroupName:(NSString *)arg0;
- (NSString *)groupName;
- (char)isGroup;
- (NSString *)displayName;
- (NSString *)kind;
- (NSNumber *)weight;
- (void)setWeight:(NSNumber *)arg0;
- (void)setKind:(NSString *)arg0;
- (void)setDisplayName:(NSString *)arg0;
- (NSNumber *)decayedWeight;
- (NSString *)originalSource;
- (NSDate *)mostRecentDate;
- (char)hasFullTextMatch:(id)arg0;
- (NSDate *)leastRecentDate;
- (CRRecentContact *)initWithContactID:(long long)arg0;
- (void)setRecentID:(long long)arg0;
- (void)setRecentsDomain:(NSString *)arg0;
- (void)setRecentDates:(NSArray *)arg0;
- (void)setMembers:(NSArray *)arg0;
- (long long)recentID;
- (void)lazilyCreateRecentDates;
- (unsigned int)insertionIndexForDate:(NSDate *)arg0 wouldBeUnique:(char *)arg1;
- (void)insertDate:(NSDate *)arg0 atIndex:(unsigned int)arg1 required:(char)arg2;
- (void)enumerateArchivablePropertiesWithBlock:(id /* block */)arg0;
- (long long)contactID;
- (CRRecentContact *)initWithAddress:(NSString *)arg0 displayName:(NSString *)arg1 kind:(NSString *)arg2 recentDate:(NSDate *)arg3 recentsDomain:(NSString *)arg4;
- (CRRecentContact *)initWithMembers:(NSArray *)arg0 displayName:(NSString *)arg1 recentDate:(NSDate *)arg2 recentsDomain:(NSString *)arg3;
- (void)applyWeight:(float)arg0;
- (NSArray *)recentDates;
- (void)recordRecentEventForDate:(NSDate *)arg0 userInitiated:(char)arg1;
- (void)setArchivableRecentID:(NSObject *)arg0;
- (NSObject *)archivableRecentID;
- (void)setArchivableContactID:(NSObject *)arg0;
- (NSObject *)archivableContactID;
- (void)setArchivableGroupMembers:(id)arg0;
- (id)archivableGroupMembers;
- (void)setArchivableMetadata:(NSDictionary *)arg0;
- (NSDictionary *)archivableMetadata;
- (void)setArchivableGroupKind:(id)arg0;
- (id)archivableGroupKind;
- (void)setContactID:(long long)arg0;
- (NSString *)recentsDomain;
- (void)setLastSendingAddress:(NSString *)arg0;
- (void)setOriginalSource:(NSString *)arg0;
- (void)setDecayedWeight:(NSNumber *)arg0;
- (unsigned int)groupKind;
- (void)setGroupKind:(unsigned int)arg0;
- (NSString *)rawAddress;
- (void)setRawAddress:(NSString *)arg0;
- (void)setAddress:(NSString *)arg0;
- (NSString *)address;
- (NSArray *)members;
- (void)setMetadata:(NSDictionary *)arg0;
- (NSDictionary *)metadata;

@end
