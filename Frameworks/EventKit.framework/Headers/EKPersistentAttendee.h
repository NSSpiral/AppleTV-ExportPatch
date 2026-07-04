/* Runtime dump - EKPersistentAttendee
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKPersistentAttendee : EKPersistentParticipant

@property (nonatomic) int participantStatus;
@property (nonatomic) int participantRole;
@property (nonatomic) int participantType;
@property (nonatomic) int pendingStatus;
@property (copy, nonatomic) NSDate * lastModified;
@property (nonatomic) char commentChanged;
@property (nonatomic) char statusChanged;

+ (EKPersistentAttendee *)defaultPropertiesToLoad;
+ (NSMutableDictionary *)relations;
+ (NSString *)attendeeWithName:(NSString *)arg0 emailAddress:(NSString *)arg1 address:(NSString *)arg2;
+ (NSString *)attendeeWithEmailAddress:(NSString *)arg0 name:(NSString *)arg1;

- (EKPersistentAttendee *)initWithEmailAddress:(NSString *)arg0 name:(NSString *)arg1;
- (int)participantRole;
- (EKPersistentAttendee *)initWithName:(NSString *)arg0 emailAddress:(NSString *)arg1 address:(NSString *)arg2;
- (void)setParticipantRole:(int)arg0;
- (int)pendingStatus;
- (void)setPendingStatus:(int)arg0;
- (void)setLastModified:(NSDate *)arg0;
- (void)_setFlag:(unsigned int)arg0 value:(char)arg1;
- (char)_valueForFlag:(unsigned int)arg0;
- (EKPersistentAttendee *)initWithAddress:(NSString *)arg0 name:(NSString *)arg1;
- (void)setCommentChanged:(char)arg0;
- (char)commentChanged;
- (void)setStatusChanged:(char)arg0;
- (char)statusChanged;
- (NSString *)description;
- (EKPersistentAttendee *)copyWithZone:(struct _NSZone *)arg0;
- (int)participantType;
- (int)participantStatus;
- (NSString *)owner;
- (void)setParticipantType:(int)arg0;
- (void)setParticipantStatus:(int)arg0;
- (int)entityType;
- (NSDate *)lastModified;
- (void)setOwner:(NSObject *)arg0;

@end
