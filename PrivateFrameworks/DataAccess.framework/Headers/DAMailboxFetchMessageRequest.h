/* Runtime dump - DAMailboxFetchMessageRequest
 * Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DAMailboxFetchMessageRequest : DAMailboxRequest
{
    int _maxSize;
}

@property (nonatomic) int maxSize;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (int)maxSize;
- (void)setMaxSize:(int)arg0;
- (DAMailboxFetchMessageRequest *)initRequestForBodyFormat:(int)arg0 withMessageID:(NSString *)arg1 withBodySizeLimit:(int)arg2;

@end
