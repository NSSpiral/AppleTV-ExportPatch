/* Runtime dump - SSPlayInfoRequestContext
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSPlayInfoRequestContext : NSObject <SSXPCCoding, NSCopying>
{
    NSNumber * _accountIdentifier;
    NSNumber * _contentIdentifier;
    NSString * _playerGUID;
    NSData * _sic;
    NSArray * _sinfs;
    NSString * _playbackType;
}

@property (copy, nonatomic) NSString * playerGUID;
@property (copy, nonatomic) NSData * SICData;
@property (copy, nonatomic) NSArray * sinfs;
@property (copy, nonatomic) NSNumber * accountIdentifier;
@property (copy, nonatomic) NSNumber * contentIdentifier;
@property (copy, nonatomic) NSString * playbackType;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSString *)playbackType;
- (NSArray *)sinfs;
- (void)setSinfs:(NSArray *)arg0;
- (NSDictionary *)copyXPCEncoding;
- (SSPlayInfoRequestContext *)initWithXPCEncoding:(NSString *)arg0;
- (void)setPlayerGUID:(NSString *)arg0;
- (void)setSICData:(NSData *)arg0;
- (void)setAccountIdentifier:(NSNumber *)arg0;
- (void)setContentIdentifier:(NSNumber *)arg0;
- (void)dealloc;
- (SSPlayInfoRequestContext *)copyWithZone:(struct _NSZone *)arg0;
- (NSNumber *)accountIdentifier;
- (NSData *)SICData;
- (NSNumber *)contentIdentifier;
- (void)setPlaybackType:(NSString *)arg0;
- (NSString *)playerGUID;

@end
