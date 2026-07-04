/* Runtime dump - SACreateSessionInfoRequest
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SACreateSessionInfoRequest : SABaseCommand <SAServerBoundCommand>

@property (copy, nonatomic) NSData * sessionInfoRequest;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;

+ (NSURLRequest *)createSessionInfoRequest;
+ (NSDictionary *)createSessionInfoRequestWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSData *)sessionInfoRequest;
- (void)setSessionInfoRequest:(NSData *)arg0;

@end
