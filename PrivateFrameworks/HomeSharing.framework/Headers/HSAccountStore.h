/* Runtime dump - HSAccountStore
 * Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSAccountStore : NSObject
{
    int _defaultsDidChangeToken;
    SSURLConnectionRequest * _groupIDRequest;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (copy, nonatomic) NSString * appleID;
@property (copy, nonatomic) NSString * password;
@property (copy, nonatomic) NSString * groupID;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * queue;
@property (retain, nonatomic) SSURLConnectionRequest * groupIDRequest;

+ (HSAccountStore *)defaultStore;

- (void)determineGroupIDWithCompletionHandler:(id /* block */)arg0;
- (void)dealloc;
- (HSAccountStore *)init;
- (void).cxx_destruct;
- (NSObject<OS_dispatch_queue> *)queue;
- (void)setQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (NSString *)password;
- (void)setPassword:(NSString *)arg0;
- (void)clearGroupID;
- (void)_onBackgroundQueue_determineGroupIDWithCompletionHandler:(id /* block */)arg0;
- (char)canDetermineGroupID;
- (void)setAppleID:(NSString *)arg0;
- (void)clearAllCredentials;
- (SSURLConnectionRequest *)groupIDRequest;
- (void)setGroupIDRequest:(SSURLConnectionRequest *)arg0;
- (NSString *)appleID;
- (NSString *)groupID;
- (void)setGroupID:(NSString *)arg0;
- (void)clearCaches;

@end
