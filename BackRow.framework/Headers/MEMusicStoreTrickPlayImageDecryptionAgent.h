/* Runtime dump - MEMusicStoreTrickPlayImageDecryptionAgent
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRMusicStoreImageDecryptionAgent;
@interface MEMusicStoreTrickPlayImageDecryptionAgent : NSObject <BRMusicStoreImageDecryptionAgent>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSData *)decryptImageBuffer:(NSData *)arg0;

@end
