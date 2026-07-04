/* Runtime dump - BBDismissalSyncBulletinMatch
 * Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBDismissalSyncBulletinMatch : NSObject
{
    NSString * _sectionID;
    BBDismissalItem * _dismissalItem;
    NSString * _dismissalID;
    unsigned int _feeds;
}

@property (nonatomic) unsigned int feeds;
@property (copy, nonatomic) NSString * sectionID;
@property (retain, nonatomic) BBDismissalItem * dismissalItem;
@property (copy, nonatomic) NSString * dismissalID;

- (void)setSectionID:(NSString *)arg0;
- (NSString *)dismissalID;
- (void)dealloc;
- (NSString *)description;
- (void)setDismissalID:(NSString *)arg0;
- (unsigned int)feeds;
- (void)setFeeds:(unsigned int)arg0;
- (BBDismissalSyncBulletinMatch *)initWithDismissalID:(NSString *)arg0 andItem:(NSObject *)arg1;
- (BBDismissalSyncBulletinMatch *)initWithDismissalDictionaryItem:(NSObject *)arg0;
- (BBDismissalItem *)dismissalItem;
- (void)setDismissalItem:(BBDismissalItem *)arg0;
- (NSString *)sectionID;

@end
