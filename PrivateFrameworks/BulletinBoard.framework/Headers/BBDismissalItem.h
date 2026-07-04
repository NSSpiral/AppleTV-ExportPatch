/* Runtime dump - BBDismissalItem
 * Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBDismissalItem : NSObject
{
    unsigned int _feeds;
    NSDate * _expiration;
}

@property (readonly, nonatomic) unsigned int feeds;
@property (readonly, retain, nonatomic) NSDate * expiration;

- (void)dealloc;
- (NSString *)description;
- (unsigned int)feeds;
- (NSDate *)expiration;
- (BBDismissalItem *)initWithFeeds:(unsigned int)arg0;
- (void)addFeeds:(unsigned int)arg0;
- (char)hasExpired;

@end
