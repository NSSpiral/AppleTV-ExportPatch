/* Runtime dump - SAWebAceWebThumbnail
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAWebAceWebThumbnail : SAWebAcePicture

@property (copy, nonatomic) NSURL * url;

+ (UIImage *)aceWebThumbnail;
+ (NSDictionary *)aceWebThumbnailWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSURL *)url;
- (void)setUrl:(NSURL *)arg0;
- (NSString *)encodedClassName;

@end
