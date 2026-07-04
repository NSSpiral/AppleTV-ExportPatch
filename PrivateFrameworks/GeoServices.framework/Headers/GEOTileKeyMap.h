/* Runtime dump - GEOTileKeyMap
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTileKeyMap : NSObject
{
    int _type;
    void * _map;
}

- (NSString *)objectForKey:(struct _GEOTileKey *)arg0;
- (void)setObject:(NSObject *)arg0 forKey:(struct _GEOTileKey *)arg1;
- (void)dealloc;
- (unsigned int)count;
- (void)removeObjectForKey:(struct _GEOTileKey *)arg0;
- (NSString *)contentsDescription;
- (GEOTileKeyMap *)initWithMapType:(int)arg0;

@end
