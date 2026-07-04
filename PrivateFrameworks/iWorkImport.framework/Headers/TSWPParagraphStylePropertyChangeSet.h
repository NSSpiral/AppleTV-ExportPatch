/* Runtime dump - TSWPParagraphStylePropertyChangeSet
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPParagraphStylePropertyChangeSet : TSWPCharacterStylePropertyChangeSet
{
    TSSSpecInteger * _alignment;
    TSSSpecString * _decimalTab;
    TSSSpecDouble * _defaultTabStops;
    TSSSpecColor * _fill;
    TSSSpecDouble * _firstLineIndent;
    TSWPSpecParagraphStyle * _followingParagraphStyle;
    TSSSpecBool * _hyphenate;
    TSWPSpecListStyle * _initialListStyle;
    TSSSpecBool * _keepLinesTogether;
    TSSSpecBool * _keepWithNext;
    TSSSpecDouble * _leftIndent;
    TSWPSpecLineSpacing * _lineSpacing;
    TSSSpecInteger * _outlineLevel;
    TSSSpecInteger * _outlineStyleType;
    TSSSpecBool * _pageBreakBefore;
    TSSSpecInteger * _paragraphBorders;
    TSWPSpecRuleOffset * _paragraphRuleOffset;
    TSSSpecDouble * _paragraphRuleWidth;
    TSSSpecDouble * _rightIndent;
    TSSSpecDouble * _spaceAfter;
    TSSSpecDouble * _spaceBefore;
    TSDSpecStroke * _stroke;
    TSWPSpecTabs * _tabs;
    TSSSpecInteger * _widowControl;
    char _definedAlignment;
    char _definedDecimalTab;
    char _definedDefaultTabStops;
    char _definedFill;
    char _definedFirstLineIndent;
    char _definedFollowingParagraphStyle;
    char _definedHyphenate;
    char _definedInitialListStyle;
    char _definedKeepLinesTogether;
    char _definedKeepWithNext;
    char _definedLeftIndent;
    char _definedLineSpacing;
    char _definedOutlineLevel;
    char _definedOutlineStyleType;
    char _definedPageBreakBefore;
    char _definedParagraphBorders;
    char _definedParagraphRuleOffset;
    char _definedParagraphRuleWidth;
    char _definedRightIndent;
    char _definedSpaceAfter;
    char _definedSpaceBefore;
    char _definedStroke;
    char _definedTabs;
    char _definedWidowControl;
}

- (void)setBoxedValue:(id)arg0 forProperty:(int)arg1;
- (void)setSpec:(NSObject *)arg0 forProperty:(int)arg1;
- (void)setUnsetSpecForProperty:(int)arg0;
- (void)enumerateDefinedPropertiesWithBlock:(id /* block */)arg0;

@end
