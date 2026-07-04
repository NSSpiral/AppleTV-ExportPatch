/* Runtime dump - PLCloudSharedAlbumInvitationRecord
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudSharedAlbumInvitationRecord : PLManagedObject

@property (retain, nonatomic) NSString * albumGUID;
@property (retain, nonatomic) NSString * cloudGUID;
@property (retain, nonatomic) NSNumber * invitationState;
@property (retain, nonatomic) NSNumber * invitationStateLocal;
@property (nonatomic) NSNumber * inviteeEmailKey;
@property (nonatomic) NSString * inviteeHashedPersonID;
@property (retain, nonatomic) NSString * inviteeFirstName;
@property (retain, nonatomic) NSString * inviteeLastName;
@property (retain, nonatomic) NSString * inviteeFullName;
@property (nonatomic) char isMine;
@property (retain, nonatomic) NSDate * inviteeSubscriptionDate;
@property (retain, nonatomic) PLCloudSharedAlbum * album;
@property (readonly, nonatomic) NSArray * inviteeEmails;
@property (readonly, nonatomic) NSArray * inviteePhones;

+ (NSString *)entityName;
+ (NSString *)entityInManagedObjectContext:(NSObject *)arg0;
+ (PLCloudSharedAlbumInvitationRecord *)insertNewInvitationRecordIntoAlbum:(id)arg0 withFirstName:(NSString *)arg1 lastName:(NSString *)arg2 fullName:(NSString *)arg3 emails:(NSArray *)arg4 phones:(NSArray *)arg5 inLibrary:(NSObject *)arg6;
+ (NSString *)cloudSharedAlbumInvitationRecordWithGUID:(NSString *)arg0 inLibrary:(NSObject *)arg1;
+ (NSString *)cloudSharedAlbumInvitationRecordsWithAlbumGUID:(NSString *)arg0 inLibrary:(NSObject *)arg1;

- (void)dealloc;
- (PLCloudSharedAlbumInvitationRecord *)init;
- (void)delete;
- (void)awakeFromInsert;
- (void)prepareForDeletion;
- (void)willSave;
- (NSString *)inviteeDisplayNameIncludingEmail:(char)arg0;
- (NSArray *)inviteeEmails;
- (NSArray *)inviteePhones;
- (void)setInviteeEmails:(NSArray *)arg0 phones:(NSArray *)arg1;
- (NSString *)invitationStateDescription;

@end
