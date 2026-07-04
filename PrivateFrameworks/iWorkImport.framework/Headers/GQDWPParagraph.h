/* Runtime dump - GQDWPParagraph
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDWPParagraph : GQDWPInlineList
{
    GQDSStyle * mParaStyle;
    long mListLevel;
    char mRestartList;
    char mContinue;
    char mIsHidden;
}

- (int)readAttributesFromReader:(struct _xmlTextReader *)arg0 processor:(TSCH3DRenderProcessor *)arg1;
- (TSWPParagraphStyle *)paragraphStyle;
- (char)restartList;
- (char)cont;
- (void)dealloc;
- (char)isHidden;
- (long)listLevel;
- (char)isBlank;

@end
