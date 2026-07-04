/* Runtime dump - MFMessageBody
 * Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFMessageBody : NSObject
{
    MFMessage * _message;
}

- (unsigned int)numberOfAttachmentsSigned:(char *)arg0 encrypted:(char *)arg1;
- (void)dealloc;
- (MFMessage *)message;
- (NSData *)rawData;
- (void)setMessage:(MFMessage *)arg0;
- (NSSet *)attachments;
- (NSSet *)contentToOffset:(unsigned int)arg0 resultOffset:(unsigned int *)arg1 asHTML:(char)arg2;
- (char)isRich;
- (char)isHTML;
- (id)textHtmlPart;
- (NSSet *)attachmentURLs;
- (NSSet *)htmlContentToOffset:(unsigned int)arg0 resultOffset:(unsigned int *)arg1;
- (NSObject *)htmlContent;
- (NSSet *)contentToOffset:(unsigned int)arg0 resultOffset:(unsigned int *)arg1 asHTML:(char)arg2 isComplete:(char *)arg3;

@end
