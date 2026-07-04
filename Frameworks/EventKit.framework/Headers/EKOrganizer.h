/* Runtime dump - EKOrganizer
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKOrganizer : EKParticipant

@property (nonatomic) char currentUser;

+ (EKOrganizer *)organizerWithName:(NSString *)arg0 emailAddress:(NSString *)arg1 address:(NSString *)arg2 isCurrentUser:(char)arg3;

- (NSString *)lazyLoadRelationForKey:(NSString *)arg0;
- (EKOrganizer *)initWithName:(NSString *)arg0 emailAddress:(NSString *)arg1 address:(NSString *)arg2 isCurrentUser:(char)arg3;
- (void)setCurrentUser:(char)arg0;
- (EKOrganizer *)init;
- (NSString *)description;
- (EKOrganizer *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)owner;
- (char)isCurrentUser;

@end
