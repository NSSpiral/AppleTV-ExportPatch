/* Runtime dump - MSInvitationStrings
 * Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSInvitationStrings : NSObject
{
    NSString * _title;
    NSString * _body;
}

@property (retain, nonatomic) NSString * title;
@property (retain, nonatomic) NSString * body;

+ (NSString *)invitationStringsWithTitle:(NSString *)arg0 body:(id /* block */)arg1;

- (void)setTitle:(NSString *)arg0;
- (NSString *)title;
- (NSString *)body;
- (void).cxx_destruct;
- (void)setBody:(NSString *)arg0;
- (MSInvitationStrings *)initWithTitle:(NSString *)arg0 body:(id /* block */)arg1;

@end
