/* Runtime dump - SABackgroundUpdateRequest
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SABackgroundUpdateRequest : SAStartRequest

@property (retain, nonatomic) <SAAceSerializable> * attachment;

+ (NSURLRequest *)backgroundUpdateRequest;
+ (NSDictionary *)backgroundUpdateRequestWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setAttachment:(<SAAceSerializable> *)arg0;
- (<SAAceSerializable> *)attachment;
- (NSString *)encodedClassName;

@end
