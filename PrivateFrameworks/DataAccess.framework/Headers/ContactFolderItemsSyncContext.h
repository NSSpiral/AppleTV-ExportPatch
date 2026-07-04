/* Runtime dump - ContactFolderItemsSyncContext
 * Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface ContactFolderItemsSyncContext : NSObject
{
    int _abPersonChangeId;
    int _abGroupChangeId;
}

@property (nonatomic) int abPersonChangeId;
@property (nonatomic) int abGroupChangeId;

- (int)abPersonChangeId;
- (void)setAbPersonChangeId:(int)arg0;
- (int)abGroupChangeId;
- (void)setAbGroupChangeId:(int)arg0;

@end
