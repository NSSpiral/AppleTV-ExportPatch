/* Runtime dump - GQDWPBookmark
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDWPBookmark : GQDWPInlineList
{
    struct __CFString * mName;
    char mRanged;
    char mHidden;
}

- (int)readAttributesFromReader:(struct _xmlTextReader *)arg0 processor:(TSCH3DRenderProcessor *)arg1;
- (char)isRanged;
- (void)dealloc;
- (char)isHidden;
- (struct __CFString *)name;

@end
