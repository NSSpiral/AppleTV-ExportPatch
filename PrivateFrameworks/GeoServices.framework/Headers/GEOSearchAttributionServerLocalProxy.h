/* Runtime dump - GEOSearchAttributionServerLocalProxy
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSearchAttributionServerLocalProxy : NSObject <GEOSearchAttributionServerProxy>
{
    NSMapTable * _listeners;
    char _updatingManifest;
    NSMutableArray * _updateManifestCompletionHandlers;
    NSMutableArray * _updateManifestErrorHandlers;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (GEOSearchAttributionServerLocalProxy *)init;
- (void)loadAttributionInfoForIdentifier:(NSString *)arg0 version:(unsigned int)arg1 completionHandler:(id /* block */)arg2 errorHandler:(/* block */ id)arg3;
- (void)_pruneOldAttributionLogos;
- (void)_sendInfo:(NSDictionary *)arg0 updatedManifest:(char)arg1 toListener:(BSActionListener *)arg2;
- (void)_sendError:(NSError *)arg0 toListener:(BSActionListener *)arg1;
- (void)_loadAttributionInfoForListener:(id)arg0 hasUpdatedManifest:(char)arg1;
- (void)_updateManifestWithCompletionHandler:(id /* block */)arg0 errorHandler:(/* block */ id)arg1;

@end
