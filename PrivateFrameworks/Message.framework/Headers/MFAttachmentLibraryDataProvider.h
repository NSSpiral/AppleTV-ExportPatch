/* Runtime dump - MFAttachmentLibraryDataProvider
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFAttachmentLibraryDataProvider : NSObject <MFAttachmentDataProvider>
{
    MFWeakReferenceHolder * _messageLibraryHolder;
}

@property (weak, nonatomic) MFMessageLibrary * messageLibrary;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (MFAttachmentLibraryDataProvider *)initWithLibrary:(ML3MusicLibrary *)arg0;
- (void)dealloc;
- (char)fetchDataForAttachment:(NSObject *)arg0 withDataConsumer:(NSObject *)arg1 error:(id *)arg2;
- (void)setMessageLibrary:(MFMessageLibrary *)arg0;
- (NSObject *)messageForAttachment:(NSObject *)arg0;
- (MFMessageLibrary *)messageLibrary;
- (NSObject *)fetchLocalDataForAttachment:(NSObject *)arg0;

@end
