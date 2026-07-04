/* Runtime dump - OADDrawableProperties
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADDrawableProperties : OADProperties
{
    OADOrientedBounds * mOrientedBounds;
    OADHyperlink * mClickHyperlink;
    OADHyperlink * mHoverHyperlink;
    NSString * mTitle;
    NSString * mDescription;
    id mHasAspectRatioLocked;
    id mAspectRatioLocked;
    id mHasWrdInline;
    id mWrdInline;
}

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (id)clickHyperlink;
- (OADOrientedBounds *)orientedBounds;
- (void)setOrientedBounds:(OADOrientedBounds *)arg0;
- (void)setAltDescription:(NSString *)arg0;
- (id)hoverHyperlink;
- (void)setClickHyperlink:(id)arg0;
- (void)setHoverHyperlink:(id)arg0;
- (void)setAspectRatioLocked:(char)arg0;
- (void)setWrdInline:(char)arg0;
- (void)setAltTitle:(NSString *)arg0;
- (char)hasAspectRatioLocked;
- (char)isAspectRatioLocked;
- (char)hasClickHyperlink;
- (char)hasHoverHyperlink;
- (char)hasWrdInline;
- (char)isWrdInline;
- (NSString *)altTitle;
- (char)hasAltTitle;
- (NSString *)altDescription;
- (char)hasAltDescription;
- (void)removeUnnecessaryOverrides;
- (OADDrawableProperties *)initWithDefaults;
- (char)hasOrientedBounds;

@end
