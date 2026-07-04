/* Runtime dump - CUICommonAssetStorage
 * Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUICommonAssetStorage : NSObject
{
    struct _carheader * _header;
    struct _renditionkeyfmt * _keyfmt;
    void * _imagedb;
    void * _colordb;
    void * _fontdb;
    void * _fontsizedb;
    void * _zcglyphdb;
    void * _zcbezeldb;
    void * _facetKeysdb;
    void * _elementDebugInfoDB;
    void * _partDebugInfoDB;
    char _swap;
}

+ (void)initialize;

- (char *)versionString;
- (void)dealloc;
- (NSString *)description;
- (NSString *)path;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)arg0;
- (CUICommonAssetStorage *)initWithPath:(NSString *)arg0;
- (NSString *)uuid;
- (unsigned int)schemaVersion;
- (unsigned int)colorSpaceID;
- (struct _renditionkeyfmt *)keyFormat;
- (int)maximumRenditionKeyTokenCount;
- (char)usesCUISystemThemeRenditionKey;
- (NSArray *)zeroCodeGlyphList;
- (CUICommonAssetStorage *)initWithPath:(NSString *)arg0 forWriting:(char)arg1;
- (void)_initDefaultHeaderVersion:(double)arg0 versionString:(char *)arg1;
- (void)_swapHeader;
- (void)_bringHeaderInfoUpToDate;
- (void)_swapKeyFormat;
- (long)_storagefileTimestamp;
- (char)assetExistsForKeyData:(void *)arg0 length:(void)arg1;
- (id)assetKeysMatchingBlock:(id /* block */)arg0;
- (char)swapped;
- (void)_swapRenditionKeyArray:(unsigned short *)arg0;
- (struct _renditionkeytoken)_swapRenditionKeyToken:(struct _renditionkeytoken)arg0;
- (void)_swapZeroCodeInformation:(struct ? *)arg0;
- (id)_zeroCodeListFromTree:(void *)arg0;
- (struct FontValue *)_fontValueForFontType:(SEL)arg0;
- (unsigned int)storageVersion;
- (unsigned int)coreuiVersion;
- (long)storageTimestamp;
- (int)keySemantics;
- (NSData *)keyFormatData;
- (unsigned int)renditionCount;
- (unsigned int)associatedChecksum;
- (char)assetExistsForKey:(NSString *)arg0;
- (NSString *)assetForKey:(NSString *)arg0;
- (NSArray *)allAssetKeys;
- (struct _renditionkeytoken *)renditionKeyForName:(SEL)arg0 hotSpot:(char *)arg1;
- (NSArray *)allRenditionNames;
- (NSArray *)renditionNameForKeyList:(struct _renditionkeytoken *)arg0;
- (NSArray *)zeroCodeBezelList;
- (char)getColor:(struct _colordef *)arg0 forName:(NSString *)arg1;
- (char)hasColorForName:(char *)arg0;
- (char)getFontName:(id *)arg0 baselineOffset:(float *)arg1 forFontType:(NSObject *)arg2;
- (char)getBaselineOffset:(float *)arg0 forFontType:(NSObject *)arg1;
- (float)fontSizeForFontSizeType:(NSObject *)arg0;
- (NSString *)_dataForIdentifier:(unsigned int)arg0 fromDebugTree:(void *)arg1;
- (NSString *)_constantNameForIdentifier:(unsigned int)arg0 fromDebugTree:(void *)arg1;
- (NSString *)_displayNameForIdentifier:(unsigned int)arg0 fromDebugTree:(void *)arg1;
- (NSObject *)constantNameForElementID:(int)arg0;
- (NSObject *)displayNameForElementID:(int)arg0;
- (NSObject *)constantNameForPartID:(int)arg0;
- (NSObject *)displayNameForPartID:(int)arg0;
- (void)finalize;

@end
