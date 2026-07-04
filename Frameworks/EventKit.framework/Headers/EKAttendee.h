/* Runtime dump - EKAttendee
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKAttendee : EKParticipant

@property (nonatomic) int pendingStatus;
@property (readonly, nonatomic) NSDate * lastModifiedParticipationStatus;
@property (nonatomic) char commentChanged;
@property (nonatomic) char statusChanged;

+ (EKAttendee *)attendeeWithName:(NSString *)arg0 emailAddress:(NSString *)arg1 address:(NSString *)arg2;
+ (EKAttendee *)attendeeWithEmailAddress:(NSString *)arg0 name:(NSString *)arg1;

- (EKAttendee *)initWithEmailAddress:(NSString *)arg0 name:(NSString *)arg1;
- (NSString *)lazyLoadRelationForKey:(NSString *)arg0;
- (int)participantRole;
- (EKAttendee *)initWithName:(NSString *)arg0 emailAddress:(NSString *)arg1 address:(NSString *)arg2;
- (void)setParticipantRole:(int)arg0;
- (int)pendingStatus;
- (void)setPendingStatus:(int)arg0;
- (void)setCommentChanged:(char)arg0;
- (char)commentChanged;
- (void)setStatusChanged:(char)arg0;
- (char)statusChanged;
- (id)_persistentAttendee;
- (NSDate *)lastModifiedParticipationStatus;
- (EKAttendee *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (EKAttendee *)copyWithZone:(struct _NSZone *)arg0;
- (int)participantType;
- (int)participantStatus;
- (NSString *)owner;
- (void)setParticipantType:(int)arg0;
- (void)setParticipantStatus:(int)arg0;
- (char)isCurrentUser;

@end
