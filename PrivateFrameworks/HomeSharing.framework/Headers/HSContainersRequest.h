/* Runtime dump - HSContainersRequest
 * Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSContainersRequest : HSRequest
{
    char _shouldParseResponse;
}

@property (nonatomic) char shouldParseResponse;

+ (NSObject *)requestWithDatabaseID:(unsigned int)arg0;

- (HSContainersRequest *)initWithAction:(NSString *)arg0;
- (NSURLResponse *)canonicalResponseForResponse:(NSURLResponse *)arg0;
- (HSContainersRequest *)initWithDatabaseID:(unsigned int)arg0;
- (char)shouldParseResponse;
- (void)setShouldParseResponse:(char)arg0;

@end
