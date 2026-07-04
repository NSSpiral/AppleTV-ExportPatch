/* Runtime dump - CUIMutableStructuredThemeStore
 * Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIMutableStructuredThemeStore : CUIStructuredThemeStore
{
    NSString * _identifier;
    NSMutableDictionary * _memoryStore;
    NSMutableDictionary * _nameIdentifierStore;
    int _maxNameIdentifier;
}

- (void)dealloc;
- (CUIMutableStructuredThemeStore *)initWithIdentifier:(NSString *)arg0;
- (NSString *)imagesWithName:(NSString *)arg0;
- (void)removeImageNamed:(id)arg0 withDescription:(NSString *)arg1;
- (void)insertCGImage:(struct CGImage *)arg0 withName:(NSString *)arg1 andDescription:(NSString *)arg2;
- (NSString *)renditionWithKey:(struct _renditionkeytoken *)arg0;
- (struct _renditionkeytoken *)renditionKeyForName:(SEL)arg0;
- (struct _renditionkeyfmt *)keyFormat;
- (char)canGetRenditionWithKey:(struct _renditionkeytoken *)arg0;
- (NSString *)renditionWithKey:(struct _renditionkeytoken *)arg0 usingKeySignature:(struct _renditionkeytoken)arg1;
- (void)clearRenditionCache;
- (int)maximumRenditionKeyTokenCount;
- (char)usesCUISystemThemeRenditionKey;
- (NSArray *)allImageNames;
- (struct _renditionkeytoken *)renditionKeyForName:(SEL)arg0 cursorHotSpot:(id)arg1;
- (char)canGetRenditionWithKey:(struct _renditionkeytoken *)arg0 isFPO:(struct _renditionkeytoken)arg1;

@end
