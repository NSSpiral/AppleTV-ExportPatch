/* Runtime dump - SAMPSetQueue
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPSetQueue : SADomainCommand

@property (copy, nonatomic) NSArray * filters;
@property (retain, nonatomic) SAMPCollection * mediaItems;
@property (nonatomic) char shouldOverrideManuallyCuratedUpNext;
@property (nonatomic) char shouldShuffle;
@property (copy, nonatomic) NSArray * sort;

+ (NSOperationQueue *)setQueue;
+ (NSDictionary *)setQueueWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setFilters:(NSArray *)arg0;
- (NSArray *)filters;
- (NSArray *)sort;
- (char)shouldShuffle;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (SAMPCollection *)mediaItems;
- (void)setMediaItems:(SAMPCollection *)arg0;
- (char)shouldOverrideManuallyCuratedUpNext;
- (void)setShouldOverrideManuallyCuratedUpNext:(char)arg0;
- (void)setShouldShuffle:(char)arg0;
- (void)setSort:(NSArray *)arg0;

@end
