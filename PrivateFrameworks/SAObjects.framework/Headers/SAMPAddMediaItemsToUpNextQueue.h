/* Runtime dump - SAMPAddMediaItemsToUpNextQueue
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPAddMediaItemsToUpNextQueue : SABaseClientBoundCommand

@property (copy, nonatomic) NSString * insertLocation;
@property (retain, nonatomic) SAMPCollection * mediaCollection;

+ (NSOperationQueue *)addMediaItemsToUpNextQueue;
+ (NSDictionary *)addMediaItemsToUpNextQueueWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (NSString *)insertLocation;
- (void)setInsertLocation:(NSString *)arg0;
- (SAMPCollection *)mediaCollection;
- (void)setMediaCollection:(SAMPCollection *)arg0;

@end
