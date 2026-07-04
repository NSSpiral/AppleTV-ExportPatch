/* Runtime dump - VKRasterMapTileRequest
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRasterMapTileRequest : NSObject <NSCopying>
{
    int _mapType;
    unsigned int _scale;
    NSLocale * _locale;
    unsigned int _tileGroupID;
    struct VKRasterTileKey _tileKey;
}

@property (nonatomic) struct VKRasterTileKey tileKey;
@property (nonatomic) int mapType;
@property (nonatomic) unsigned int scale;
@property (retain, nonatomic) NSLocale * locale;
@property (nonatomic) unsigned int tileGroupID;
@property (readonly, nonatomic) struct VKRasterTileKey * tileKeyPtr;
@property (readonly, nonatomic) char isInvalid;
@property (readonly, nonatomic) struct VKTileKey tk;
@property (readonly, nonatomic) struct VKCacheKey cacheKey;

- (VKRasterMapTileRequest *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (unsigned int)scale;
- (VKRasterMapTileRequest *)copyWithZone:(struct _NSZone *)arg0;
- (void)setScale:(unsigned int)arg0;
- (void)setLocale:(NSLocale *)arg0;
- (NSLocale *)locale;
- (struct VKCacheKey)cacheKey;
- (int)mapType;
- (void)setMapType:(int)arg0;
- (void)setTileKey:(struct VKRasterTileKey)arg0;
- (char)isInvalid;
- (struct VKRasterTileKey *)tileKeyPtr;
- (struct VKTileKey)tk;
- (void)isReallyInvalid:(id)arg0;
- (struct VKRasterTileKey)tileKey;
- (unsigned int)tileGroupID;
- (void)setTileGroupID:(unsigned int)arg0;

@end
