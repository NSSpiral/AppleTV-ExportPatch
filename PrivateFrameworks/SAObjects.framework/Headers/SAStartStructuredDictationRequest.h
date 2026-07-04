/* Runtime dump - SAStartStructuredDictationRequest
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAStartStructuredDictationRequest : SAStartRequest

@property (copy, nonatomic) NSString * structuredDictationType;

+ (NSURLRequest *)startStructuredDictationRequest;
+ (NSDictionary *)startStructuredDictationRequestWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSString *)structuredDictationType;
- (void)setStructuredDictationType:(NSString *)arg0;

@end
