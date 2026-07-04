/* Runtime dump - MFMessageSigner
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFMessageSigner : NSObject
{
    int _status;
    struct __SecTrust * _trust;
    NSString * _sender;
    NSString * _uncommentedSender;
}

@property (readonly, nonatomic) NSString * sender;
@property (readonly, nonatomic) NSString * commonName;
@property (readonly, nonatomic) NSString * emailAddress;
@property (readonly, nonatomic) int action;
@property (readonly, nonatomic) NSArray * certificates;
@property (readonly, nonatomic) MFError * error;

- (void)dealloc;
- (int)action;
- (NSString *)sender;
- (MFError *)error;
- (NSString *)emailAddress;
- (MFMessageSigner *)initWithSender:(NSString *)arg0 trust:(struct __SecTrust *)arg1 verification:(int)arg2;
- (NSString *)commonName;
- (NSArray *)certificates;
- (struct __SecTrust *)copyTrust;
- (void)addTrustException;
- (void)removeTrustException;
- (char)hasTrustException;

@end
