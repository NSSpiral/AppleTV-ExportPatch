/* Runtime dump - SAStartHandoffRequest
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAStartHandoffRequest : SAStartRequest

@property (copy, nonatomic) NSData * handoffData;

+ (NSURLRequest *)startHandoffRequest;
+ (NSDictionary *)startHandoffRequestWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSData *)handoffData;
- (void)setHandoffData:(NSData *)arg0;

@end
