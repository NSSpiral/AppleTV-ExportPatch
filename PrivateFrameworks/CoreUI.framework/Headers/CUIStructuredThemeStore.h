/* Runtime dump - CUIStructuredThemeStore
 * Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIStructuredThemeStore : NSObject <CUIStructuredThemeStorage, CUIStructuredThemeStorage2>
{
    NSMutableDictionary * _cache;
    CUICommonAssetStorage * _store;
    NSLock * _cacheLock;
    NSLock * _storeLock;
    unsigned int _themeIndex;
    NSString * _bundleID;
    NSCache * _assetExistanceCache;
    NSCache * _assetFPOStatus;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (NSString *)debugDescription;
- (CUIStructuredThemeStore *)initWithURL:(NSString *)arg0;
- (CUIStructuredThemeStore *)initWithPath:(NSString *)arg0;
- (NSString *)imagesWithName:(NSString *)arg0;
- (NSString *)bundleID;
- (unsigned int)colorSpaceID;
- (NSString *)renditionWithKey:(struct _renditionkeytoken *)arg0;
- (struct _renditionkeytoken *)renditionKeyForName:(SEL)arg0;
- (struct _renditionkeyfmt *)keyFormat;
- (char)canGetRenditionWithKey:(struct _renditionkeytoken *)arg0;
- (NSString *)copyKeySignatureForKey:(struct _renditionkeytoken *)arg0 withBytesNoCopy:(struct _renditionkeytoken)arg1 length:(char *)arg2;
- (NSString *)renditionWithKey:(struct _renditionkeytoken *)arg0 usingKeySignature:(struct _renditionkeytoken)arg1;
- (void)clearRenditionCache;
- (int)maximumRenditionKeyTokenCount;
- (char)usesCUISystemThemeRenditionKey;
- (NSArray *)allImageNames;
- (struct _renditionkeytoken *)renditionKeyForName:(SEL)arg0 cursorHotSpot:(id)arg1;
- (char)canGetRenditionWithKey:(struct _renditionkeytoken *)arg0 isFPO:(struct _renditionkeytoken)arg1;
- (NSArray *)zeroCodeGlyphList;
- (NSArray *)debugDescriptionForKeyList:(struct _renditionkeytoken *)arg0;
- (char)assetExistsForKey:(struct _renditionkeytoken *)arg0;
- (char)getFontName:(id *)arg0 baselineOffset:(float *)arg1 forFontType:(NSObject *)arg2;
- (float)fontSizeForFontSizeType:(NSObject *)arg0;
- (NSObject *)constantNameForElementID:(int)arg0;
- (NSObject *)displayNameForElementID:(int)arg0;
- (NSObject *)constantNameForPartID:(int)arg0;
- (NSObject *)displayNameForPartID:(int)arg0;
- (char)_formatStorageKeyArrayBytes:(void *)arg0 length:(unsigned long)arg1 fromKey:(struct _renditionkeytoken *)arg2;
- (void)_updateKeyWithCompatibilityMapping:(struct _renditionkeytoken *)arg0;
- (NSString *)_newRenditionKeyDataFromKey:(struct _renditionkeytoken *)arg0;
- (void)_getKeyForAssetClosestToKey:(struct _renditionkeytoken *)arg0 foundAsset:(char *)arg1;
- (struct _renditionkeyfmt *)renditionKeyFormat;
- (NSString *)lookupAssetForKey:(struct _renditionkeytoken *)arg0;
- (void)_getKeyForAssetInOtherLookGroupClosestToKey:(struct _renditionkeytoken *)arg0 foundAsset:(char *)arg1;
- (char)_canGetRenditionWithKey:(struct _renditionkeytoken *)arg0 isFPO:(struct _renditionkeytoken)arg1 lookForSubstitutions:(char *)arg2;
- (char)getPhysicalColor:(struct _colordef *)arg0 withName:(NSString *)arg1;
- (char)hasPhysicalColorWithName:(NSString *)arg0;
- (unsigned int)documentFormatVersion;
- (unsigned int)distilledInCoreUIVersion;
- (unsigned int)authoredWithSchemaVersion;
- (NSString *)baseGradationKeySignatureForKey:(struct _renditionkeytoken *)arg0;
- (NSString *)copyLookupKeySignatureForKey:(struct _renditionkeytoken *)arg0;
- (NSString *)keySignatureForKey:(struct _renditionkeytoken *)arg0;
- (NSObject *)themeStore;
- (NSData *)convertRenditionKeyToKeyData:(struct _renditionkeytoken *)arg0;
- (NSString *)prefilteredAssetDataForKey:(struct _renditionkeytoken *)arg0;
- (void)setThemeIndex:(unsigned int)arg0;

@end
