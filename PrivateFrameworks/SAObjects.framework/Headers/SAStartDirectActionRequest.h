/* Runtime dump - SAStartDirectActionRequest
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAStartDirectActionRequest : SAStartRequest

@property (copy, nonatomic) NSString * directAction;

+ (NSURLRequest *)startDirectActionRequest;
+ (NSDictionary *)startDirectActionRequestWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSString *)directAction;
- (void)setDirectAction:(NSString *)arg0;

@end
