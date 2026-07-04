/* Runtime dump - SBKTransaction
 * Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@interface SBKTransaction : NSObject
{
    NSString * _domain;
    NSURL * _requestURL;
    SBKRequest * _activeRequest;
    NSMutableDictionary * _userInfo;
}

@property (readonly, copy) NSString * domain;
@property (retain) NSURL * requestURL;
@property (retain) SBKRequest * activeRequest;
@property (retain) NSMutableDictionary * userInfo;

- (SBKTransaction *)init;
- (void)setUserInfo:(NSMutableDictionary *)arg0;
- (NSString *)domain;
- (NSMutableDictionary *)userInfo;
- (void).cxx_destruct;
- (NSURL *)requestURL;
- (NSString *)clampsKey;
- (void)setTransactionContext:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)setActiveRequest:(SBKRequest *)arg0;
- (NSURLRequest *)newRequest;
- (void)processDataInResponse:(NSURLResponse *)arg0 withCompletionHandler:(id /* block */)arg1;
- (SBKRequest *)activeRequest;
- (NSString *)transactionContextForKey:(NSString *)arg0;
- (SBKTransaction *)initWithDomain:(NSString *)arg0 requestURL:(NSURL *)arg1;
- (void)setRequestURL:(NSURL *)arg0;

@end
