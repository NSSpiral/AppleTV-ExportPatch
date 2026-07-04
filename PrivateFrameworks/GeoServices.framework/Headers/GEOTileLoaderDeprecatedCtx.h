/* Runtime dump - GEOTileLoaderDeprecatedCtx
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTileLoaderDeprecatedCtx : NSObject
{
    struct __CFRunLoop * _runloop;
    GEOTileKeyList * _originalList;
    GEOTileKeyList * _submittedList;
    GEOTileKeyList * _satisfiedList;
    GEOTileKeyList * _notLoaded;
    id _callback;
    id _progress;
    id _error;
    id _finished;
}

@property (copy, nonatomic) id progress;
@property (copy, nonatomic) id error;
@property (copy, nonatomic) id finished;
@property (readonly, nonatomic) id callback;

- (void)cancel;
- (void)dealloc;
- (void)setProgress:(NSProgress *)arg0;
- (NSNumber *)progress;
- (void)setFinished:(char)arg0;
- (NSError *)error;
- (id /* block */)finished;
- (id /* block */)callback;
- (GEOTileLoaderDeprecatedCtx *)initWithList:(NSArray *)arg0;
- (void)success:(struct _GEOTileKey *)arg0 tile:(struct _GEOTileKey)arg1 info:(NSDictionary *)arg2;
- (void)failure:(struct _GEOTileKey *)arg0 error:(struct _GEOTileKey)arg1 info:(NSDictionary *)arg2;
- (void)breakCycle;
- (void)setError:(NSError *)arg0;

@end
