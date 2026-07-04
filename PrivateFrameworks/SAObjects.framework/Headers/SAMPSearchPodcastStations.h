/* Runtime dump - SAMPSearchPodcastStations
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPSearchPodcastStations : SADomainCommand

@property (nonatomic) int maxResults;
@property (copy, nonatomic) NSString * stationName;

+ (SAMPSearchPodcastStations *)searchPodcastStations;
+ (NSDictionary *)searchPodcastStationsWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (int)maxResults;
- (void)setMaxResults:(int)arg0;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (NSString *)stationName;
- (void)setStationName:(NSString *)arg0;

@end
