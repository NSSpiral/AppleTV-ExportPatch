/* Runtime dump - IMSuperToSuperSanitizerContext
 * Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMSuperToSuperSanitizerContext : IMFromSuperParserContext
{
    NSMutableAttributedString * _content;
    NSMutableArray * _attachments;
    NSString * _backgroundColor;
    NSString * _foregroundColor;
    unsigned int _offset;
    int _baseWritingDirection;
    char _extractAttachments;
    char _hadBaseWritingDirectionAttribute;
}

@property (readonly, retain) NSAttributedString * sanitizedContent;
@property (readonly, retain) NSArray * attachments;

- (void)dealloc;
- (NSString *)name;
- (NSArray *)attachments;
- (NSArray *)resultsForLogging;
- (void)parserDidEnd:(id)arg0;
- (void)parserDidStart:(id)arg0 bodyAttributes:(NSDictionary *)arg1;
- (void)parser:(NSXMLParser *)arg0 foundAttributes:(NSDictionary *)arg1 inRange:(struct _NSRange)arg2 fileTransferGUID:(NSString *)arg3 filename:(NSString *)arg4 bookmark:(BookmarkDAVBookmark *)arg5 width:(int *)arg6 height:(int *)arg7 emoji:(UIKeyboardEmoji *)arg8;
- (void)parser:(NSXMLParser *)arg0 foundAttributes:(NSDictionary *)arg1 inRange:(struct _NSRange)arg2 characters:(NSString *)arg3;
- (IMSuperToSuperSanitizerContext *)initWithAttributedString:(NSAttributedString *)arg0 extractAttachments:(char)arg1;
- (NSAttributedString *)sanitizedContent;

@end
