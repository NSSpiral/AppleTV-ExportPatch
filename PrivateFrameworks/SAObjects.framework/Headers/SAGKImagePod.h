/* Runtime dump - SAGKImagePod
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAGKImagePod : SAGKPodView

@property (copy, nonatomic) NSArray * images;

+ (SAGKImagePod *)imagePod;
+ (NSDictionary *)imagePodWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSArray *)images;
- (void)setImages:(NSArray *)arg0;
- (NSString *)encodedClassName;

@end
