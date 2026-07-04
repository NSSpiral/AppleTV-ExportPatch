/* Runtime dump - CUIMutableCommonAssetStorage
 * Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIMutableCommonAssetStorage : CUICommonAssetStorage

- (void)setVersionString:(char *)arg0;
- (CUIMutableCommonAssetStorage *)initWithPath:(NSString *)arg0;
- (void)setSchemaVersion:(unsigned int)arg0;
- (void)setColorSpaceID:(unsigned int)arg0;
- (void)setAsset:(NSSet *)arg0 forKey:(void *)arg1 withLength:(void)arg2;
- (void)removeAssetForKey:(void *)arg0 withLength:(void)arg1;
- (void)_setZeroCodeInfo:(struct ?)arg0 forKey:(void *)arg1 withLength:(void)arg2 inTree:(unsigned long)arg3;
- (char)writeToDiskAndCompact:(char)arg0;
- (void)setKeyFormatData:(NSData *)arg0;
- (void)setKeySemantics:(int)arg0;
- (void)setStorageVersion:(unsigned int)arg0;
- (void)setRenditionCount:(unsigned int)arg0;
- (void)setAssociatedChecksum:(unsigned int)arg0;
- (void)setAsset:(NSSet *)arg0 forKey:(NSString *)arg1;
- (void)setColor:(struct _rgbquad)arg0 forName:(char *)arg1 excludeFromFilter:(char)arg2;
- (void)setFontName:(NSString *)arg0 baselineOffset:(float)arg1 forFontSelector:(NSString *)arg2;
- (void)setFontSize:(float)arg0 forFontSizeSelector:(NSString *)arg1;
- (void)removeAssetForKey:(NSString *)arg0;
- (void)setRenditionKey:(struct _renditionkeytoken *)arg0 hotSpot:(struct _renditionkeytoken)arg1 forName:(struct CGPoint)arg2;
- (void)setZeroCodeGlyphInformation:(struct ?)arg0 forKey:(void *)arg1 withLength:(void)arg2;
- (void)setZeroCodeBezelInformation:(struct ?)arg0 forKey:(void *)arg1 withLength:(void)arg2;
- (char)writeToDisk;
- (void)_setConstantName:(NSString *)arg0 displayName:(NSString *)arg1 forID:(unsigned int)arg2 inDebugTree:(void *)arg3;
- (void)setConstantName:(NSString *)arg0 displayName:(NSString *)arg1 forElementID:(int)arg2;
- (void)setConstantName:(NSString *)arg0 displayName:(NSString *)arg1 forPartID:(int)arg2;
- (void)setUuid:(NSUUID *)arg0;

@end
