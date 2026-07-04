/* Runtime dump - QLThumbnailServiceProxy
 * Image: /System/Library/PrivateFrameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

@interface QLThumbnailServiceProxy : NSObject
{
    NSXPCConnection * _connection;
    NSObject<QLThumbnailsInterface> * _proxy;
}

+ (QLThumbnailServiceProxy *)sharedInstance;

- (void)dealloc;
- (QLThumbnailServiceProxy *)init;
- (NSString *)forwardingTargetForSelector:(SEL)arg0;
- (void)askThumbnailAdditionIndex:(NSObject *)arg0;

@end
