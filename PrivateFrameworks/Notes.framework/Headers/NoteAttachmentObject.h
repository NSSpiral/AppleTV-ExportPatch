/* Runtime dump - NoteAttachmentObject
 * Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@interface NoteAttachmentObject : NSManagedObject

@property (retain, nonatomic) NSString * contentID;
@property (retain, nonatomic) NSString * filename;
@property (retain, nonatomic) NSString * mimeType;
@property (retain, nonatomic) NoteObject * note;

+ (char)migrateFileForAttachment:(NSObject *)arg0 toCurrentAttachmentPathWithError:(id *)arg1;
+ (char)applyFileAttributesForAttachment:(NSObject *)arg0 error:(id *)arg1;
+ (char)migrateAttachmentRelatedFilesInContext:(NSObject *)arg0 error:(id *)arg1;

- (NSError *)attachmentDataFileURLWithError:(id *)arg0;
- (char)persistAttachmentData:(NSData *)arg0 error:(id *)arg1;
- (NSError *)attachmentDataWithError:(id *)arg0;
- (void)prepareForDeletion;

@end
