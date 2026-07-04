/* Runtime dump - DAMailboxFetchSearchResultRequest
 * Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DAMailboxFetchSearchResultRequest : NSObject
{
    NSString * _longID;
    int _bodyFormat;
    int _maxSize;
}

@property (copy, nonatomic) NSString * longID;
@property (nonatomic) int bodyFormat;
@property (nonatomic) int maxSize;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (int)maxSize;
- (void)setMaxSize:(int)arg0;
- (void).cxx_destruct;
- (void)setBodyFormat:(int)arg0;
- (void)setLongID:(NSString *)arg0;
- (int)bodyFormat;
- (DAMailboxFetchSearchResultRequest *)initRequestForBodyFormat:(int)arg0 withLongID:(NSString *)arg1 withBodySizeLimit:(int)arg2;
- (NSString *)longID;

@end
