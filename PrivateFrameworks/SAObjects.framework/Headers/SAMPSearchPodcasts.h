/* Runtime dump - SAMPSearchPodcasts
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPSearchPodcasts : SADomainCommand

@property (nonatomic) int maxResults;
@property (copy, nonatomic) NSString * podcastName;

+ (SAMPSearchPodcasts *)searchPodcasts;
+ (NSDictionary *)searchPodcastsWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (int)maxResults;
- (void)setMaxResults:(int)arg0;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (NSString *)podcastName;
- (void)setPodcastName:(NSString *)arg0;

@end
