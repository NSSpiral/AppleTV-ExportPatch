/* Runtime dump - GEORegionalResourceTileDecoder
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORegionalResourceTileDecoder : NSObject <GEOTileDecoder>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (char)canDecodeTile:(struct _GEOTileKey *)arg0 quickly:(struct _GEOTileKey)arg1;
- (id)decodeTile:(id)arg0 forKey:(struct _GEOTileKey *)arg1;

@end
