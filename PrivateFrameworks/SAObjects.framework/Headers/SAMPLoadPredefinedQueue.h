/* Runtime dump - SAMPLoadPredefinedQueue
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPLoadPredefinedQueue : SADomainCommand

@property (nonatomic) int mediaItemType;
@property (nonatomic) char shouldShuffle;

+ (NSOperationQueue *)loadPredefinedQueue;
+ (NSDictionary *)loadPredefinedQueueWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (char)shouldShuffle;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (void)setShouldShuffle:(char)arg0;
- (int)mediaItemType;
- (void)setMediaItemType:(int)arg0;

@end
