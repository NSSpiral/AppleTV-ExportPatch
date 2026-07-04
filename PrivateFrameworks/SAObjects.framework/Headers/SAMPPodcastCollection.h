/* Runtime dump - SAMPPodcastCollection
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPPodcastCollection : SAMPCollection

@property (copy, nonatomic) NSString * artist;
@property (copy, nonatomic) NSArray * preferredPlayOrder;
@property (copy, nonatomic) NSString * sortArtist;
@property (copy, nonatomic) NSNumber * subscribed;

+ (SAMPPodcastCollection *)podcastCollection;
+ (NSDictionary *)podcastCollectionWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (void)setSubscribed:(NSNumber *)arg0;
- (NSString *)groupIdentifier;
- (void)setArtist:(NSString *)arg0;
- (NSString *)artist;
- (NSString *)encodedClassName;
- (void)updateUsingSet:(NSSet *)arg0 add:(int)arg1 remove:(NSIndexSet *)arg2;
- (NSString *)sortArtist;
- (void)setSortArtist:(NSString *)arg0;
- (NSArray *)preferredPlayOrder;
- (void)setPreferredPlayOrder:(NSArray *)arg0;
- (NSNumber *)subscribed;

@end
