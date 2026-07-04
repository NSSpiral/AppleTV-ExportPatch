/* Runtime dump - GKFriendRequestInternal
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKFriendRequestInternal : GKFamiliarPlayerInternal
{
    NSString * _message;
    NSDate * _date;
}

@property (retain, nonatomic) NSString * message;
@property (retain, nonatomic) NSDate * date;

+ (NSArray *)secureCodedPropertyKeys;

- (void)dealloc;
- (NSDate *)date;
- (NSString *)message;
- (void)setDate:(NSDate *)arg0;
- (void)setMessage:(NSString *)arg0;
- (int)defaultFamiliarity;

@end
