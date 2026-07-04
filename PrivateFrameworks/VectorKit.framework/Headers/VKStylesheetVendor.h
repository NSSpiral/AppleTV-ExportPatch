/* Runtime dump - VKStylesheetVendor
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKStylesheetVendor : NSObject <GEOResourceManifestTileGroupObserver>
{
    unsigned int _tileGroupIdentifier;
    VKResourceManager * _resourceManager;
    NSObject<OS_dispatch_queue> * _stylesheetMapEditQueue;
    NSMutableDictionary * _stylesheetMap;
    NSObject<OS_dispatch_queue> * _localizationToAttributeValueQueue;
    NSDictionary * _localizationToAttributeValue;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (VKStylesheetVendor *)initWithTileGroupIdentifier:(unsigned int)arg0 resourceManager:(VKResourceManager *)arg1;
- (void)resetStylesheetCache;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(GEOResourceManifestManager *)arg0;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(GEOResourceManifestManager *)arg0;
- (NSString *)stylesheetWithName:(NSString *)arg0 scale:(float)arg1 ppi:(float)arg2 targetDisplay:(int)arg3;
- (int)styleAttributeValueForLocalization:(id)arg0;

@end
