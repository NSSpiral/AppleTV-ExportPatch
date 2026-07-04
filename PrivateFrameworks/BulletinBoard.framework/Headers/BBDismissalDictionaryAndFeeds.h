/* Runtime dump - BBDismissalDictionaryAndFeeds
 * Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBDismissalDictionaryAndFeeds : BBDismissalItem
{
    NSString * _dismissalHash;
    double _dismissalTimeInterval;
}

@property (readonly, nonatomic) double dismissalTimeInterval;
@property (readonly, copy, nonatomic) NSString * dismissalHash;

- (void)dealloc;
- (NSString *)description;
- (BBDismissalDictionaryAndFeeds *)initWithDismissalDictionary:(NSDictionary *)arg0 andFeeds:(unsigned int)arg1;
- (char)matchDismissalDictionary:(NSDictionary *)arg0;
- (double)dismissalTimeInterval;
- (NSString *)dismissalHash;

@end
