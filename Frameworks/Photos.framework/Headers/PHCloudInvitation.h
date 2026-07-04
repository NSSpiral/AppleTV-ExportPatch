/* Runtime dump - PHCloudInvitation
 * Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHCloudInvitation : PHObject
{
    char _isMine;
    int _invitationState;
    NSString * _inviteeFirstName;
    NSString * _inviteeLastName;
    NSString * _inviteeFullName;
    NSDate * _inviteeSubscriptionDate;
    NSString * _albumGUID;
    NSString * _cloudGUID;
    int _invitationStateLocal;
    NSNumber * _inviteeEmailKey;
    NSString * _inviteeHashedPersonID;
}

@property (readonly, nonatomic) int invitationState;
@property (readonly, nonatomic) NSString * inviteeFirstName;
@property (readonly, nonatomic) NSString * inviteeLastName;
@property (readonly, nonatomic) NSString * inviteeFullName;
@property (readonly, nonatomic) char isMine;
@property (readonly, nonatomic) NSDate * inviteeSubscriptionDate;
@property (readonly, nonatomic) NSArray * inviteeEmails;
@property (readonly, nonatomic) NSArray * inviteePhones;
@property (readonly, nonatomic) NSString * invitationStateDescription;
@property (readonly, nonatomic) NSString * albumGUID;
@property (readonly, nonatomic) NSString * cloudGUID;
@property (readonly, nonatomic) int invitationStateLocal;
@property (readonly, nonatomic) NSNumber * inviteeEmailKey;
@property (readonly, nonatomic) NSString * inviteeHashedPersonID;

+ (NSString *)managedEntityName;
+ (PHCloudInvitation *)propertiesToFetchWithHint:(unsigned int)arg0;

- (PHCloudInvitation *)initWithFetchDictionary:(NSDictionary *)arg0 propertyHint:(unsigned int)arg1 photoLibrary:(PLPhotoLibrary *)arg2;
- (Class)changeRequestClass;
- (NSNumber *)inviteeEmailKey;
- (void).cxx_destruct;
- (NSString *)cloudGUID;
- (NSString *)albumGUID;
- (NSString *)inviteeDisplayNameIncludingEmail:(char)arg0;
- (char)isMine;
- (NSArray *)inviteeEmails;
- (NSArray *)inviteePhones;
- (NSString *)inviteeFirstName;
- (NSString *)inviteeLastName;
- (NSString *)inviteeFullName;
- (int)invitationState;
- (int)invitationStateLocal;
- (NSString *)invitationStateDescription;
- (NSString *)inviteeHashedPersonID;
- (NSDate *)inviteeSubscriptionDate;

@end
