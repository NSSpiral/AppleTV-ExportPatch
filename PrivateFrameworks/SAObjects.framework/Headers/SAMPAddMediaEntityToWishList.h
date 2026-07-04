/* Runtime dump - SAMPAddMediaEntityToWishList
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPAddMediaEntityToWishList : SABaseClientBoundCommand

@property (copy, nonatomic) NSString * adamId;

+ (NSArray *)addMediaEntityToWishList;
+ (NSDictionary *)addMediaEntityToWishListWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (NSString *)adamId;
- (void)setAdamId:(NSString *)arg0;

@end
