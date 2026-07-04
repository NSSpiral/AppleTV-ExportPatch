/* Runtime dump - SAMPBasicPodcastAppSearch
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPBasicPodcastAppSearch : SADomainCommand

@property (nonatomic) char acceptPodcastCollections;
@property (nonatomic) char acceptPodcastStations;
@property (nonatomic) int maxResults;
@property (copy, nonatomic) NSString * query;

+ (SAMPBasicPodcastAppSearch *)basicPodcastAppSearch;
+ (NSDictionary *)basicPodcastAppSearchWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)query;
- (void)setQuery:(NSString *)arg0;
- (int)maxResults;
- (void)setMaxResults:(int)arg0;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (char)acceptPodcastCollections;
- (void)setAcceptPodcastCollections:(char)arg0;
- (char)acceptPodcastStations;
- (void)setAcceptPodcastStations:(char)arg0;

@end
