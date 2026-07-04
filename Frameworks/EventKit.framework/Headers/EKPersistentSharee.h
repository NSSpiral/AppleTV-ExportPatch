/* Runtime dump - EKPersistentSharee
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKPersistentSharee : EKPersistentObject <NSCopying>

@property (readonly, nonatomic) NSString * UUID;
@property (copy, nonatomic) NSString * displayName;
@property (copy, nonatomic) NSString * emailAddress;
@property (copy, nonatomic) NSString * firstName;
@property (copy, nonatomic) NSString * lastName;
@property (copy, nonatomic) NSString * externalID;
@property (nonatomic) int shareeStatus;
@property (nonatomic) int shareeAccessLevel;

+ (EKPersistentSharee *)defaultPropertiesToLoad;
+ (NSMutableDictionary *)relations;
+ (NSString *)shareeWithName:(NSString *)arg0 emailAddress:(NSString *)arg1 externalID:(NSString *)arg2;
+ (NSString *)shareeWithEmailAddress:(NSString *)arg0 name:(NSString *)arg1;

- (EKPersistentSharee *)initWithName:(NSString *)arg0 emailAddress:(NSString *)arg1 externalID:(NSString *)arg2;
- (EKPersistentSharee *)initWithEmailAddress:(NSString *)arg0 name:(NSString *)arg1;
- (void)setExternalID:(NSString *)arg0;
- (NSString *)externalID;
- (int)shareeStatus;
- (void)setShareeStatus:(int)arg0;
- (int)shareeAccessLevel;
- (void)setShareeAccessLevel:(int)arg0;
- (EKPersistentSharee *)init;
- (unsigned int)hash;
- (NSString *)description;
- (EKPersistentSharee *)copyWithZone:(struct _NSZone *)arg0;
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
- (int)entityType;
- (void)setOwner:(NSObject *)arg0;

@end
