/* Runtime dump - PLBBBulletin
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLBBBulletin : NSObject
{
    long long _bulletinType;
    NSString * _senderName;
    NSString * _senderEmailAddress;
    NSString * _albumTitle;
    NSString * _photosBatchID;
    NSString * _mainAssetUUID;
    char _mainAssetIsMine;
    char _mainAssetIsVideo;
    char _containsBatchFirstKnownAsset;
    NSMutableSet * _assetUUIDs;
    int _assetCount;
    NSMutableSet * _placeholderAssetUUIDs;
    NSMutableSet * _lowResThumbAssetUUIDs;
    int _invitationState;
    NSString * _firstCommentGUID;
    NSDate * _commentDate;
    NSString * _commentText;
    int _commentCount;
    char _commentIsCaption;
    char _suppressAlert;
    NSMutableSet * _senderNames;
    char _forMultipleAsset;
    char _allMultipleAssetIsMine;
    char _isMixedType;
    unsigned int _recordID;
    unsigned int _replacedBulletinRecordID;
    unsigned int _originalRecordID;
    NSString * _albumUUID;
    NSString * _albumCloudGUID;
    NSDate * _date;
    NSDate * _originalDate;
    NSDate * _expirationDate;
}

@property (readonly) long long bulletinType;
@property unsigned int recordID;
@property unsigned int replacedBulletinRecordID;
@property unsigned int originalRecordID;
@property (readonly) NSString * albumUUID;
@property (readonly) NSString * albumCloudGUID;
@property (readonly) NSString * mainAssetUUID;
@property (readonly) NSString * senderEmailAddress;
@property (readonly) NSString * title;
@property (readonly) NSString * message;
@property (readonly) NSDate * date;
@property (copy) NSDate * originalDate;
@property (readonly) NSDate * expirationDate;
@property (readonly) NSString * destinationURLString;
@property (readonly) char hasThumbnail;
@property (readonly) NSArray * suppressionContexts;
@property (readonly) NSDictionary * dictionaryRepresentation;
@property (readonly) char canMergeWithPersistedBulletins;
@property (readonly) char allAssetsAreFullResolution;
@property (readonly) char thumbnailAssetIsPlaceholder;
@property (readonly) double completionPercentage;
@property char suppressAlert;

- (void)dealloc;
- (PLBBBulletin *)init;
- (NSString *)description;
- (NSString *)title;
- (NSDate *)date;
- (NSString *)message;
- (NSDictionary *)dictionaryRepresentation;
- (char)hasThumbnail;
- (unsigned int)recordID;
- (void)setRecordID:(unsigned int)arg0;
- (NSString *)albumCloudGUID;
- (PLBBBulletin *)initWithInvitationAlbum:(id)arg0;
- (NSString *)senderEmailAddress;
- (PLBBBulletin *)initWithInvitationRecordStatusChanged:(NSNotification *)arg0;
- (PLBBBulletin *)initWithMultipleContributorEnabledForAlbum:(id)arg0;
- (PLBBBulletin *)initWithAssetAdded:(id)arg0 atIndex:(unsigned int)arg1 toAlbum:(MSASAlbum *)arg2;
- (PLBBBulletin *)initWithCommentAdded:(id)arg0;
- (NSString *)mainAssetUUID;
- (PLBBBulletin *)initWithLikeAdded:(id)arg0;
- (unsigned int)replacedBulletinRecordID;
- (long long)bulletinType;
- (NSString *)albumUUID;
- (char)isCommentPiggyBackedOnPhotosAddedBulletin;
- (unsigned int)originalRecordID;
- (void)setOriginalRecordID:(unsigned int)arg0;
- (char)canMergeWithPersistedBulletins;
- (NSDictionary *)bulletinByMergingWithBulletinDictionary:(BBBulletin *)arg0;
- (NSObject *)_initWithType:(long long)arg0;
- (PLBBBulletin *)_initWithPhotosAddedBulletin:(id)arg0 mergedWithBulletin:(BBBulletin *)arg1;
- (void)setReplacedBulletinRecordID:(unsigned int)arg0;
- (void)setOriginalDate:(NSDate *)arg0;
- (void)setSuppressAlert:(char)arg0;
- (NSNumber *)_initWithCommentsCount:(int)arg0 commentDate:(NSDate *)arg1 firstCommentGUID:(NSString *)arg2 toAssetWithUUID:(id)arg3 photosBatchID:(NSString *)arg4 mainAssetIsMine:(char)arg5 mainAssetIsVideo:(char)arg6 inAlbumWithTitle:(NSString *)arg7 albumUUID:(NSString *)arg8 albumCloudGUID:(NSString *)arg9 assetUUIDs:(NSMutableSet *)arg10 placeholderAssetUUIDs:(NSMutableSet *)arg11 lowResThumbAssetUUIDs:(NSMutableSet *)arg12;
- (NSNumber *)_initWithLikesCount:(int)arg0 commentDate:(NSDate *)arg1 firstCommentGUID:(NSString *)arg2 toAssetWithUUID:(id)arg3 photosBatchID:(NSString *)arg4 mainAssetIsMine:(char)arg5 mainAssetIsVideo:(char)arg6 inAlbumWithTitle:(NSString *)arg7 albumUUID:(NSString *)arg8 albumCloudGUID:(NSString *)arg9 assetUUIDs:(NSMutableSet *)arg10 placeholderAssetUUIDs:(NSMutableSet *)arg11 lowResThumbAssetUUIDs:(NSMutableSet *)arg12 senderNames:(NSMutableSet *)arg13 forMultipleAsset:(char)arg14 allMultipleAssetIsMine:(char)arg15 isMixedType:(char)arg16;
- (NSDate *)originalDate;
- (PLBBBulletin *)_initWithPhotosAddedBulletin:(id)arg0 mergedWithBulletinDictionary:(BBBulletin *)arg1;
- (NSObject *)_localizedCountFormatter;
- (NSString *)destinationURLString;
- (NSArray *)suppressionContexts;
- (id)bulletinByMergingWithBulletin:(BBBulletin *)arg0;
- (char)allAssetsAreFullResolution;
- (char)thumbnailAssetIsPlaceholder;
- (double)completionPercentage;
- (char)assetWithUUID:(id)arg0 didChangePlaceholderKindTo:(short)arg1 fromOldKind:(short)arg2;
- (NSDate *)expirationDate;
- (char)suppressAlert;

@end
