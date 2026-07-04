/* Runtime dump - AVExternalDeviceScreenBorrowToken
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVExternalDeviceScreenBorrowToken : NSObject
{
    AVExternalDevice * _externalDevice;
    NSString * _client;
    NSString * _reason;
}

@property (readonly, nonatomic) NSString * client;
@property (readonly, nonatomic) NSString * reason;

- (AVExternalDeviceScreenBorrowToken *)initWithExternalDevice:(AVExternalDevice *)arg0 client:(NSString *)arg1 reason:(NSString *)arg2;
- (void)dealloc;
- (AVExternalDeviceScreenBorrowToken *)init;
- (NSString *)reason;
- (NSString *)client;
- (void)finalize;

@end
