/* Runtime dump - TSWPTOCMapEntry
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPTOCMapEntry : NSObject
{
    char _showInTOC;
    TSWPTOCEntryStyle * _tocEntryStyle;
}

@property (retain, nonatomic) TSWPTOCEntryStyle * tocEntryStyle;
@property (nonatomic) char showInTOC;

- (TSWPTOCMapEntry *)initWithTOCEntryStyle:(NSObject *)arg0 showInTOC:(char)arg1;
- (TSWPTOCEntryStyle *)tocEntryStyle;
- (void)setTocEntryStyle:(TSWPTOCEntryStyle *)arg0;
- (char)showInTOC;
- (void)setShowInTOC:(char)arg0;

@end
