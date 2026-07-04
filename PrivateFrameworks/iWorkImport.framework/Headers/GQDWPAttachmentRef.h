/* Runtime dump - GQDWPAttachmentRef
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDWPAttachmentRef : GQDWPAttachment
{
    GQDRoot * mRoot;
    char * mUID;
}

- (GQDWPAttachmentRef *)initWithUID:(char *)arg0 root:(NSObject *)arg1;
- (void)dealloc;
- (TSDDrawableInfo *)drawable;

@end
