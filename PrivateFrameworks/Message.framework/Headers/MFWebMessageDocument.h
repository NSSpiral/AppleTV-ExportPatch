/* Runtime dump - MFWebMessageDocument
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFWebMessageDocument : MFWebAttachmentSource
{
    unsigned int _uniqueId;
    NSURL * _baseURL;
    MFMimeBody * _mimeBody;
    MFMimePart * _htmlPart;
    NSData * _htmlData;
    MFLock * _lock;
    NSMutableDictionary * _partsByURL;
    NSMutableDictionary * _partsByFilename;
    unsigned long _preferredEncoding;
    MFAttachmentManager * _attachmentManager;
}

@property (readonly) NSURL * baseURL;
@property (readonly) MFMimeBody * mimeBody;
@property (readonly) MFMimePart * mimePart;
@property (readonly) NSData * htmlData;
@property unsigned long preferredEncoding;
@property (retain, nonatomic) MFAttachmentManager * attachmentManager;

+ (NSURL *)sourceForURL:(NSURL *)arg0;

- (void)dealloc;
- (MFWebMessageDocument *)init;
- (NSURL *)baseURL;
- (MFMimeBody *)mimeBody;
- (unsigned long)preferredEncoding;
- (void)setPreferredEncoding:(unsigned long)arg0;
- (MFMimePart *)mimePart;
- (MFWebMessageDocument *)initWithMimePart:(MFMimePart *)arg0;
- (MFWebMessageDocument *)_initWithMimePart:(MFMimePart *)arg0 htmlData:(NSData *)arg1;
- (NSURL *)attachmentForURL:(NSURL *)arg0;
- (NSURL *)mimePartForURL:(NSURL *)arg0;
- (NSData *)htmlData;
- (MFAttachmentManager *)attachmentManager;
- (MFWebMessageDocument *)initWithMimeBody:(MFMimeBody *)arg0;
- (MFWebMessageDocument *)initWithMimePart:(MFMimePart *)arg0 htmlData:(NSData *)arg1 encoding:(unsigned long)arg2;
- (NSObject *)attachmentsInDocument;
- (NSSet *)preferredCharacterSet;
- (id)attachmentForCID:(id)arg0;
- (void)setAttachmentManager:(MFAttachmentManager *)arg0;
- (MFMessageFileWrapper *)fileWrapper;

@end
