/* Runtime dump - WDTableRowProperties
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDTableRowProperties : NSObject <NSCopying>
{
    WDTableProperties * mTableProperties;
    WDCharacterProperties * mCharacterProperties;
    id mOriginal;
    id mTracked;
    id mResolved;
    struct ? mOriginalProperties;
    struct ? mTrackedProperties;
}

- (void)addProperties:(NSDictionary *)arg0;
- (void)dealloc;
- (WDTableRowProperties *)init;
- (WDTableRowProperties *)copyWithZone:(struct _NSZone *)arg0;
- (long)height;
- (void).cxx_construct;
- (WDTableRowProperties *)initWithDocument:(NSObject *)arg0;
- (void)setHeight:(long)arg0;
- (void)setHeader:(char)arg0;
- (char)header;
- (NSDictionary *)characterProperties;
- (char)isHeightOverridden;
- (NSDictionary *)tableProperties;
- (void)setResolveMode:(int)arg0;
- (int)resolveMode;
- (void)setWidthBefore:(short)arg0;
- (void)setWidthBeforeType:(int)arg0;
- (void)setWidthAfter:(short)arg0;
- (void)setWidthAfterType:(int)arg0;
- (void)setHeightType:(int)arg0;
- (char)isWidthBeforeOverridden;
- (short)widthBefore;
- (char)isWidthBeforeTypeOverridden;
- (int)widthBeforeType;
- (char)isWidthAfterOverridden;
- (short)widthAfter;
- (char)isWidthAfterTypeOverridden;
- (int)widthAfterType;
- (char)isHeaderOverridden;
- (char)isHeightTypeOverridden;
- (int)heightType;
- (void)addPropertiesValues:(struct ? *)arg0 to:(struct ? *)arg1;

@end
