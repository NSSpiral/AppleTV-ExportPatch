/* Runtime dump - NSFileProviderProxy
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFileProviderProxy : NSFileReactorProxy
{
    char _wantsWriteNotifications;
}

@property char wantsWriteNotifications;

- (void)setItemLocation:(NSFileAccessNode *)arg0;
- (void)observePresentationChangeOfKind:(id)arg0 withPresenter:(_UIAlertControllerShimPresenter *)arg1 url:(NSURL *)arg2 newURL:(NSURL *)arg3;
- (void)setWantsWriteNotifications:(char)arg0;
- (NSURL *)provideItemAtURL:(SEL)arg0 forAccessClaim:(NSFileMultipleAccessClaim *)arg1 completionHandler:(id /* block */)arg2;
- (void)providePhysicalURLForURL:(NSURL *)arg0 completionHandler:(id /* block */)arg1;
- (void)observeEndOfWriteAtLocation:(NSObject *)arg0 forAccessClaim:(NSFileMultipleAccessClaim *)arg1;
- (void)forwardUsingMessageSender:(NSObject *)arg0;
- (void)provideLogicalURLForURL:(NSURL *)arg0 completionHandler:(id /* block */)arg1;
- (char)wantsWriteNotifications;

@end
