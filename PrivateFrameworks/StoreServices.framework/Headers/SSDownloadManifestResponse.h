/* Runtime dump - SSDownloadManifestResponse
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSDownloadManifestResponse : NSObject <SSXPCCoding, NSCoding>
{
    NSArray * _validDownloads;
}

@property (copy) NSArray * validDownloads;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSDictionary *)copyXPCEncoding;
- (SSDownloadManifestResponse *)initWithXPCEncoding:(NSString *)arg0;
- (void)dealloc;
- (SSDownloadManifestResponse *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSArray *)validDownloads;
- (void)setValidDownloads:(NSArray *)arg0;

@end
