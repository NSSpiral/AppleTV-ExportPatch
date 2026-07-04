/* Runtime dump - MFMailMimePart
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFMailMimePart : MFMimePart

+ (char)isRecognizedClassForContent:(NSObject *)arg0;
+ (Class)attachmentClass;

- (id)fileWrapperForcingDownload:(char)arg0;
- (void)configureFileWrapper:(NSObject *)arg0;
- (NSSet *)contentToOffset:(unsigned int)arg0 resultOffset:(unsigned int *)arg1 downloadIfNecessary:(char)arg2 asHTML:(char)arg3 isComplete:(char *)arg4;
- (NSSet *)htmlContentToOffset:(unsigned int)arg0 resultOffset:(unsigned int *)arg1 downloadIfNecessary:(char)arg2;
- (NSObject *)fileWrapperForDecodedObject:(NSObject *)arg0 withFileData:(id *)arg1;
- (char)_shouldContinueDecodingProcess;
- (NSString *)decodeTextRichtext;
- (id)decodeTextEnriched;
- (id)decodeTextHtml;
- (NSSet *)htmlContentToOffset:(unsigned int)arg0 resultOffset:(unsigned int *)arg1;
- (NSObject *)htmlContent;
- (id)decodeTextPlain;
- (NSObject *)decodeTextCalendar;
- (id)decodeMultipartAppledouble;
- (NSData *)storeData:(NSDictionary *)arg0 inMessage:(NSString *)arg1 isComplete:(char)arg2;
- (id)decodeMessageDelivery_status;
- (id)decodeMessageRfc822;
- (id)decodeMessagePartial;
- (NSObject *)decodeMessageExternal_body;

@end
