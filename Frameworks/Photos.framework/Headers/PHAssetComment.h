/* Runtime dump - PHAssetComment
 * Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHAssetComment : PHObject
{
    char _isLike;
    char _isCaption;
    char _isBatchComment;
    char _isMyComment;
    char _canBeDeletedByUser;
    char _isDeletable;
    char _isInterestingToUser;
    NSString * _commentText;
    NSDate * _commentDate;
    NSDate * _commentClientDate;
    NSString * _cloudGUID;
    NSString * _commenterHashedPersonID;
}

@property (readonly, nonatomic) char isLike;
@property (readonly, nonatomic) char isCaption;
@property (readonly, nonatomic) char isBatchComment;
@property (readonly, nonatomic) char isMyComment;
@property (readonly, nonatomic) NSString * commentText;
@property (readonly, nonatomic) NSDate * commentDate;
@property (readonly, nonatomic) NSString * commenterEmail;
@property (readonly, nonatomic) NSString * commenterFirstName;
@property (readonly, nonatomic) NSString * commenterLastName;
@property (readonly, nonatomic) NSString * commenterFullName;
@property (readonly, nonatomic) char isInterestingForAlbumsSorting;
@property (readonly, nonatomic) NSString * commenterDisplayName;
@property (readonly, nonatomic) char canBeDeletedByUser;
@property (readonly, nonatomic) char isDeletable;
@property (readonly, nonatomic) NSDate * commentClientDate;
@property (readonly, nonatomic) NSString * cloudGUID;
@property (readonly, nonatomic) NSString * commenterHashedPersonID;
@property (readonly, nonatomic) char isInterestingToUser;

+ (NSString *)managedEntityName;
+ (PHAssetComment *)propertiesToFetchWithHint:(unsigned int)arg0;

- (PHAssetComment *)initWithFetchDictionary:(NSDictionary *)arg0 propertyHint:(unsigned int)arg1 photoLibrary:(PLPhotoLibrary *)arg2;
- (Class)changeRequestClass;
- (char)_isInterestingToUser:(id)arg0;
- (char)isInterestingToUser;
- (void).cxx_destruct;
- (NSString *)cloudGUID;
- (NSString *)commentText;
- (NSDate *)commentDate;
- (char)isCaption;
- (char)isBatchComment;
- (char)isLike;
- (char)isMyComment;
- (char)isDeletable;
- (char)isInterestingForAlbumsSorting;
- (char)shouldNotifyAsBulletinWithMediaStreamInfo:(NSDictionary *)arg0 asCaptionOnly:(char *)arg1;
- (NSString *)commenterDisplayName;
- (NSString *)commenterEmail;
- (NSString *)commenterFirstName;
- (NSString *)commenterLastName;
- (NSString *)commenterFullName;
- (NSString *)commenterHashedPersonID;
- (char)canBeDeletedByUser;
- (NSDate *)commentClientDate;

@end
