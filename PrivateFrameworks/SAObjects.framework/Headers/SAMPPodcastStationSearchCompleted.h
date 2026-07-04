/* Runtime dump - SAMPPodcastStationSearchCompleted
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPPodcastStationSearchCompleted : SABaseCommand <SAServerBoundCommand>

@property (copy, nonatomic) NSArray * results;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;

+ (SAMPPodcastStationSearchCompleted *)podcastStationSearchCompleted;
+ (NSDictionary *)podcastStationSearchCompletedWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSArray *)results;
- (void)setResults:(NSArray *)arg0;
- (NSString *)encodedClassName;

@end
