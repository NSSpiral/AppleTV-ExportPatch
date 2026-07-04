/* Runtime dump - IMFromSuperParserContext
 * Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMFromSuperParserContext : IMAttributedStringParserContext
{
    NSMutableArray * _inlinedFileTransferGUIDs;
    NSMutableArray * _standaloneFileTransferGUIDs;
}

@property (readonly, nonatomic) NSArray * inlinedFileTransferGUIDs;
@property (readonly, nonatomic) NSArray * standaloneFileTransferGUIDs;

- (void)dealloc;
- (NSString *)name;
- (IMFromSuperParserContext *)initWithAttributedString:(NSAttributedString *)arg0;
- (NSArray *)resultsForLogging;
- (void)parserDidStart:(id)arg0;
- (void)parser:(NSXMLParser *)arg0 foundAttributes:(NSDictionary *)arg1 inRange:(struct _NSRange)arg2;
- (void)parserDidStart:(id)arg0 bodyAttributes:(NSDictionary *)arg1;
- (void)parser:(NSXMLParser *)arg0 foundAttributes:(NSDictionary *)arg1 inRange:(struct _NSRange)arg2 fileTransferGUID:(NSString *)arg3 filename:(NSString *)arg4 bookmark:(BookmarkDAVBookmark *)arg5 width:(int *)arg6 height:(int *)arg7 emoji:(UIKeyboardEmoji *)arg8;
- (void)parser:(NSXMLParser *)arg0 foundAttributes:(NSDictionary *)arg1 inRange:(struct _NSRange)arg2 characters:(NSString *)arg3;
- (void)parser:(NSXMLParser *)arg0 foundAttributes:(NSDictionary *)arg1 inRange:(struct _NSRange)arg2 fileTransferGUID:(NSString *)arg3 filename:(NSString *)arg4 bookmark:(BookmarkDAVBookmark *)arg5 width:(int *)arg6 height:(int *)arg7;
- (NSArray *)inlinedFileTransferGUIDs;
- (NSArray *)standaloneFileTransferGUIDs;

@end
