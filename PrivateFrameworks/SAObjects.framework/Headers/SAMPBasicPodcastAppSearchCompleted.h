/* Runtime dump - SAMPBasicPodcastAppSearchCompleted
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPBasicPodcastAppSearchCompleted : SABaseCommand <SAServerBoundCommand>

@property (copy, nonatomic) NSArray * podcastCollections;
@property (copy, nonatomic) NSArray * podcastStations;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;

+ (SAMPBasicPodcastAppSearchCompleted *)basicPodcastAppSearchCompleted;
+ (NSDictionary *)basicPodcastAppSearchCompletedWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSArray *)podcastCollections;
- (void)setPodcastCollections:(NSArray *)arg0;
- (NSArray *)podcastStations;
- (void)setPodcastStations:(NSArray *)arg0;

@end
