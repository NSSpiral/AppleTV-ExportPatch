/* Runtime dump - EKSource
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKSource : EKObject
{
    EKAvailabilityCache * _availabilityCache;
    NSDate * _timeOfLastExternalIdentificationCache;
    NSString * _cachedHost;
    int _cachedPort;
    NSSet * _cachedOwnerAddresses;
}

@property (readonly, nonatomic) NSString * sourceIdentifier;
@property (readonly, nonatomic) int sourceType;
@property (copy, nonatomic) NSString * title;
@property (readonly, nonatomic) NSSet * calendars;
@property (copy, nonatomic) NSNumber * defaultAlarmOffset;
@property (copy, nonatomic) NSString * externalID;
@property (copy, nonatomic) NSString * externalModificationTag;
@property (readonly, nonatomic) char enabled;
@property (readonly, nonatomic) char isFacebookSource;
@property (readonly, nonatomic) EKSourceConstraints * constraints;
@property (readonly, nonatomic) int displayOrderForNewCalendar;
@property (nonatomic) char onlyCreatorCanModify;
@property (readonly, nonatomic) char wantsCommentPromptWhenDeclining;
@property (readonly, nonatomic) int preferredEventPrivateValue;
@property (readonly, nonatomic) int strictestEventPrivateValue;
@property (readonly, nonatomic) NSString * serverHost;
@property (readonly, nonatomic) int serverPort;
@property (readonly, nonatomic) NSSet * ownerAddresses;
@property (readonly, nonatomic) EKAvailabilityCache * availabilityCache;
@property (readonly, nonatomic) NSSet * allCalendars;
@property (retain, nonatomic) NSDate * timeOfLastExternalIdentificationCache;
@property (retain, nonatomic) NSString * cachedHost;
@property (nonatomic) int cachedPort;
@property (retain, nonatomic) NSSet * cachedOwnerAddresses;

+ (EKSource *)sourceWithEventStore:(EKEventStore *)arg0;

- (void)setExternalID:(NSString *)arg0;
- (NSString *)externalID;
- (char)commit:(id *)arg0;
- (NSObject *)calendarsForEntityType:(unsigned int)arg0;
- (NSSet *)calendars;
- (NSObject *)readWriteCalendarsForEntityType:(unsigned int)arg0;
- (NSString *)externalModificationTag;
- (void)setExternalModificationTag:(NSString *)arg0;
- (NSObject *)_persistentItem;
- (int)preferredEventPrivateValue;
- (int)strictestEventPrivateValue;
- (char)isFacebookSource;
- (char)onlyCreatorCanModify;
- (NSSet *)allCalendars;
- (NSDate *)timeOfLastExternalIdentificationCache;
- (void)setCachedHost:(NSString *)arg0;
- (void)setCachedPort:(int)arg0;
- (void)setCachedOwnerAddresses:(NSSet *)arg0;
- (void)setTimeOfLastExternalIdentificationCache:(NSDate *)arg0;
- (void)_cacheExternalIdentificationIfNeeded;
- (NSString *)cachedHost;
- (int)cachedPort;
- (NSSet *)cachedOwnerAddresses;
- (NSNumber *)defaultAlarmOffset;
- (void)setDefaultAlarmOffset:(NSNumber *)arg0;
- (void)setOnlyCreatorCanModify:(char)arg0;
- (int)displayOrderForNewCalendar;
- (char)wantsCommentPromptWhenDeclining;
- (EKAvailabilityCache *)availabilityCache;
- (NSString *)serverHost;
- (int)serverPort;
- (NSSet *)ownerAddresses;
- (void)dealloc;
- (EKSource *)init;
- (void)setTitle:(NSString *)arg0;
- (NSString *)description;
- (NSString *)title;
- (char)isEnabled;
- (EKSourceConstraints *)constraints;
- (int)sourceType;
- (NSString *)sourceIdentifier;
- (char)remove:(id *)arg0;

@end
