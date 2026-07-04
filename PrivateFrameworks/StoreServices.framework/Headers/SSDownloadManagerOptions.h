/* Runtime dump - SSDownloadManagerOptions
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSDownloadManagerOptions : NSObject <NSCopying>
{
    NSArray * _downloadKinds;
    char _filterExternalOriginatedDownloads;
    NSString * _persistenceIdentifier;
    NSArray * _prefetchedDownloadExternalProperties;
    NSArray * _prefetchedDownloadProperties;
}

@property (copy, nonatomic) NSArray * downloadKinds;
@property (copy, nonatomic) NSString * persistenceIdentifier;
@property (copy, nonatomic) NSArray * prefetchedDownloadProperties;
@property (nonatomic) char shouldFilterExternalOriginatedDownloads;
@property (copy, nonatomic) NSArray * prefetchedDownloadExternalProperties;

- (void)setDownloadKinds:(NSArray *)arg0;
- (void)setPersistenceIdentifier:(NSString *)arg0;
- (void)setPrefetchedDownloadExternalProperties:(NSArray *)arg0;
- (void)setPrefetchedDownloadProperties:(NSArray *)arg0;
- (void)setShouldFilterExternalOriginatedDownloads:(char)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (SSDownloadManagerOptions *)copyWithZone:(struct _NSZone *)arg0;
- (NSArray *)downloadKinds;
- (char)shouldFilterExternalOriginatedDownloads;
- (NSArray *)prefetchedDownloadExternalProperties;
- (NSArray *)prefetchedDownloadProperties;
- (NSString *)persistenceIdentifier;

@end
