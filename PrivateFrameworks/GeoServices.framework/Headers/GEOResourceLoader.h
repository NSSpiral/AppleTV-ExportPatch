/* Runtime dump - GEOResourceLoader
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOResourceLoader : NSObject
{
    NSString * _directory;
    NSString * _additionalDirectoryToConsider;
    NSMutableArray * _resourcesToLoad;
    id _completionHandler;
    id _progressHandler;
    int _numberOfDownloadsInProgress;
    int _numberOfCopiesInProgress;
    NSMutableArray * _loadedResources;
    char _canceled;
    NSString * _baseURLString;
    unsigned int _maxConcurrentLoads;
    NSArray * _resourceInfos;
    long _queuePriority;
    NSData * _auditToken;
    char _allowResumingPartialDownloads;
    NSMapTable * _inProgressResourceDownloads;
    GEOPowerAssertion * _powerAssertion;
}

@property (retain, nonatomic) NSData * auditToken;
@property (readonly, nonatomic) NSArray * loadedResources;

- (void)cancel;
- (void)dealloc;
- (void)_cleanup;
- (NSData *)auditToken;
- (void)setAuditToken:(NSData *)arg0;
- (GEOResourceLoader *)initWithTargetDirectory:(id)arg0 baseURLString:(NSString *)arg1 resources:(NSArray *)arg2 maximumConcurrentLoads:(unsigned int)arg3 additionalDirectoryToConsider:(NSString *)arg4;
- (void)startWithProgressHandler:(id /* block */)arg0 completionHandler:(/* block */ id)arg1 priority:(struct _GEOTileKey)arg2;
- (void)_loadNextResource;
- (char)_establishHardLinkIfPossibleForResource:(NSObject *)arg0 toResource:(NSObject *)arg1 error:(id *)arg2;
- (void)_writeResourceToDisk:(id)arg0 withData:(NSData *)arg1 orExistingPathOnDisk:(id)arg2 allowCreatingHardLink:(char)arg3 checksum:(id)arg4 completionHandler:(id /* block */)arg5;
- (NSObject *)_urlForResource:(NSObject *)arg0;
- (NSArray *)loadedResources;

@end
