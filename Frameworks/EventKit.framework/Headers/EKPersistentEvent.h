/* Runtime dump - EKPersistentEvent
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKPersistentEvent : EKPersistentCalendarItem
{
    struct ? _cachedDurationUnits;
}

@property (readonly, nonatomic) NSString * eventIdentifier;
@property (copy, nonatomic) NSDate * endDate;
@property (readonly, nonatomic) struct ? durationUnits;
@property (readonly, nonatomic) double duration;
@property (copy, nonatomic) NSNumber * travelTime;
@property (readonly, nonatomic) int birthdayID;
@property (copy, nonatomic) NSURL * URL;
@property (copy, nonatomic) NSString * responseComment;
@property (nonatomic) unsigned int invitationStatus;
@property (readonly, nonatomic) unsigned int invitationChangedProperties;
@property (nonatomic) int status;
@property (nonatomic) int availability;
@property (nonatomic) int privacyLevel;
@property (readonly, nonatomic) char floating;
@property (readonly, nonatomic) char editable;
@property (readonly, nonatomic) char meeting;
@property (readonly, nonatomic) char invitation;
@property (nonatomic) int travelAdvisoryBehavior;
@property (nonatomic) unsigned int modifiedProperties;
@property (nonatomic) char needsOccurrenceCacheUpdate;
@property (nonatomic) int participationStatus;
@property (readonly, nonatomic) int pendingParticipationStatus;
@property (copy, nonatomic) NSDate * originalStartDate;
@property (copy, nonatomic) NSArray * actions;
@property (readonly, nonatomic) char allowsParticipationStatusModifications;

+ (EKPersistentEvent *)defaultPropertiesToLoad;
+ (NSMutableDictionary *)relations;
+ (NSObject *)generateUniqueIDWithEvent:(NSObject *)arg0 originalEvent:(NSObject *)arg1 calendar:(NSCalendar *)arg2;

- (char)refresh;
- (unsigned int)invitationStatus;
- (void)setInvitationStatus:(unsigned int)arg0;
- (char)isFloating;
- (NSString *)eventIdentifier;
- (id)exportToICS;
- (int)privacyLevel;
- (struct ?)durationUnits;
- (char)allowsParticipationStatusModifications;
- (unsigned int)modifiedProperties;
- (void)setModifiedProperties:(unsigned int)arg0;
- (void)setAvailability:(int)arg0;
- (void)setNeedsOccurrenceCacheUpdate:(char)arg0;
- (int)participationStatus;
- (int)birthdayID;
- (unsigned int)invitationChangedProperties;
- (char)responseMustApplyToAll;
- (int)travelAdvisoryBehavior;
- (int)pendingParticipationStatus;
- (void)setParticipationStatus:(int)arg0;
- (void)clearExceptionDatesAndUpdateDetachedOriginalDates;
- (void)filterExceptionDates;
- (EKOrganizer *)organizer;
- (NSDate *)originalStartDate;
- (void)deleteFromOccurrenceDateOnward:(id)arg0;
- (NSDate *)detachWithStartDate:(NSDate *)arg0 newStartDate:(NSDate *)arg1 future:(char)arg2;
- (void)setOriginalStartDate:(NSDate *)arg0;
- (char)needsOccurrenceCacheUpdate;
- (int)availability;
- (NSString *)responseComment;
- (void)setResponseComment:(NSString *)arg0;
- (void)setPrivacyLevel:(int)arg0;
- (void)setTravelAdvisoryBehavior:(int)arg0;
- (void)primitiveValueChangedForKey:(NSString *)arg0;
- (void)_invalidateCachedDurationUnits;
- (char)_areDurationUnitsCached;
- (char)hasValidEventAction;
- (char)isInvitation;
- (char)_hasExternalIDOrDeliverySource;
- (void)_adjustForNewCalendar;
- (NSDate *)committedStartDate;
- (char)isMeeting;
- (int)birthdayId;
- (void)removeAction:(NSObject *)arg0;
- (void)dealloc;
- (NSString *)description;
- (double)duration;
- (NSArray *)actions;
- (char)isEditable;
- (EKPersistentEvent *)copyWithZone:(struct _NSZone *)arg0;
- (NSURL *)URL;
- (void)addAction:(NSObject *)arg0;
- (void)setURL:(NSString *)arg0;
- (EKPersistentEvent *)initCommon;
- (int)status;
- (void)setStatus:(int)arg0;
- (char)validate:(id *)arg0;
- (void)setTravelTime:(NSNumber *)arg0;
- (NSNumber *)travelTime;
- (int)entityType;
- (void)setEndDate:(NSDate *)arg0;
- (NSDate *)endDate;
- (void)setActions:(NSArray *)arg0;

@end
