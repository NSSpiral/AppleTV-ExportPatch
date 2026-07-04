/* Runtime dump - MFLANContinuationContext
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFLANContinuationContext : NSObject
{
    unsigned short _port;
    NSString * _host;
}

@property (copy, nonatomic) NSString * host;
@property (nonatomic) unsigned short port;

- (NSString *)host;
- (unsigned short)port;
- (void)setHost:(NSString *)arg0;
- (void)setPort:(unsigned short)arg0;

@end
