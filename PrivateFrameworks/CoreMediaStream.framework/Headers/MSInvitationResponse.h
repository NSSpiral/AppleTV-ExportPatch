/* Runtime dump - MSInvitationResponse
 * Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSInvitationResponse : NSObject
{
    MSShare * _invitation;
    char _accept;
}

@property (retain, nonatomic) MSShare * invitation;
@property (nonatomic) char accept;

+ (MSInvitationResponse *)responseWithInvitation:(MSShare *)arg0 accept:(char)arg1;

- (void).cxx_destruct;
- (MSInvitationResponse *)initWithInvitation:(MSShare *)arg0 accept:(char)arg1;
- (MSShare *)invitation;
- (void)setInvitation:(MSShare *)arg0;
- (char)accept;
- (void)setAccept:(char)arg0;

@end
