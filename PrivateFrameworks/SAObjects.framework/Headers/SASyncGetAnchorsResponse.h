/* Runtime dump - SASyncGetAnchorsResponse
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASyncGetAnchorsResponse : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray * anchors;

+ (NSURLResponse *)getAnchorsResponse;
+ (NSDictionary *)getAnchorsResponseWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (void)setAnchors:(NSArray *)arg0;
- (NSArray *)anchors;

@end
