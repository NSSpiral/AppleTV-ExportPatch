/* Runtime dump - AACloudKitStartMigrationResponse
 * Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AACloudKitStartMigrationResponse : AAResponse
{
    NSNumber * _status;
}

@property (readonly, nonatomic) NSNumber * status;

- (void).cxx_destruct;
- (NSNumber *)status;
- (AACloudKitStartMigrationResponse *)initWithHTTPResponse:(NSURLResponse *)arg0 data:(NSData *)arg1;

@end
