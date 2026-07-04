/* Runtime dump - PLCloudFeedCommentsEntry
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudFeedCommentsEntry : PLCloudFeedEntry

@property (retain, nonatomic) NSString * entryCloudAssetGUID;
@property (retain, nonatomic) NSOrderedSet * entryComments;
@property (retain, nonatomic) NSOrderedSet * entryLikeComments;
@property (readonly, nonatomic) NSMutableOrderedSet * mutableEntryLikeComments;
@property (readonly, nonatomic) NSMutableOrderedSet * mutableEntryComments;

+ (NSString *)entityName;

- (char)shouldBeRemovedFromPhotoLibrary:(NSObject *)arg0;
- (NSMutableOrderedSet *)mutableEntryLikeComments;
- (NSMutableOrderedSet *)mutableEntryComments;

@end
