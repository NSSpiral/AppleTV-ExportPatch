/* Runtime dump - IMToSuperParserContext
 * Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMToSuperParserContext : IMXMLParserContext
{
    unsigned int _underlineCount;
    unsigned int _boldCount;
    unsigned int _italicCount;
    unsigned int _strikethroughCount;
    unsigned int _messagePartNumber;
    NSMutableArray * _fontFamilyStack;
    NSMutableArray * _fontSizeStack;
    NSMutableArray * _linkStack;
    NSMutableArray * _backgroundColorStack;
    NSMutableArray * _foregroundColorStack;
    NSMutableDictionary * _currentAttributes;
    char _didAddBodyAttributes;
    int _baseWritingDirection;
    NSString * _backgroundColor;
    NSString * _foregroundColor;
    NSMutableAttributedString * _body;
    NSMutableArray * _fileTransferGUIDs;
}

@property (retain, nonatomic) NSString * backgroundColor;
@property (retain, nonatomic) NSString * foregroundColor;
@property (readonly, nonatomic) NSAttributedString * body;
@property (retain, nonatomic) NSArray * fileTransferGUIDs;
@property int baseWritingDirection;

- (void)dealloc;
- (void)setBackgroundColor:(NSString *)arg0;
- (NSString *)backgroundColor;
- (NSString *)name;
- (void)reset;
- (void)appendString:(NSString *)arg0;
- (NSAttributedString *)body;
- (void)setBaseWritingDirection:(int)arg0;
- (int)baseWritingDirection;
- (NSString *)foregroundColor;
- (void)_updateFontSize;
- (void)setForegroundColor:(NSString *)arg0;
- (NSArray *)fileTransferGUIDs;
- (void)setFileTransferGUIDs:(NSArray *)arg0;
- (NSArray *)resultsForLogging;
- (void)_clearIvars;
- (void)_initIvars;
- (void)_updateFontFamily;
- (void)_pushValue:(id)arg0 ontoStack:(id)arg1 attributeName:(NSString *)arg2;
- (void)_popValueFromStack:(id)arg0 attributeName:(NSString *)arg1;
- (void)appendInlineImageWithGUID:(NSString *)arg0 filename:(NSString *)arg1 width:(int)arg2 height:(int)arg3 emoji:(int)arg4;
- (void)_incrementMessagePartNumber;
- (void)incrementBoldCount;
- (void)decrementBoldCount;
- (void)incrementItalicCount;
- (void)decrementItalicCount;
- (void)incrementUnderlineCount;
- (void)decrementUnderlineCount;
- (void)incrementStrikethroughCount;
- (void)decrementStrikethroughCount;
- (void)pushFontFamily:(id)arg0;
- (void)popFontFamily;
- (void)pushFontSize:(NSObject *)arg0;
- (void)popFontSize;
- (void)pushLink:(id)arg0;
- (void)popLink;
- (void)pushBackgroundColor:(UIColor *)arg0;
- (void)popBackgroundColor;
- (void)pushForegroundColor:(UIColor *)arg0;
- (void)popForegroundColor;
- (void)appendFileTransferWithGUID:(NSString *)arg0;
- (void)appendInlineImageWithGUID:(NSString *)arg0 filename:(NSString *)arg1 width:(int)arg2 height:(int)arg3;

@end
