/* Runtime dump - PLCloudFeedEntriesChangeNotification
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudFeedEntriesChangeNotification : PLChangeNotification
{
    char _shouldReload;
    NSSet * _insertedEntries;
    NSSet * _updatedEntries;
    NSSet * _deletedEntries;
}

@property (nonatomic) char shouldReload;
@property (copy, nonatomic) NSSet * insertedEntries;
@property (copy, nonatomic) NSSet * updatedEntries;
@property (copy, nonatomic) NSSet * deletedEntries;

+ (NSArray *)notificationWithInsertedEntries:(NSSet *)arg0 updatedEntries:(NSSet *)arg1 deletedEntries:(NSSet *)arg2;
+ (PLCloudFeedEntriesChangeNotification *)notificationWithFullReload;

- (void)dealloc;
- (NSString *)name;
- (NSDictionary *)userInfo;
- (NSObject *)object;
- (char)shouldReload;
- (PLCloudFeedEntriesChangeNotification *)_initWithFullReload;
- (NSArray *)_initWithInsertedEntries:(NSSet *)arg0 updatedEntries:(NSSet *)arg1 deletedEntries:(NSSet *)arg2;
- (void)setShouldReload:(char)arg0;
- (void)setInsertedEntries:(NSSet *)arg0;
- (void)setUpdatedEntries:(NSSet *)arg0;
- (void)setDeletedEntries:(NSSet *)arg0;
- (NSSet *)insertedEntries;
- (NSSet *)updatedEntries;
- (NSSet *)deletedEntries;

@end
