/* Runtime dump - GQDWPStorage
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDWPStorage : NSObject
{
    GQDSStylesheet * mStylesheet;
    struct __CFArray * mBody;
    struct __CFArray * mAttachments;
}

- (void)dealloc;
- (struct __CFArray *)attachments;
- (VKStylesheet *)stylesheet;

@end
