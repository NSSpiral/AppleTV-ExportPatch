/* Runtime dump - OCCancel
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OCCancel : NSObject <TCCancelDelegate>
{
    char mIsCancelled;
    char mIsQuit;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)cancel;
- (OCCancel *)init;
- (char)isCancelled;
- (char)isQuit;
- (void)quit;

@end
