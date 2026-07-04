/* Runtime dump - PLPrivacy
 * Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

@interface PLPrivacy : NSObject
{
    NSObject<OS_dispatch_queue> * _isolationQueue;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    int _authStatus;
}

+ (PLPrivacy *)sharedInstance;
+ (void)enableForceOverrideTCC;
+ (void)disableForceOverrideTCC;

- (int)photosTCCAccessStatus;
- (char)isPhotosTCCAccessRestricted;
- (void)dealloc;
- (PLPrivacy *)init;
- (char)isPhotosAccessAllowedWithScope:(int)arg0 promptIfNeededWithHandler:(id /* block */)arg1;
- (char)_isPhotosAccessAllowedWithScope:(int)arg0 forceHandler:(char)arg1 accessAllowedHandler:(id /* block */)arg2;
- (char)isPhotosAccessAllowedPromptIfNeededWithHandler:(id /* block */)arg0;
- (void)photoAccessPowersActive;
- (char)isPhotoLibraryReadAccessAllowed;
- (char)isPhotosTCCAccessNotAllowed;
- (char)isPhotosTCCAccessAllowed;
- (void)isPhotosAccessAllowedWithScope:(int)arg0 handler:(id /* block */)arg1;
- (char)isPhotoLibrarySharingOrModificationAllowed;

@end
