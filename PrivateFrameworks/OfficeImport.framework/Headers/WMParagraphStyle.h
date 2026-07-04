/* Runtime dump - WMParagraphStyle
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WMParagraphStyle : WMStyle
{
    char mIsInTextFrame;
}

+ (char)isShadingNull:(id)arg0;

- (void)addParagraphProperties:(NSDictionary *)arg0 fromListLevelProperties:(char)arg1;
- (WMParagraphStyle *)initWithWDStyle:(NSObject *)arg0 isInTextFrame:(char)arg1;
- (void)addParagraphStyleCharacterProperties:(NSDictionary *)arg0;
- (char)isRTLWithOverridesFromProperties:(NSDictionary *)arg0;
- (NSDictionary *)leadingMarginPropertyNameWithOverridesFromProperties:(NSDictionary *)arg0;
- (void)mapBorders:(id)arg0;
- (WMParagraphStyle *)initWithWDParagraphProperties:(NSDictionary *)arg0 isInTextFrame:(char)arg1;

@end
