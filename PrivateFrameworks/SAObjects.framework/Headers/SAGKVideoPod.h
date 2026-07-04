/* Runtime dump - SAGKVideoPod
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAGKVideoPod : SAGKPodView

@property (copy, nonatomic) NSArray * videos;

+ (SAGKVideoPod *)videoPod;
+ (NSDictionary *)videoPodWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSArray *)videos;
- (void)setVideos:(NSArray *)arg0;

@end
