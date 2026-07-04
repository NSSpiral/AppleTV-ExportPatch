/* Runtime dump - DAMailboxGetUpdatesRequest
 * Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DAMailboxGetUpdatesRequest : DAMailboxRequest
{
    int _maxSize;
}

@property (nonatomic) int maxSize;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (int)maxSize;
- (void)setMaxSize:(int)arg0;
- (DAMailboxGetUpdatesRequest *)initRequestForBodyFormat:(int)arg0 withBodySizeLimit:(int)arg1;

@end
