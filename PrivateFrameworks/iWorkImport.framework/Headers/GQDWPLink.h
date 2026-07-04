/* Runtime dump - GQDWPLink
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDWPLink : GQDWPInlineList
{
    GQDSStyle * mCharStyle;
    struct __CFString * mHref;
}

- (int)readStyleFromReader:(struct _xmlTextReader *)arg0 processor:(TSCH3DRenderProcessor *)arg1;
- (TSWPCharacterStyle *)characterStyle;
- (void)dealloc;
- (struct __CFString *)href;

@end
