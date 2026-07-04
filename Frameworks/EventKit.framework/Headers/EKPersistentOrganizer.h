/* Runtime dump - EKPersistentOrganizer
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKPersistentOrganizer : EKPersistentParticipant

@property (nonatomic) char currentUser;

+ (EKPersistentOrganizer *)defaultPropertiesToLoad;
+ (NSMutableDictionary *)relations;
+ (NSString *)organizerWithName:(NSString *)arg0 emailAddress:(NSString *)arg1 address:(NSString *)arg2 isCurrentUser:(char)arg3;

- (EKPersistentOrganizer *)initWithName:(NSString *)arg0 emailAddress:(NSString *)arg1 address:(NSString *)arg2 isCurrentUser:(char)arg3;
- (void)setCurrentUser:(char)arg0;
- (NSString *)description;
- (EKPersistentOrganizer *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)owner;
- (char)isCurrentUser;
- (int)entityType;
- (void)setOwner:(NSObject *)arg0;

@end
