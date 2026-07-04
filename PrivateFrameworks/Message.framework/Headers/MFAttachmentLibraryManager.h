/* Runtime dump - MFAttachmentLibraryManager
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFAttachmentLibraryManager : MFAttachmentComposeManager

- (NSURL *)_dataProviderForAttachmentURL:(NSURL *)arg0 error:(id *)arg1;
- (void)removeProviderForBaseURL:(NSURL *)arg0;
- (MFAttachmentLibraryManager *)initWithPrimaryLibrary:(NSObject *)arg0;

@end
