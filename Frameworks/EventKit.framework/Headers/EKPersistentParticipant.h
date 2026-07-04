/* Runtime dump - EKPersistentParticipant
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKPersistentParticipant : EKPersistentObject <NSCopying>

@property (readonly, nonatomic) NSString * UUID;
@property (copy, nonatomic) NSString * displayName;
@property (copy, nonatomic) NSString * emailAddress;
@property (copy, nonatomic) NSURL * address;
@property (copy, nonatomic) NSString * firstName;
@property (copy, nonatomic) NSString * lastName;
@property (copy, nonatomic) NSString * comment;

+ (EKPersistentParticipant *)defaultPropertiesToLoad;

- (EKPersistentParticipant *)init;
- (unsigned int)hash;
- (EKPersistentParticipant *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)UUID;
- (NSString *)displayName;
- (void)setFirstName:(NSString *)arg0;
- (void)setLastName:(NSString *)arg0;
- (void)setDisplayName:(NSString *)arg0;
- (NSString *)firstName;
- (NSString *)lastName;
- (NSString *)owner;
- (NSString *)emailAddress;
- (void)setEmailAddress:(NSString *)arg0;
- (void)setAddress:(NSURL *)arg0;
- (NSURL *)address;
- (void)setComment:(NSString *)arg0;
- (NSString *)comment;

@end
