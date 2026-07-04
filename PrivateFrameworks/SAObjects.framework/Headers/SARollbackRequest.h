/* Runtime dump - SARollbackRequest
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SARollbackRequest : SABaseCommand <SAServerBoundCommand>

@property (copy, nonatomic) NSString * requestId;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;

+ (NSURLRequest *)rollbackRequest;
+ (NSDictionary *)rollbackRequestWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)requestId;
- (void)setRequestId:(NSString *)arg0;
- (NSString *)encodedClassName;

@end
