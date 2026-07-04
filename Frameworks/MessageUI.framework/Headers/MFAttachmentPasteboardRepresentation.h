/* Runtime dump - MFAttachmentPasteboardRepresentation
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFAttachmentPasteboardRepresentation : NSObject <NSCoding, MFAttachmentPasteboardRepresentation>
{
    NSData * _data;
    NSString * _name;
    NSString * _mimeType;
}

@property (retain, nonatomic) NSData * data;
@property (retain, nonatomic) NSString * name;
@property (retain, nonatomic) NSString * mimeType;
@property (readonly, nonatomic) char valid;

- (MFAttachmentPasteboardRepresentation *)initWithAttachment:(NSObject *)arg0;
- (MFAttachmentPasteboardRepresentation *)initWithMFAttachment:(NSObject *)arg0;
- (void)dealloc;
- (MFAttachmentPasteboardRepresentation *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (char)isValid;
- (NSData *)data;
- (void)setData:(NSData *)arg0;
- (NSString *)mimeType;
- (void)setMimeType:(NSString *)arg0;

@end
