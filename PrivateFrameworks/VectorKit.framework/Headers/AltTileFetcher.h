/* Runtime dump - AltTileFetcher
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface AltTileFetcher : NSObject
{
    GEOTileLoader * _geoTileLoader;
    struct map<_GEOTileKey, std::__1::shared_ptr<altitude::GeoServicesLoadJob>, GEOTileKeyComp, std::__1::allocator<std::__1::pair<const _GEOTileKey, std::__1::shared_ptr<altitude::GeoServicesLoadJob> > > > _keyToJobMap;
    struct Mutex _mutex;
    unsigned int _numDownloads;
    NSString * _tileLoaderClientIdentifier;
}

- (void)dealloc;
- (AltTileFetcher *)init;
- (void).cxx_construct;
- (void).cxx_destruct;
- (void)reportCorruptTile:(struct _GEOTileKey *)arg0;
- (char)isDownloading;
- (struct shared_ptr<altitude::GeoServicesLoadJob>)getJobForKey:(NSString *)arg0;
- (void)fetchDataForJob:(struct shared_ptr<altitude::GeoServicesLoadJob> *)arg0;
- (void)cancelJob:(struct shared_ptr<altitude::GeoServicesLoadJob> *)arg0;
- (void)updateJobPriority:(struct shared_ptr<altitude::GeoServicesLoadJob> *)arg0;
- (void)cancelRequests;
- (void)purgeExpired:(double)arg0;

@end
