/* Runtime dump - SBKTransactionURLOperation
 * Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@interface SBKTransactionURLOperation : ISStoreURLOperation
{
    char _shouldAuthenticate;
    SBKRequest * _SBKRequest;
}

@property (retain, nonatomic) SBKRequest * SBKRequest;
@property (nonatomic) char shouldAuthenticate;

+ (NSURLRequest *)operationWithRequest:(NSURLRequest *)arg0 delegate:(NSObject *)arg1;

- (SBKTransactionURLOperation *)init;
- (NSString *)description;
- (SBKTransactionURLOperation *)_init;
- (void).cxx_destruct;
- (char)shouldAuthenticate;
- (void)setShouldAuthenticate:(char)arg0;
- (void)setSBKRequest:(NSURLRequest *)arg0;
- (SBKRequest *)SBKRequest;

@end
