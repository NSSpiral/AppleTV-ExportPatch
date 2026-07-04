/* Runtime dump - ATVPushNotificationTypeOperation
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVPushNotificationTypeOperation : NSOperation
{
    NSURL * _url;
    NSData * _body;
    NSString * _debugStr;
}

@property (readonly, copy, nonatomic) NSURL * url;
@property (readonly, copy, nonatomic) NSData * body;
@property (readonly, copy, nonatomic) NSString * debugStr;

- (NSURL *)url;
- (NSData *)body;
- (void)main;
- (void).cxx_destruct;
- (ATVPushNotificationTypeOperation *)initWithURL:(NSURL *)arg0 body:(NSData *)arg1 debugStr:(NSString *)arg2;
- (NSString *)debugStr;

@end
