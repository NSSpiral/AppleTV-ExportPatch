/* Runtime dump - HSItemsRequest
 * Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSItemsRequest : HSRequest
{
    char _shouldParseResponse;
    char _includeHiddenItems;
}

@property (nonatomic) char shouldParseResponse;
@property (nonatomic) char includeHiddenItems;

+ (NSObject *)requestWithDatabaseID:(unsigned int)arg0;
+ (NSObject *)requestWithDatabaseID:(unsigned int)arg0 containerID:(unsigned int)arg1;

- (HSItemsRequest *)initWithAction:(NSString *)arg0;
- (double)timeoutInterval;
- (NSURLResponse *)canonicalResponseForResponse:(NSURLResponse *)arg0;
- (HSItemsRequest *)initWithDatabaseID:(unsigned int)arg0;
- (HSItemsRequest *)initWithDatabaseID:(unsigned int)arg0 containerID:(unsigned int)arg1;
- (char)shouldParseResponse;
- (void)setShouldParseResponse:(char)arg0;
- (char)includeHiddenItems;
- (void)setIncludeHiddenItems:(char)arg0;

@end
