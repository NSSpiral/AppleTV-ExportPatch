/* Runtime dump - OADBlipRef
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADBlipRef : NSObject <NSCopying>
{
    long mIndex;
    NSString * mName;
    NSMutableArray * mEffects;
    OADBlip * mBlip;
}

+ (NSObject *)blipRefWithIndex:(long)arg0 name:(NSString *)arg1 blip:(id)arg2;
+ (int)blipTypeForContentType:(NSObject *)arg0;
+ (NSObject *)blipRefWithIndex:(long)arg0 name:(NSString *)arg1 blip:(id)arg2 effects:(struct tvec2<int>)arg3;
+ (int)blipTypeForExtension:(id)arg0;
+ (int)blipTypeForImageData:(NSData *)arg0;
+ (OADBlipRef *)inflatedExtensionForGzippedExtension:(id)arg0;

- (void)dealloc;
- (OADBlipRef *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (OADBlipRef *)copyWithZone:(struct _NSZone *)arg0;
- (long)index;
- (void)setIndex:(long)arg0;
- (id)blip;
- (NSArray *)effects;
- (void)addEffect:(NSObject *)arg0;
- (unsigned int)effectCount;
- (NSObject *)effectAtIndex:(unsigned int)arg0;
- (void)setEffects:(NSArray *)arg0;
- (OADBlipRef *)initWithIndex:(long)arg0 name:(NSString *)arg1 blip:(id)arg2;
- (OADBlipRef *)initWithIndex:(long)arg0 name:(NSString *)arg1 blip:(id)arg2 effects:(struct tvec2<int>)arg3;
- (void)setBlip:(id)arg0;
- (void)removeEffectAtIndex:(unsigned int)arg0;
- (char)isNull;

@end
