/* Runtime dump - GEOAltitudeManifest
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOAltitudeManifest : NSObject <NSXMLParserDelegate, GEOResourceManifestTileGroupObserver>
{
    GEOAltitudeManifestReserved * _reserved;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (GEOAltitudeManifest *)sharedManager;

- (void)dealloc;
- (GEOAltitudeManifest *)init;
- (void)commonInit;
- (GEOAltitudeManifest *)initWithoutObserver;
- (char)parseXml:(id)arg0;
- (id)availableRegions;
- (void)_reloadManifest;
- (void)parseManifest:(id)arg0;
- (void)parser:(NSXMLParser *)arg0 didStartElement:(NSString *)arg1 namespaceURI:(NSString *)arg2 qualifiedName:(NSString *)arg3 attributes:(NSDictionary *)arg4;
- (char)isValidTourId:(unsigned long long)arg0;
- (NSObject *)nameForRegion:(unsigned int)arg0;
- (NSObject *)tourIdsForRegion:(unsigned int)arg0;
- (NSObject *)tripIdsForRegion:(unsigned int)arg0;
- (unsigned int)versionForRegion:(unsigned int)arg0;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(GEOResourceManifestManager *)arg0;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(GEOResourceManifestManager *)arg0;

@end
