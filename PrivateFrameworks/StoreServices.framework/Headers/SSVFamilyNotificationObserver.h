/* Runtime dump - SSVFamilyNotificationObserver
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVFamilyNotificationObserver : NSObject
{
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    id _notificationHandler;
    char _observing;
}

+ (void)initialize;
+ (SSVFamilyNotificationObserver *)familyNotificationObserverWithNotificationHandler:(AVAssetWriterFigAssetWriterNotificationHandler *)arg0;

- (void)dealloc;
- (SSVFamilyNotificationObserver *)init;
- (void).cxx_destruct;
- (void)stopObserving;
- (SSVFamilyNotificationObserver *)_initWithNotificationHandler:(AVAssetWriterFigAssetWriterNotificationHandler *)arg0;
- (void)_startObserving;
- (void)_didReceiveNotification;

@end
