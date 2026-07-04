/* Runtime dump - METouchRemoteDecryptionAgent
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRSingleton.h>
@interface METouchRemoteDecryptionAgent : BRSingleton
{
    NSData * _certData;
    NSData * _challenge;
}

+ (METouchRemoteDecryptionAgent *)singleton;
+ (void)setSingleton:(NSObject *)arg0;

- (NSString *)decryptMessage:(NSString *)arg0;
- (NSString *)certificateString;
- (NSString *)challengeString;
- (char)_sendCertToTouchDevices;
- (NSData *)_convertStringToData:(NSData *)arg0;
- (NSData *)_decryptStringFromData:(NSData *)arg0;
- (NSString *)_convertDataToString:(NSString *)arg0;
- (char)_sendNewChallengeToTouchDevices;
- (NSObject *)_updateChallenge;
- (void)dealloc;
- (METouchRemoteDecryptionAgent *)init;
- (void).cxx_destruct;

@end
