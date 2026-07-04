/* Runtime dump - PLCloudSharedComment
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudSharedComment : PLManagedObject

@property (retain, nonatomic) NSString * cloudGUID;
@property (retain, nonatomic) NSString * commenterHashedPersonID;
@property (retain, nonatomic) NSNumber * isDeletable;
@property (retain, nonatomic) NSNumber * isLike;
@property (retain, nonatomic) NSNumber * isCaption;
@property (retain, nonatomic) NSNumber * isBatchComment;
@property (retain, nonatomic) NSNumber * isMyComment;
@property (retain, nonatomic) NSString * commentText;
@property (retain, nonatomic) NSDate * commentDate;
@property (retain, nonatomic) NSDate * commentClientDate;
@property (retain, nonatomic) PLManagedAsset * commentedAsset;
@property (retain, nonatomic) PLManagedAsset * likedAsset;
@property (retain, nonatomic) PLCloudFeedCommentsEntry * cloudFeedCommentEntry;
@property (retain, nonatomic) PLCloudFeedCommentsEntry * cloudFeedLikeCommentEntry;
@property (readonly, nonatomic) char isLikeBoolValue;
@property (readonly, nonatomic) NSString * commenterEmail;
@property (readonly, nonatomic) NSString * commenterFirstName;
@property (readonly, nonatomic) NSString * commenterLastName;
@property (readonly, nonatomic) NSString * commenterFullName;
@property (readonly, nonatomic) PLCloudFeedCommentsEntry * cloudFeedEntry;
@property (retain, nonatomic) NSString * commentType;

+ (NSString *)entityName;
+ (NSString *)entityInManagedObjectContext:(NSObject *)arg0;
+ (NSSet *)insertNewCommentIntoAsset:(NSSet *)arg0 commentDate:(NSDate *)arg1 withText:(NSString *)arg2 isLike:(char)arg3 isMyComment:(char)arg4 inLibrary:(NSObject *)arg5;
+ (PLCloudSharedComment *)cloudSharedCommentWithGUIDs:(id)arg0 inLibrary:(NSObject *)arg1;
+ (NSString *)cloudSharedCommentWithGUID:(NSString *)arg0 inLibrary:(NSObject *)arg1;

- (void)dealloc;
- (PLCloudSharedComment *)init;
- (NSSet *)asset;
- (void)awakeFromInsert;
- (void)prepareForDeletion;
- (void)willSave;
- (PLCloudFeedCommentsEntry *)cloudFeedEntry;
- (char)isLikeBoolValue;
- (char)isInterestingForAlbumsSorting;
- (char)shouldNotifyAsBulletinWithMediaStreamInfo:(NSDictionary *)arg0 asCaptionOnly:(char *)arg1;
- (NSString *)commenterDisplayName;
- (NSString *)commenterEmail;
- (char)_isInterestingToUser;
- (NSString *)commenterFirstName;
- (NSString *)commenterLastName;
- (NSString *)commenterFullName;
- (char)canBeDeletedByUser;

@end
