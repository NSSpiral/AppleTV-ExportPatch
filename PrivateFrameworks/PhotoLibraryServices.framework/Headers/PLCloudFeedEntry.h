/* Runtime dump - PLCloudFeedEntry
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudFeedEntry : PLManagedObject

@property (readonly, nonatomic) NSURL * URIRepresentation;
@property (readonly, nonatomic) int entryType;
@property (readonly, nonatomic) int entryPriority;
@property (retain, nonatomic) NSDate * entryDate;
@property (retain, nonatomic) NSString * entryAlbumGUID;
@property (retain, nonatomic) NSString * entryInvitationRecordGUID;
@property (retain, nonatomic) NSNumber * entryTypeNumber;
@property (retain, nonatomic) NSNumber * entryPriorityNumber;

+ (NSString *)entityName;
+ (NSString *)entityInManagedObjectContext:(NSObject *)arg0;
+ (NSString *)allEntriesInManagedObjectContext:(NSObject *)arg0;
+ (PLCloudFeedEntry *)entriesSortDescriptorsAscending:(char)arg0;
+ (NSObject *)allEntriesInLibrary:(NSObject *)arg0;
+ (NSObject *)recentEntriesInLibrary:(NSObject *)arg0 earliestDate:(NSDate *)arg1 latestDate:(NSDate *)arg2 limit:(int)arg3;
+ (NSObject *)recentAssetsEntriesInLibrary:(NSObject *)arg0 limit:(int)arg1;
+ (NSObject *)firstEntryWithType:(int)arg0 albumGUID:(NSString *)arg1 inLibrary:(NSObject *)arg2;
+ (NSDictionary *)entryWithURIRepresentation:(NSDictionary *)arg0 inLibrary:(NSObject *)arg1;

- (NSURL *)URIRepresentation;
- (char)shouldBeRemovedFromPhotoLibrary:(NSObject *)arg0;
- (int)entryType;
- (int)entryPriority;

@end
