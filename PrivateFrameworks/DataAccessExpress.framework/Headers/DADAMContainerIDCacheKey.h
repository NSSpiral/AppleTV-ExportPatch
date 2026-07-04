/* Runtime dump - DADAMContainerIDCacheKey
 * Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

@interface DADAMContainerIDCacheKey : NSObject <NSCopying>
{
    NSString * _accountID;
    int _dataclass;
}

@property (readonly, nonatomic) NSString * accountID;
@property (readonly, nonatomic) int dataclass;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (DADAMContainerIDCacheKey *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (NSString *)accountID;
- (int)dataclass;
- (DADAMContainerIDCacheKey *)initWithAccountID:(NSString *)arg0 andDataclass:(int)arg1;

@end
