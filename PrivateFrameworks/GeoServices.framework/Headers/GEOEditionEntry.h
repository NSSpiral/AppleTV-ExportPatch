/* Runtime dump - GEOEditionEntry
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOEditionEntry : NSObject
{
    unsigned int _tileset;
    unsigned int _edition;
    unsigned int _provider;
    char _invalidateOnly;
}

@property unsigned int tileset;
@property unsigned int edition;
@property unsigned int provider;
@property char invalidateOnly;

- (unsigned int)provider;
- (unsigned int)edition;
- (void)setProvider:(unsigned int)arg0;
- (unsigned int)tileset;
- (void)setTileset:(unsigned int)arg0;
- (void)setEdition:(unsigned int)arg0;
- (char)invalidateOnly;
- (void)setInvalidateOnly:(char)arg0;

@end
