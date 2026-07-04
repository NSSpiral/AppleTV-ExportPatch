/* Runtime dump - SAMicroblogMicroblogSearchEmbeddedImage
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMicroblogMicroblogSearchEmbeddedImage : SAMicroblogMicroblogSearchResultPost

@property (copy, nonatomic) NSNumber * height;
@property (copy, nonatomic) NSURL * imageURL;
@property (copy, nonatomic) NSNumber * width;

+ (UIImage *)microblogSearchEmbeddedImage;
+ (NSDictionary *)microblogSearchEmbeddedImageWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSNumber *)width;
- (NSNumber *)height;
- (void)setWidth:(NSNumber *)arg0;
- (void)setHeight:(NSNumber *)arg0;
- (void)setImageURL:(NSURL *)arg0;
- (NSURL *)imageURL;
- (NSString *)encodedClassName;
- (void)updateUsingSet:(NSSet *)arg0 add:(int)arg1 remove:(NSIndexSet *)arg2;

@end
