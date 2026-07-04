/* Runtime dump - GEODBWriteEntry
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODBWriteEntry : NSObject
{
    struct _GEOTileKey _key;
    NSData * _data;
    unsigned int _edition;
    unsigned int _set;
    unsigned int _provider;
    NSString * _etag;
}

@property (readonly, nonatomic) struct _GEOTileKey key;
@property (readonly, nonatomic) NSData * data;
@property (readonly, nonatomic) unsigned int edition;
@property (readonly, nonatomic) unsigned int set;
@property (readonly, nonatomic) unsigned int provider;
@property (readonly, nonatomic) NSString * etag;

- (void)dealloc;
- (struct _GEOTileKey)key;
- (unsigned int)set;
- (NSData *)data;
- (void).cxx_construct;
- (NSString *)etag;
- (unsigned int)provider;
- (unsigned int)edition;
- (GEODBWriteEntry *)initWithKey:(struct _GEOTileKey)arg0 data:(NSData *)arg1 edition:(unsigned int)arg2 set:(unsigned int)arg3 provider:(unsigned int)arg4 etag:(NSString *)arg5;

@end
