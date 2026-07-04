/* Runtime dump - CKDTokenDeletionURLRequest
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDTokenDeletionURLRequest : CKDURLRequest
{
    NSData * _token;
    NSString * _bundleID;
}

@property (retain, nonatomic) NSData * token;
@property (retain, nonatomic) NSString * bundleID;

- (void).cxx_destruct;
- (NSData *)token;
- (void)setToken:(NSData *)arg0;
- (NSString *)bundleID;
- (char)requiresTokenRegistration;
- (NSArray *)requestOperations;
- (NSObject *)requestDidParseProtobufObject:(NSObject *)arg0;
- (NSArray *)requestOperationClasses;
- (CKDTokenDeletionURLRequest *)initWithToken:(NSData *)arg0 bundleID:(NSString *)arg1;
- (void)setBundleID:(NSString *)arg0;
- (int)operationType;

@end
