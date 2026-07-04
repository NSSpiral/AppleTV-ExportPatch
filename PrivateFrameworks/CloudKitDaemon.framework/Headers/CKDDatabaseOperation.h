/* Runtime dump - CKDDatabaseOperation
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDDatabaseOperation : CKDOperation
{
    int _databaseScope;
}

@property (nonatomic) int databaseScope;

- (CKDDatabaseOperation *)initWithOperationInfo:(CKOperationInfo *)arg0 clientContext:(struct ?)arg1;
- (void)setDatabaseScope:(int)arg0;
- (void)configureRequest:(NSURLRequest *)arg0;
- (NSObject *)newChildOperationInfoOfClass:(Class)arg0;
- (int)databaseScope;

@end
