/* Runtime dump - SAMPGeniusSummon
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPGeniusSummon : SADomainCommand

@property (retain, nonatomic) SAMPMediaItem * mediaItem;
@property (copy, nonatomic) NSString * upNextQueueInsertLocation;

+ (SAMPGeniusSummon *)geniusSummon;
+ (NSDictionary *)geniusSummonWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setMediaItem:(SAMPMediaItem *)arg0;
- (SAMPMediaItem *)mediaItem;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (NSString *)upNextQueueInsertLocation;
- (void)setUpNextQueueInsertLocation:(NSString *)arg0;

@end
