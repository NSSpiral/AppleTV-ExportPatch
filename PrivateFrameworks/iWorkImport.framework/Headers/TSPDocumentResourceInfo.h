/* Runtime dump - TSPDocumentResourceInfo
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDocumentResourceInfo : NSObject
{
    char _isDownloadable;
    NSString * _digestString;
    NSString * _locator;
    NSString * _extension;
    long long _fileSize;
}

@property (readonly, nonatomic) NSString * digestString;
@property (readonly, nonatomic) NSString * locator;
@property (readonly, nonatomic) NSString * extension;
@property (readonly, nonatomic) long long fileSize;
@property (readonly, nonatomic) char isDownloadable;

- (NSString *)locator;
- (NSString *)digestString;
- (TSPDocumentResourceInfo *)initWithDigestString:(NSString *)arg0 locator:(NSString *)arg1 extension:(NSString *)arg2 fileSize:(long long)arg3 isDownloadable:(char)arg4;
- (char)isDownloadable;
- (TSPDocumentResourceInfo *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)extension;
- (void).cxx_destruct;
- (long long)fileSize;

@end
