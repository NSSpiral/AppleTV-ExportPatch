/* Runtime dump - SSVURLCacheConfiguration
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVURLCacheConfiguration : NSObject
{
    char _supportsProcessSharing;
    NSString * _sessionIdentifier;
}

@property (copy, nonatomic) NSString * sessionIdentifier;
@property (nonatomic) char supportsProcessSharing;

- (NSString *)sessionIdentifier;
- (void).cxx_destruct;
- (char)supportsProcessSharing;
- (void)setSessionIdentifier:(NSString *)arg0;
- (void)setSupportsProcessSharing:(char)arg0;

@end
